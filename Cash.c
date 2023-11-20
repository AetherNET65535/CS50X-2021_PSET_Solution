#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    float change;
    int coins = 0;
       
    do {
        // 请求用户输入零钱
        printf("Enter the change (0.??): ");
        scanf("%f", &change);

        // 检查零钱是否合法
        if (change <= 0 || change >= 1.0) {
            printf("Invalid. Enter value between 0 and 1.\n");
            while (getchar() != '\n'); 
        }

    } while (change <= 0 || change >= 1.0);
    
    // 找零...
    while (change > 0.000001) {
        if (change >= 0.25) {
            change -= 0.25;
            coins++;
        }
        else if (change >= 0.10) {
            change -= 0.10;
            coins++;
        }
        else if (change >= 0.05) {
            change -= 0.05;
            coins++;
        }
        else if (change >= 0.01) {
            change -= 0.01;
            coins++;
        }
        else {
            break;
        }
    }

    // 输出硬币数量
    printf("Number of coins: %d\n", coins);

    return 0;
}
