import numpy as np
import matplotlib.pyplot as plt

x=[10,50,100,500,1000,5000,10000,50000,100000,500000,1000000]
y=[0,0,0,0,0,0,0,20000,40000,90000,190000]

plt.figure()
plt.plot(x,y)
plt.xlabel("length")
plt.ylabel("time of computer")
plt.title("Merge")
plt.savefig('Merge.png')
plt.show()


