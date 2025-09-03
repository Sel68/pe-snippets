def sieve(hi=int(1e6)):
    if hi < 2:
        return [False]*hi
    is_prime = bytearray(b"\x01")*hi
    is_prime[0] = is_prime[1] = 0
    for p in range(2, int(hi**0.5) + 1):
        if is_prime[p]:
            is_prime[p*p:hi:p] = b"\x00"*len(is_prime[p*p:hi:p])
    return [bool(x) for x in is_prime]