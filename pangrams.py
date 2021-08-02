# Question Source Credits:https://www.hackerrank.com/challenges/pangrams/problem


#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    s = s.upper().split()
    alphabets = []

    for i in s:
        for j in i:
            if len(alphabets) != 26 and j not in alphabets and (ord(j) >= 65 or ord(j) <=96):
                alphabets.append(j)

    if len(alphabets) == 26:
     return "pangram"
    else:
     return "not pangram"

    
    
              
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
