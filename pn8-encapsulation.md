# Encapsulation

- Combine packet switching and layering
- [header | payload | footer]
- e.g. IP packet encapsulate TCP segments
- HTTP GET <- payload of TCP
- [Wifi (footer) | IP | TCP | TCP GET | TCP | IP | Wifi(hdr)] (RHS leaves first)
- some people do [header | data | footer ] (software - lower addr comes first)
- "(http get) inside (tcp segment) inside (ip packet) inside (wifi-frame)"
- wireshark shows such encapsolation
- { Link
    { TCP
        { IP
            { HTTP
                PAYLOAD
            }
        }
    }
}
- with VPN, you don't have to sprinkle the security to every layer
- You do: IP (VPN gateway) [TCP [ TLS [IP [...] Ip ] TLS] TCP ... 