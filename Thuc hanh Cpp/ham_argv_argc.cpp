#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char ten[10], ho[10];
    printf("\nYeu cau nhap ten:\n");
    scanf("%s", ten);
    printf("\nYeu cau nhap ho:\n");
    scanf("%s", ho);
    printf("\nTen cua ban la:%s %s",ho, ten);

    return 0;
}