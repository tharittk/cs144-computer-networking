# UDP Service Model

- no need for reliable-guarantee mechanism
- as usual, UDP datagram is encapsulated in side IP datagram
- only 4 fields in the headder: source port, destination port, length, checksum (optional in IPv4)
- UDP checksum use IP from IP layer as well (break the design separation) - IPv4
- UDP ~ demultiplexing: send data A -> B with the appropriate application (port) - some people even call client-side multiplexing
- no mechanism to detect missing / miss-seq, no flow control
- application may ask for re-transmisiion itself (build your own though)
- DNS, NTP used UDP service (no need to establish connection with the server)
