#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

struct MediaSection {
    string mediaType;
    bool active = true;
    vector<string> rtpmapLines;
};

// Split SDP into media sections
vector<MediaSection> parseMediaSections(const string& sdp) {
    vector<MediaSection> sections;
    stringstream ss(sdp);
    string line;
    MediaSection* current = nullptr;

    while (getline(ss, line)) {
        if (line.rfind("m=", 0) == 0) {
            sections.push_back(MediaSection());
            current = &sections.back();
            current->mediaType = line.substr(2, line.find(' ', 2) - 2);
        } else if (current) {
            if (line == "a=inactive") {
                current->active = false;
            } else if (line.rfind("a=rtpmap:", 0) == 0) {
                current->rtpmapLines.push_back(line);
            }
        }
    }

    return sections;
}

// Extract active audio codecs
vector<string> getActiveAudioCodecs(const string& sdp) {
    vector<string> result;
    auto sections = parseMediaSections(sdp);
    for (const auto& section : sections) {
        if (section.mediaType == "audio" && section.active) {
            for (const auto& rtp : section.rtpmapLines) {
                size_t spacePos = rtp.find(' ');
                if (spacePos != string::npos) {
                    result.push_back(rtp.substr(spacePos + 1));
                }
            }
        }
    }
    return result;
}

// Extract active video codecs
vector<string> getActiveVideoCodecs(const string& sdp) {
    vector<string> result;
    auto sections = parseMediaSections(sdp);
    for (const auto& section : sections) {
        if (section.mediaType == "video" && section.active) {
            for (const auto& rtp : section.rtpmapLines) {
                size_t spacePos = rtp.find(' ');
                if (spacePos != string::npos) {
                    result.push_back(rtp.substr(spacePos + 1));
                }
            }
        }
    }
    return result;
}

int main() {
    string sdp = R"(v=0
o=- 3639305077 2 IN IP4 127.0.0.1
s= -
t=0 0
m=audio 0 RTP/AVP 105
a=rtpmap:105 mpeg4-generic/16000
m=audio 0 RTP/AVP 0
a=rtpmap:0 PCMU/8000
a=inactive
m=video 0 RTP/AVP 96
a=rtpmap:96 H264/90000
a=inactive
m=video 0 RTP/AVP 106
a=rtpmap:106 H265/90000
a=inactive)";

    auto audioCodecs = getActiveAudioCodecs(sdp);
    auto videoCodecs = getActiveVideoCodecs(sdp);

    cout << "Active Audio Codecs:\n";
    for (const auto& codec : audioCodecs) {
        cout << "  " << codec << "\n";
    }

    cout << "Active Video Codecs:\n";
    for (const auto& codec : videoCodecs) {
        cout << "  " << codec << "\n";
    }

    return 0;
}

