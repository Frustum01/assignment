#include <stdio.h>
void main(){
    int num,foundDuplicate=0,arr[100],count=0;
    printf("Enter numbers (enter a duplicate to stop):\n");
    while(1){
        scanf("%d", &num);
        for (int i=0;i<count;i++){
            if (arr[i] == num) {
                foundDuplicate = 1;
                break;
            }
        }

        if (foundDuplicate)
            break;

        arr[count++] = num;
    }

    printf("Duplicate found! Program stopped.\n");
}

