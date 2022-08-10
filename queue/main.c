#include "queue.h"
int main()
{
    queue_t queue;
    int ret = 0;
    queue_init(&queue,3);

    for(int i = 10;i<12;i++)
    if(!queue_full(&queue))
    {
        queue_push(&queue,i);
    }

    while(queue.cap--)
    {
        if(queue_empty(&queue))
        {
            ret = queue_pop(&queue);
            printf("本次出队数据:%d\n",ret);
        }
    }
    printf("实际数据个数:%d\n",queue.size);
    printf("front位置为:%d\n",queue.front);
    printf("rear位置为:%d\n",queue.rear);
    
    return 0;
}
