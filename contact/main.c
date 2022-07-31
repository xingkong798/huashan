#include "head.h"

void menu()
{
    printf("************************\n");
    printf("*****1 add * 2 del******\n");
    printf("*****3 fnd * 4 mod******\n");
    printf("************************\n");
    printf("*****5 show  6 exit*****\n");
    printf("************************\n");

}
enum op
{
    ADD = 1,
    DEL,
    FND,
    MOD,
    SHOW,
    EXIT
};

student* pst = NULL;
void* tmp = NULL;
int COUNT = 0;
int main()
{
    pst = (student*)malloc(48);
    int num;
    int ret;
    char fname[15] = {0};

    while(1)
    {  
        menu();
        printf("请选择:");
        scanf("%d",&num);

    switch(num)
    {
        case ADD:
          tmp =add_contact(pst,COUNT);
          if(tmp == NULL)
          {
              printf("无可用空间!\n");
              return 0;
          
          }
          else
          {
            pst =(char*)tmp;
            printf("录入成功!\n");
          }
            break;

        case DEL:
            printf("请输入姓名:");
            scanf("%s",fname);
            ret = fnd(pst,fname);
            if(ret >= 0)
               del_contact(pst,ret);
            else
               printf("未查找到该成员!\n");
            break;

        case FND:
            printf("请输入姓名:");
            scanf("%s",fname);
           ret = fnd(pst,fname);
           if(ret >=0 )
            printf("%s     %s       %c   %d\n ",pst[ret].name,pst[ret].id,pst[ret].sex,pst[ret].age);

           else
              printf("未查找到该成员!\n");
           break;

        case MOD:
            printf("请输入姓名:");
            scanf("%s",fname);
            ret = fnd(pst,fname);
            if(ret >= 0)
               mod_contact(pst,ret);
            else
               printf("未查找到该成员!\n");
           
            break;
        case SHOW:
            show_contact(pst);
            break;
        case EXIT:
            return 0;
        default:
            break;

    }
    }
    free(pst);
    return 0;
}