#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char p = '#';
    int x, y, z, n;

    do
    {
        // 询问用户想要多高的金字塔
        printf("type a num 1-8: ");
        scanf("%d", &n);

        // 检查用户的输入是否合理
        if (n < 1 || n > 8)
        {
            while (getchar() != '\n');
        }
    } while (n < 1 || n > 8);
        
    // 生成左侧金字塔
    for (x = 1; x <= n; x++)
    {
        for (y = n - x; y > 0; y--)
            printf(" ");

        for (z = 1; z <= x; z++)
        {
            printf("%c", p);
        }
     
        // 在金字塔中间弄个空格
        printf(" ");

	// 生成右侧金字塔
        for (z = 1; z <= x; z++)
        {
            printf("%c", p);
        }
        printf("\n");
    }

	return 0;
}
