//
// Created by plter on 2/13/17.
//

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include "apue.h"

int main(int argc, char **argv) {

    DIR *dp;
    struct dirent *dirp;

    if (argc != 2) {
        printf("Usage: ls directory_name\n");
        exit(1);
    }

    if ((dp = opendir(argv[1])) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(2);
    }

    while ((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }

    closedir(dp);

    return 0;
}