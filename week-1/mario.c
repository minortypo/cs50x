#include <cs50.h>
#include <stdio.h>

//mario-more 
int main(void)
{
    int height;
    do {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < height; j++){
            if(i + j < height - 1){
                printf(" ");
            }
            else {
                printf("#");
            }
        }
        printf("  ");

        for(int k = 0; k < i+1; k++){
            printf("#");
        }

        printf("\n");
    }
}
