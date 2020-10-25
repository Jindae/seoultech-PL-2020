i = 1; j = 3 #these are global
def outer():
    def middle(k):
        def inner():
            global i
            i = 4
        inner()
        return i, j, k
    i = 2
    return middle(j)

print(outer()) #(i, j, k)
print(i, j) #1, 3 -> 4, 3
