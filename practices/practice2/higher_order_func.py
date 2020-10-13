x = 1
def f(y):
    return x+y
def g(h):
    x = 2
    return h(3)+x

def s():
    return x+1

def calling_s():
    return s

def main():
    x = 4
    z = g(f)
    print("z = g(f):", z)

    k = calling_s()
    print("k = calling_s():",  k())

main()