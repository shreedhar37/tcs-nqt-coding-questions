"""
Question Source Credits: faceprep

Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits.

Input 1:

4567

Expected output:

2



Explanation:

The Sum of odd position digits 4 and 6 is 10.
The Sum of even position digits 5 and 7 is 12.
The difference is 12-10=2.

"""

n = str(input())

even, odd = 0, 0


for i in n:
    if int(i) % 2 != 0:
        even += int(i)

    else:
        odd += int(i)


print(abs(even-odd))
