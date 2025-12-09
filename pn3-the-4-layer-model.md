# What the internet is
4-layer model: intuition is for re-use

[---Application---]
define syntax and semantics of the data between two endpoints (http: GET, URL)
in the application view, it think App1 sends http request to App2 (communicate with its peer layers)
without regard to how the layer below gets it there.
[---Transport---]
This is the answer to the fact that Network layer does not guarantee datagram
and the order of datagram. TCP will guarantee it and re-order it for you.
TCP: provides service to the application that guarantees reliable + ordered data delivery
[---Network---]
deliver packets end-to-end
packet: [data | from | to (header)]
the network gives the datagram to the link
i.e., the link layer provides the service to the network layer
On the other end, link layer gives the datagram to dest's network layer.
Network layer does not have to care how Link layer works (WiFi, ethernet works differently)
Common well-define APIs of the layer below.
Network layer is special: must use Internet Protocol.
IP makes Best-attempt (but makes no promises)
IP datagram can get lost.
[---Link---]
carries data to another link one at a time (ethernet)

IP is the "thin waist". You have no choice at the network layer. You have to use IP.
Applications: http, smtp, ssh, ...
Transport: TCP, UDP, RTP
Link: Ethernet, WiFi, DSL, 4G, ...

in 1990s: 7-layer OSI model <- replaced 4-layer model now !
People still use its numbering like referring to application as "layer 7" etc.