#include <stdio.h>
int main()
 {
    int ascii;
    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);
    printf("Character for ASCII value %d = %c\n", ascii, ascii);
    return 0;
}
