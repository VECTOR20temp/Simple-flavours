import random 
upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
lower = "abcdefghijklmnopqrstuvwxyz"
numbers = "0123456789"
symbols = "[]{}()!?:;%$#@"
all = upper+lower+numbers+symbols
length=16
password="".join(random.sample(all,length))
print(password)