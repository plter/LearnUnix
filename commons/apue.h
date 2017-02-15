//
// Created by plter on 2/14/17.
//

#ifndef LEARNUNIX_APUE_H
#define LEARNUNIX_APUE_H

#define _POSIX_C_SOURCE 200809L

#if defined(SOLARIS) /*Solaris 10*/
#define _XOPEN_SOURCE 600
#else
#define _XOPEN_SOURCE 700
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/termios.h>

#if defined(MACOS) || !defined(TIOCGWINSZ)

#include <sys/ioctl.h>

#endif

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>


#define MAXLINE 4096

#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

#define DIR_MODE (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

typedef void Sigfunc(int);

#define min(a, b) ((a)<(b)?(a):(b))
#define max(a, b) ((a)>(b)?(a):(b))

char *path_alloc(size_t *);

long open_max(void);

int set_cloexec(int);

void clr_fl(int, int);

void set_fl(int, int);

void pr_exit(int);

void pr_mask(const char *);

void daemonize(const char *);

void sleep_us(unsigned int);

ssize_t readn(int, void *, size_t);

ssize_t writen(int, const void *, size_t);

int fd_pipe(int *);

int recv_fd(int, ssize_t);


#endif //LEARNUNIX_APUE_H
