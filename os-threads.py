'''
This assignment is part of OS Concepts and corresponding video is available @ https://youtu.be/P9Ocz73OubE

Implement an application that takes an intiger as an input and increamens the count to N using threads.

Given: 1 thread can add up only 100000.

Sample input : 600000; Sample output : 600000;

Sample input : 500000; Sample output : 500000;

NOTE : Make sure you are using different threads to increment the count. All the Test cases will fail if it not multithreaded.

Input Format

600000

Output Format

600000

Sample Input 0

600000
Sample Output 0

600000
Explanation 0

Hint : Total no of threads should be spawned 600000/100000 = 6. Each Thread will add 100000.
'''

import threading
from threading import Thread 
import time
import math
import os
import random
import re
import sys


count = 0
def add():
  global count
  for x in range(100000):
       count = count + 1;
  time.sleep(1)
  

if __name__ == '__main__':
    input = int(input().strip())
    for i in range(input//100000):
        thread=Thread(target = add)
        thread.start()
        thread.join()
    



print(count)

