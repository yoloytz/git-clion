#include <stdio.h>
void main(){
    //m*n阶的矩阵 乘 n*k阶的矩阵 = m * k 阶的矩阵

    int m,n,k;
    printf("请输入矩阵的阶数m , n , k ");
    scanf("%d %d %d",&m,&n,&k);
    int x1[m][n];
    int x2[n][k];
    int ret[m][k];
    //定义三个矩阵

    //输入x1矩阵
    printf("对矩阵1的值进行填充\n");
    for (int i = 0; i < m; i++){
        printf("填充x1矩阵的第%d行\n",i+1);
        for(int j = 0; j < n; j++){
            printf("请输入第%d行的%d个元素",i+1,j+1);
            scanf("%d",&x1[i][j]);
        }
    }

    //输入x2矩阵  --- 可以把输入矩阵简化为函数
    printf("对矩阵2的值进行填充");
    for (int i = 0; i < m; i++){
        printf("填充x1矩阵的第%d行",i+1);
        for(int j = 0; j < n; j++){
            printf("请输入第%d行的%d个元素",i+1,j+1);
            scanf("%d",&x2[i][j]);
        }
    }

    //测试输出
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j = 0; j< n; j++){
            printf("%d\t",x1[i][j]);
        }
    }

}