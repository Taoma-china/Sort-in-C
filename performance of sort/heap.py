import numpy as np
import matplotlib.pyplot as plt

x=[10,50,100,500,1000,5000,10000,50000,100000,500000,1000000]
y=[0,0,0,0,0,0,10000,30000,50000,190000,420000]

plt.figure()
plt.plot(x,y)
plt.xlabel("length")
plt.ylabel("time of computer")
plt.title("Heap")
plt.savefig('Heap.png')
plt.show()


