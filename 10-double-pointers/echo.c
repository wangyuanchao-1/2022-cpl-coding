//
// Created by HP on 2022/12/18.
//
#include <stdio.h>

/**
 * @brief
 * @param argc count the numbers of arguments
 * @param argv
 *  argv[0]: echo
 *  argv[1 .. argc - 1]: "ant" "hengxin"
 *  argv[argc]: NULL
 * @return
 */
// .\echo
// .\echo ant hengxin
// char argv[]: char *argv
// char *argv[]: char **argv
int main(int argc, char *argv[]) {
    // for (int i = 1; i < argc; i++) {
    //   printf("%s\n", argv[i]);
    // }

    // for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
    //   printf("%s\n", *ptr);
    // }

    // char **ptr = argv + 1;
    // while (*ptr != NULL) {
    //   printf("%s\n", *ptr);
    //   ptr++;
    // }

    // *--ptr; *ptr--
    char **ptr = argv;
    while (*++ptr != NULL) {
        printf("%s\n", *ptr);
    }

    return 0;
}