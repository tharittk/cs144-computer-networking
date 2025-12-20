# TCP setup and tearnow
![tcp](https://upload.wikimedia.org/wikipedia/commons/f/f6/Tcp_state_diagram_fixed_new.svg)
- you can have reliable communication with stateless system but it is easier to build the system with some notion of state
- 3-way handshake: 
active opener send (Syn, S_A) <- S_A is a randomized seqno.
passive side respond with (Syn, S_P, ACK, S_A+1) S_A+1 <- we have ack the S_A, S_A + 1 is the next expected
active opener send (S_A+1, ACK, S_P + 1) <- I expect the S_P+1 next:: control packets, have length 0
- TCP also supports simultaneous open
- both sides send Syn at the same time
- send (Syn, S_A) || send (Syn, S_P)
- send (Syn, S_A, ACK, S_P+1) -- A acknowledges that it see S_P || (Syn, S_P, ACK, S_A+1) -- Passive (P) acknowledges that it see S_A
[https://totozhang.github.io/2016-01-10-tcp-simutaneous-connection/]
- note that this takes 4 packets
- [--- wireshark example ---]
- Connection Teardown: sending FIN bit
- But this is bidirectional. You can only close when both sides have nothing to say.
- A -> B: FIN, seq SA, ack SB
- B -> A: ack SA+1
- B -> A: A: FIN, seq SB, ack SA+1
- A -> B: ack SB+1
- what if the FIN packet is lost in the network ?
- active closer do time-wait. You keep the socket around ~ 2xTTL before closing
- to prevent accidently re-use the port/socket while it is not finished the old one yet
