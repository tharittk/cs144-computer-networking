# Packet Switching
- packet: self-contained data that holds sufficient information to reach the destination
- packet switching: indenpendently, we select the outgoing link for each packet
- each switch maintains the table [dest : next hop] entries
- benefit: each switch keeps "no state" of the packet - simplifying the switch, efficient sharing of the link (speed/usage)
- a flow -> like voice packet / tcp: end-to-end communication. Switch does not keep track of state of each flow
- Internet usage is usually "bursty": request https, watch videos, etc --- and independent of each user.
- Statistical Multiplexing: if you are reading, your friend can consume all. If both downloading, share half. No state keep/quota for each user. Treat it as it comes.
