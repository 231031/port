factor = 0
sum = []
def prime():
    for i in range(2,2000000):
        factor=0
        for j in range(1,i):
            if i%j==0:
                factor += 1
            if i%j != 0:
                break
        if factor==2:
            sum.append(i)
    print(sum)

prime()
