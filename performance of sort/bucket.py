import numpy as np
import matplotlib.pyplot as plt

x=[10,50,100,500,1000,5000,10000,50000,100000,500000,1000000]
y=[10000,0,10000,0,10000,10000,10000,30000,30000,90000,160000]

plt.figure()
plt.plot(x,y)
plt.xlabel("length")
plt.ylabel("time of computer")
plt.title("Bucket")
plt.savefig('Bucket.png')
plt.show()


