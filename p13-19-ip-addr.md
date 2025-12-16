# IPv4 Address

- address: 32-bit long, 4 octet (8-bit value)
- netmask: apply this mask, if it matches, it is in the same network (no need to hop to other routers)
- `ifconfig`, `inet <...> netmask 0xffff ff00
- how IP addr issgned
- used to be 3 classes: class A [0, network(7), host(24)] etc.
- class A, B, C are not flexible enough (too coarse)
- CIDR you can assign network(x) host(y)
- Longest Prefix Matches --- for forwarding
- CIDR entry : next hop
- Forwading table:
- 171.33.x.x : link 1 <- wildcard
- 23.x.x.x : link 5 
- default: link .. (0.0.0.0/0) this default will always match but may not be the longest
- example: 171.15.15.0 -> 171.0.0.0/8 or 171.0.0.0/10 ? IP matches both. By longest, it should be /10 then.