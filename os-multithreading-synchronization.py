'''
The corresponding video link: https://youtu.be/azJPEO-yspU

The program take balance as an input and does a fixed number of additions and substractions in deposit() and withdraw() methods via use of Threads.
However due to thread synchronization problems the balance output is incorrect. You should use a locking mechanism to ensure that the Balance is
computed properly.

Input Format

Balance amount

Constraints

0

Output Format

Final Balance

Sample Input 0

2000
Sample Output 0

all done: balance = 2000
Sample Input 1

3000
Sample Output 1

all done: balance = 3000
Sample Input 2

20000
Sample Output 2

all done: balance = 20000


'''


import threading 
balance = 100

def deposit(lock):
    lock.acquire()
    global balance
    for i in range(1000000):
        balance = balance + 1
    lock.release()
        
def withdraw(lock):
    lock.acquire()
    global balance
    for i in range(1000000):
        balance = balance - 1
    lock.release()

if __name__ == "__main__": 
    balance = int(input().strip())
    lock = threading.Lock()
    t1 = threading.Thread(target=deposit, args=([lock]))
    t2 = threading.Thread(target=withdraw, args=([lock])) 
  
    # starting thread 1 
    t1.start() 
    # starting thread 2 
    t2.start() 
  
    # wait until thread 1 is completely executed 
    t1.join() 
    # wait until thread 2 is completely executed 
    t2.join() 
  
    # both threads completely executed 
    print("all done: balance = " + str(balance))
