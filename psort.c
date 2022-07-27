#include <stdio.h>
#include <string.h>
void qsort (void* base, int num, int size, int (*compar)(const void*,const void*))
{   
    char* base2 =(char*)base;
    int s = 0;
     for(int i = 0;i < num;i++)
    {
        s = 0;
        for(int j = 0;j < num-i-1;j++)
        {
           if(compar(&base2[s],&base2[s+size]))
           {
               char tmp;
               int k2 = s;
               int k3 = s+size;
               for(int k = 0;k < size;k++)
                {
                   tmp = base2[k3];
                   base2[k3] = base2[k2];
                   base2[k2] = tmp;

                   k2++;
                   k3++;
                }
           }
                
                s = s+size;
        }
    }

  
}

int cmp(const void * e1,const void* e2)
{
    int* int1 = (int*)e1;
    int* int2 = (int*)e2;
  
  if(*int1 > *int2)
    return 1;
  else
    return 0;
}

int str_sort(const void * e1,const void* e2)
{
    char* int1 = (char*)e1;
    char* int2 = (char*)e2;
  
  if(*int1 > *int2)
    return 1;
  else
    return 0;
}

int main()
{   
    int arr[10]={1,3,5,7,9,2,4,6,8,10};
   // int sz = sizeof(arr)/sizeof(arr[0]);

    char ch[6]={'a','b','c','g','f','e'};
    int sz = sizeof(ch)/sizeof(ch[0]);

    qsort(ch,sz,sizeof(ch[0]),str_sort);

    for(int i =0;i < sz;i++)
        printf("%c ",ch[i]);
 
    return 0;
}
