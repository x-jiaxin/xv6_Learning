//
// Created by jiaxin on 2023/2/17 21:46.
//
#include "kernel/fcntl.h"
#include "kernel/stat.h"
#include "kernel/types.h"
#include "user/user.h"

int main()
{
    //    char *argv[2];
    //    argv[0] = "cat";
    //    argv[1] = 0;
    //    char buf[512];
    //    fprintf(1, "input something!\n");
    //    int n = read(0, buf, sizeof(buf));
    //    int fd = open("input.txt", O_CREATE | O_WRONLY);
    //    if (fd < 0) {
    //        fprintf(2, "read error!\n");
    //        exit(1);
    //    }
    //    int n1 = write(fd, buf, n);
    //    if ( n1!= n) {
    //        fprintf(2, "write error!\n");
    //        exit(1);
    //    }
    //    close(fd);
    //    fprintf(1, "input over!\n\n\n");
    //    if (fork() == 0) {
    //        // in the child process
    //        close(0);                              // this step is to release the stdin file descriptor
    //        open("input.txt", O_RDONLY);// the newly allocated fd for input.txt is 0, since the previous fd 0 is released
    //        exec("cat", argv);                     // execute the cat program, by default takes in the fd 0 as input, which is input.txt
    //    }

    //dup
    int fd = dup(1);
    write(1, "hello", 6);
    write(fd, "hello\n", 6);
    exit(0);
}