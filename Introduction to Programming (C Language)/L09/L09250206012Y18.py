import numpy
import matplotlib.pyplot as pl

def fact(num):
    if (num == 0 or num == 1):
        return 1
    return num*fact(num-1)

num = int(input("Enter N:"))

xaxis = list()
yaxis = list()
for i in range(num + 1):
    xaxis.append(i)
    yaxis.append(fact(i))


pl.plot(xaxis,yaxis)
pl.axis([0,num,0,fact(num)])
pl.show()
