#include "queue.h"

//队列初始化
void queue_init(queue_t* queue,int cap)
{
    queue->arr =(int*) malloc(cap*sizeof(int));
    queue->cap = cap;
    queue->size = 0;
    queue->front = 0;
    queue->rear = 0;
}

//队列销毁
void desqueue(queue_t* queue)
{
    free(queue->arr);
    queue->arr = NULL;
    queue->cap = 0;
    queue->size = 0;
    queue->front = 0;
    queue->rear = 0;
}

//判断队列是否已满
int queue_full(queue_t* queue)
{
    return queue->size >=queue->cap;
}
// 判断队列中元素个数是否为空
int queue_empty(queue_t* queue)
{
    return queue->size;
}

//循环入队
void queue_push(queue_t* queue,int data)
{
    if(queue->rear == queue->cap )
       queue-> rear = 0;

    queue->arr[queue->rear] = data;
    queue->rear = queue->rear + 1;
    queue->size = queue->size + 1;
}
//循环出队
int queue_pop(queue_t* queue)
{
    if(queue->front >= queue->cap)
        queue->front == 0;

    int return_val = queue->arr[queue->front];
    queue->front = queue->front + 1;
    queue->size = queue->size - 1;

    return return_val;
}
