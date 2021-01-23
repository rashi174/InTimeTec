/*

You are supposed to create a child process using fork system call and invoke "child()" method in child process and wait for the child to finish and print the child exit code in parent process.

The recording of the corresponding session is available @ https://youtu.be/P9Ocz73OubE

Input Format

status_code - Status code that the child process will return to the parent

Constraints

1>status_code<=128

Output Format

This is parent

This is a child

Child exited with status {status_code}

Sample Input 0

10
Sample Output 0

This is a child
Child exited with status=10
Sample Input 1

102
Sample Output 1

This is a child
Child exited with status=102

*/



#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include<sys/wait.h>

pid_t ppid,cpid;

void child();
void parent();

int get_child_exit_status()
{
        
    int status;
    waitpid(cpid,&status,0);
    return WEXITSTATUS(status);
    
}
int main(void)
{  
         
    ppid = getpid();
    cpid=fork();
    if(cpid==0)
        child();
    else
        parent();
  
}
  
void parent(){
    printf("Child exited with status=%d",get_child_exit_status());
}

//DO NOT MODIFY CODE BELOW
void child()
{
        pid_t c_pid = getpid();
        if(c_pid == ppid)
        {
                printf("This is not a child\n");
                return;
        }
        printf("This is a child\n");
        int status;
        scanf("%d",&status);
        exit(status);
}

