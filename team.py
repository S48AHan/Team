inputs=int(input())
n = 0
for i in range (0,inputs):
    str = input()
    if str.count('1')> 1:
        n +=1;
print(n)
