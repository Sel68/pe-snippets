
def crt_pair(k1, m1, k2, m2):
    inv = pow(m1, -1, m2)
    x = (k2 - k1) * inv % m2
    return (k1 + m1 * x, m1 * m2)

def crt_all(cong):
    x, m = 0, 1
    for k, m1 in cong:
        x, m = crt_pair(x, m, k, m1)

    return x % m, m