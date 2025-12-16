# Address Resolution Protocol (ARP)

- IP addr = network layer
- Ethernet addr (card) = link layer 
- single IP but with many network card like the gate way
- 192.168.0.1 but has two cards. This will not work
- somehow the link and ip addr are couple (historical reasons)

![gateway](https://raw.githubusercontent.com/tharittk/cs144-computer-networking/main/images/gateway.png)

- we can see that there are two packets (A->gateway, gateway->B)
- the souce and destination ip addr = the same
- what changed is the link layer addr (src: A card, dest: G card1), (src: G card2, dest: B card)
- how to map layer 3 (ip) : layer 2 (link) addr ?: ARP
- request (who has network addr X ?) - broadcast, other nodes may see this msg and
keep the record that this link addr = ip addr (even though the request is not from them)
- reply (unicast || some do broadcast to replace cache entry just in case)
- this mapping lasts ~ 20 mins in macOS 
- ARP packet format (RFC 826) - Request & Reply: opcode, protocol, src (ip), dest (ip), ...
- ~ gateway <-> host(s), host issues request to Gateway (to ask for direction), and the gateway replies
