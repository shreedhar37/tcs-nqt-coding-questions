arr = set([int(x) for x in input().split(" ")])
if len(arr) < 2:   # if all the elements are same
    print(-1) 
else:    
    arr.discard(max(arr))
    print(max(arr))

