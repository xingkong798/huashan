#include "head.h"

void* add_contact(student* stu,int count)
{
    assert(stu != NULL);
    
    printf("姓名:");
    scanf("%s",stu[count].name);
    printf("id:");
    scanf("%s",stu[count].id);
    printf("性别:");
    getchar();
    stu[count].sex = getchar();
    printf("年龄:");
    scanf("%d",&(stu[count].age));

    COUNT++;
    return realloc(stu,48+48*COUNT);


}

void show_contact(const student* stu)
{
    assert(stu != NULL);

    if(COUNT == 0)
        printf("无记录!\n");
    else
        printf("姓名    id       性别  年龄\n");
        for(int i = 0;i<COUNT;i++)
            printf("%s     %s       %c   %d\n ",stu[i].name,stu[i].id,stu[i].sex,stu[i].age);
}

int fnd(const student* stu,const char* fname)
{
    assert(stu != NULL && fname != NULL);
   
    for(int i = 0;i < COUNT;i++)
    {
        if(strcmp(stu[i].name,fname) == 0)
        { 
              return i;
        }
    }

    return -1;
}

void del_contact(student* stu,const int ret)
{
    assert(stu != NULL);

   if(COUNT == 1)
       COUNT = 0;
   else if
       (ret == COUNT-1)
           COUNT--;
   else
   { 
       for(int i = ret;i< COUNT-1;i++)
    {
    
        stu[i] = stu[i+1]; 
    }
       COUNT--;
   }
}

void mod_contact(student* stu,const int ret)
{
    assert(stu != NULL);
    printf("请输入修改后的信息:\n");
    printf("姓名:");
    scanf("%s",stu[ret].name);
    printf("id:");
    scanf("%s",stu[ret].id);
    printf("性别:");
    getchar();
    stu[ret].sex = getchar();
    printf("年龄:");
    scanf("%d",&(stu[ret].age));

    printf("修改成功!\n");


}