////2. 程序改错题
////
////给定程序modi1.c中函数fun的功能是:求整数x的y次方的低3位值。例如，整数5的6次方为15625，此值的低3位值为625。
////
////请改正函数fun中指定部位的错误，使它能得出正确的结果。
////
////注意 : 不要改动main函数，不得增行或删行，也不得更改程序的结构!
//
//#include <stdio.h>
//
//#pragma warning (disable:4996)
//
//long  fun(int  x, int  y, long* p)
//
//{
//    int  i;
//
//    long  t = 1;
//
//    /**************found**************/
//
//    for (i = 0; i < y; i++)                                   //常见错误，调试即可看见错误出现。
//
//        t = t * x;
//
//    *p = t;
//
//    /**************found**************/
//
//    t = t % 1000;                                                            //开始整除后整个数都为一个整数，所以改为取余函数。
//     
//    return  t;
//
//}
//
//main()
//
//{
//    long   t, r;    int  x, y;
//
//    printf("\nInput x and y: ");  scanf("%ld%ld", &x, &y);
//
//    t = fun(x, y, &r);
//
//    printf("\n\nx=%d, y=%d, r=%ld, last=%ld\n\n", x, y, r, t);
//
//}



//3. 程序设计题
//
//请编写函数fun, 函数的功能是求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函
//
//数中赋予。
//
//例如 : 二维数组中的值为
//
//1 3 5 7 9
//
//2 9 9 9 4
//
//6 9 9 9 8
//
//1 3 5 7 0
//
//则函数值为61。
//
//注意 : 部分源程序存在文件prog1.c中。
//
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。

#include <stdio.h>

#define  M  4

#define  N  5

int  fun(int a[M][N])

{
    int i = 0,j=0;
    int* p = a;
    int n = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
            {
                n += *(*(a+i)+j);
            }
        }
    }
    return n;


}

main()

{
    int  aa[M][N] = { {1,3,5,7,9},

                 {2,9,9,9,4},

                 {6,9,9,9,8},

                 {1,3,5,7,0} };

    int  i, j, y=0; /*void NONO();*/

    printf("The original data is : \n");

    for (i = 0; i < M; i++)

    {
        for (j = 0; j < N; j++) printf("%6d", aa[i][j]);

        printf("\n");

    }

    y = fun(aa);

    printf("\nThe  sum:  %d\n", y);

    printf("\n");

 /*   NONO();*/

    getchar();

}

//void NONO()
//
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
//
//    输出数据，关闭文件。 */
//
//    int i, j, y, k, aa[M][N];
//
//    FILE* rf, * wf;
//
//    rf = fopen("..\\..\\in.dat", "r");
//
//    wf = fopen("..\\..\\out.dat", "w");
//
//    for (k = 0; k < 10; k++) {
//
//        for (i = 0; i < M; i++)
//
//            for (j = 0; j < N; j++) fscanf(rf, "%d", &aa[i][j]);
//
//        y = fun(aa);
//
//        fprintf(wf, "%d\n", y);
//
//    }
//
//    fclose(rf);
//
//    fclose(wf);
//
//}

