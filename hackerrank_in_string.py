# Problem source credits: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem 

def check(s):
    op=""
    for i in s:
        if op != "hackerrank":
            if i == "h" and i not in op:
                op += i
            elif i =="a" and ( op=="h" or op== "hackerr"):
                op += i
            elif i =="c" and op == "ha":
                op += i
            elif i =="k" and (op == "hac" or op == "hackerran"):
                op += i
            elif i=="e" and op == "hack":
                op += i
            elif i=="r" and (op == "hacke" or op=="hacker"):
                op += i
            elif i=="n" and op =="hackerra":
                op += i

    if op == "hackerrank":
        print("YES")
    else:
        print("NO")

n = int(input())
ip = []
for i in range(n):
    ip.append(input())

for j in ip:
    check(j)
