# Network Applications

- Wiidely-used model: Bidirection, reliable byte stream
- A [write buffer][read buffer] <---Internet---> B
- Either side can close the connection (connection closed by peers).
- Http: client send commands (GET, ...), reponse (200 OK, etc.)
- Http is document centric (text file)
- Bit torrent: client can request to many other clients, client join & leave "swarm"
, still use the bidirectional, reliable byte stream.
- client contacts the tracker to get the list of other clients who serves the file.
- Dense graph from the client exchanging data
- Skype: simple mode is just like the http.
- in skype you have 2 clients (not client-server) and this is important
- complication: client A <----> NAT | client B
- this means client B can open connection to the internet freely
- but others cannot reach B directly. Skype has to find some way around this.
- Randezvous server: client B connects to R. server. Then A call R. and tell B.
- If then B accpets, B opens the connection to A (this is OK because A is not behind the NAT).
- "Reverse Connection" direction of the expected initiation is reversed.
- What if both clients are behind NAT ? Relay. A and B both connect to Relay.
- Relay send to A's NAT and B's NAT --- and A, B read from that.


