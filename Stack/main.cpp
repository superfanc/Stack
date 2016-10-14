//
//  main.cpp
//  Stack
//
//  Created by fanaticheng on 2016/10/13.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//
#include "POSTK.hpp"
#include "OOSTK.hpp"
int main(){
    int choose;
    POSTK *A;
    POSTK *S;
    int on=1;
    while(on){
        system("clear");
        printf("\n\n");
        printf("      Menu for Linear Table On Sequence Structure \n");
        printf("-------------------------------------------------\n");
        printf("    	  1. initPOSTK       2. size     \n");
        printf("    	  3. howMany         4. getelem  \n");
        printf("    	  5. push            6. pop      \n");
        printf("    	  7. initPOSTKbyS    8. print    \n");
        printf("    	  9. assign          10.destroy \n");
        printf("    	  0. Exit\n");
        printf("-------------------------------------------------\n");
        printf("    请选择你的操作[0~10]:\n");
        scanf("%d",&choose);
        switch(choose){
            case 1:{
                int m;
                printf("请输入栈的最大元素个数:\n");
                scanf("%d",&m);
                initPOSTK(A, m);
                if(A->elems)
                    printf("栈创建成功!\n");
                else
                    printf("栈创建失败!\n");
                getchar();getchar();
                break;
            }
            case 2:{
                printf("当前栈的最大容量为:%d\n",size(A));
                getchar();getchar();
                break;
            }
            case 3:{
                printf("当前栈的元素个数为:%d\n",howMany(A));
                getchar();getchar();
                break;
            }
            case 4:{
                int x;
                printf("输入想要访问的下标x:");
                scanf("%d",&x);
                printf("下标%d对应的元素为:%d\n",x,getelem(A,x));
                getchar();getchar();
                break;
            }
            case 5:{
                int e=0;
                printf("请输入即将入栈的数:");
                scanf("%d",&e);
                if(A->pos==A->max)
                    printf("插入失败，栈元素已满\n");
                else{
                    A=push(A, e);
                    printf("入栈成功!\n");
                }
                getchar();getchar();
                break;
            }
            case 6:{
                int elem;
                A=pop(A,elem);
                printf("出栈的数据为:%d\n",elem);
                printf("出栈成功!\n");
                getchar();getchar();
                break;
            }
            case 7:{
                if(S==NULL)
                    printf("拷贝失败\n");
                else{
                    initPOSTK(A, *S);
                    printf("拷贝成功\n");
                }
                getchar();getchar();
                break;
            }
            case 8:{
                print(A);
                getchar();getchar();
                break;
            }
            case 9:{
                if(S==NULL)
                    printf("拷贝失败\n");
                else{
                    A=assign(A, *S);
                    printf("拷贝成功\n");
                }
                getchar();getchar();
                break;
            }
            case 10:{
                destroyPOSTK(A);
                printf("摧毁栈成功\n");
                getchar();getchar();
                break;
            }
            case 0:{
                on=0;
                break;
            }
        }//end of switch
    }//end of while
    printf("欢迎下次测试\n");
    return 0;
}
