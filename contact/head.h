#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>
struct stu
{
    char name[20];
    char id[20];
    char sex;
    int age;

};
typedef struct stu student;


extern void* add_contact(student*,int);
extern void del_contact(student*,const int);
extern int  fnd_contact(const student*,const char*);
extern void mod_contact(student*,const int);
extern void show_contact(const student*);
extern int COUNT;





