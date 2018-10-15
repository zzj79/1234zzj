#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,i=1,d=0,n,m;
    char c;
    int sum;
    srand(time(0));
    printf("请输入题目数目:\n");
    scanf("%d",&n);


    while(i<=n)
    {
        a=rand()%100;
        b=rand()%99+1;
        d=rand()%100;
        c=rand()%16+1;
        switch(c)
        {
            case 0: printf("第%d题:%d+%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a+b+d);
                    }
                    i++;

                    break;
            case 1: printf("第%d题:%d+%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b-d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a+b-d);
                    }
                    i++;

                    break;
            case 2: printf("第%d题:%d+%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b*d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a+b*d);
                    }
                    i++;

                    break;
            case 3: printf("第%d题:%d+%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a+b/d);
                    }
                    i++;

                    break;

            case 4:printf("第%d题:%d-%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a-b+d);
                    }
                    i++;

                    break;
             case 5: printf("第%d题:%d-%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b-d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a-b-d);
                    }
                    i++;

                    break;
            case 6: printf("第%d题:%d-%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b*d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a-b*d);
                    }
                    i++;

                    break;
           case 7: printf("第%d题:%d-%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a-b/d);
                    }
                    i++;

                    break;
           case 8:printf("第%d题:%d*%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a*b+d);
                    }
                    i++;

                    break;
             case 9: printf("第%d题:%d*%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b-d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a*b-d);
                    }
                    i++;

                    break;
            case 10: printf("第%d题:%d*%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b*d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a*b*d);
                    }
                    i++;

                    break;
           case 11: printf("第%d题:%d*%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b/d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a*b/d);
                    }
                    i++;

                    break;
             case 12: printf("第%d题:%d/%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b-d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a/b-d);
                    }
                    i++;

                    break;
            case 13: printf("第%d题:%d/%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b*d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a/b*d);
                    }
                    i++;

                    break;
           case 14: printf("第%d题:%d/%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b/d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a/b/d);
                    }
                    i++;

                    break;
            case 15:printf("第%d题:%d/%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b+d)
                    {
                        printf("恭喜你答对了!\n");
                    }
                    else{
                        printf("错误,请继续努力\n");
                        printf("答案是%d\n",a/b+d);
                    }
                    i++;

                    break;
        }

    }


    return 0;
}

