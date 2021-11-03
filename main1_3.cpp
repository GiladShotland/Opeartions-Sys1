#include<syslog.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    pid_t pid = fork();
    if (pid != 0){
        exit(EXIT_SUCCESS);
    }
    /*we're in the daemon
    changing directory, startig a new session, closing streams
    */
    chdir("/");
    setsid();
    fclose(stdout);
    fclose(stdin);
    fclose(stderr);
    /*writing to the log*/
    openlog("DaemonTry",LOG_PID,LOG_DAEMON);
    syslog(LOG_NOTICE,"yada yada yada");
}