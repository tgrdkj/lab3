#include <stdio.h>

int main() {
    int choice;

  printf("Select an episode of <<True Detective>>: ");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("The Long Bright Dark 12 сiчня 2014\n");
            break;
        case 2:
            printf("<<Seeing Things>> - 19 january 2014\n");
            break;
        case 3:
            printf("<<The Locked Room>> - 26 january 2014\n");
            break;
        case 4:
            printf("<<Who Goes There>> - 9 february 2014\n");
            break;
        case 5:
            printf("<<The Secret Fate of All Life>> - 16 february 2014\n");
            break;
        case 6:
            printf("<<Haunted Houses>> - 23 february 2014\n");
            break;
        case 7:
            printf("<<After Youve Gone>> - 2 march 2014\n");
            break;
        case 8:
            printf("<<Form and Void>> - 9 march 2014\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}