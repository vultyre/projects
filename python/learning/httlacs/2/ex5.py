P = 10000
n = 12
r = 0.08
t = int(input("How many years would you like to invest for? "))

A = P * (1 + (r / n)) ** (n * t)
print("Your final amount will be:",A)
