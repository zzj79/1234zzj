#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a,b,i=1,d=0,n,m;
    char c;
    int sum;
    srand(time(0));
    printf("��������Ŀ��Ŀ:\n");
    scanf("%d",&n);


    while(i<=n)
    {
        a=rand()%100;
        b=rand()%99+1;
        d=rand()%100;
        c=rand()%16+1;
        switch(c)
        {
            case 0: printf("��%d��:%d+%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a+b+d);
                    }
                    i++;

                    break;
            case 1: printf("��%d��:%d+%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b-d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a+b-d);
                    }
                    i++;

                    break;
            case 2: printf("��%d��:%d+%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b*d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a+b*d);
                    }
                    i++;

                    break;
            case 3: printf("��%d��:%d+%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a+b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a+b/d);
                    }
                    i++;

                    break;

            case 4:printf("��%d��:%d-%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a-b+d);
                    }
                    i++;

                    break;
             case 5: printf("��%d��:%d-%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b-d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a-b-d);
                    }
                    i++;

                    break;
            case 6: printf("��%d��:%d-%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b*d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a-b*d);
                    }
                    i++;

                    break;
           case 7: printf("��%d��:%d-%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a-b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a-b/d);
                    }
                    i++;

                    break;
           case 8:printf("��%d��:%d*%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a*b+d);
                    }
                    i++;

                    break;
             case 9: printf("��%d��:%d*%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b-d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a*b-d);
                    }
                    i++;

                    break;
            case 10: printf("��%d��:%d*%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b*d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a*b*d);
                    }
                    i++;

                    break;
           case 11: printf("��%d��:%d*%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a*b/d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a*b/d);
                    }
                    i++;

                    break;
             case 12: printf("��%d��:%d/%d-%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b-d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a/b-d);
                    }
                    i++;

                    break;
            case 13: printf("��%d��:%d/%d*%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b*d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a/b*d);
                    }
                    i++;

                    break;
           case 14: printf("��%d��:%d/%d/%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b/d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a/b/d);
                    }
                    i++;

                    break;
            case 15:printf("��%d��:%d/%d+%d=",i,a,b,d);
                    scanf("%d",&sum);
                    if(sum==a/b+d)
                    {
                        printf("��ϲ������!\n");
                    }
                    else{
                        printf("����,�����Ŭ��\n");
                        printf("����%d\n",a/b+d);
                    }
                    i++;

                    break;
        }

    }


    return 0;
}

