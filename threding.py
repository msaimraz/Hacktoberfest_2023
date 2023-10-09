# We use the concept of multithreading to run two or more processes at a same time. BY default the process we run from the MAIN thread but we can creatw our thread too.



from threading import* # To use the threding we need to import (Threding Package).

from time import sleep # To make the excution a bit slower. It we make the object sleep for a while.

class hello(Thread): # Creating a Thread. In thread we can only use the function as (Run) because it's pre-defind in the thread package.

    def run(self):
        for i in range(5):
            print("Hello")
            sleep(1) # To make the process sleep for 1 sec.

class hi(Thread):
    def run(self):
        for i in range(5):
            print("Hii")
            sleep(1)


t1=hello()
t2=hi()
t1.start() # We use (start) as object at the place of run.
sleep(0.2) 
t2.start()