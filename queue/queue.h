#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int * arr;
    int cap;
    int size;
    int front;
    int rear;
}queue_t;

//队列初始化
extern void queue_init(queue_t* queue,int cap);
//队列销毁
extern void desqueue(queue_t* queue);
//判断队列是否已满
extern int queue_full(queue_t* queue);
// 判断队列中元素个数是否为空
extern int queue_empty(queue_t* queue);
//循环入队
extern void queue_push(queue_t* queue,int data);
//循环出队
extern int queue_pop(queue_t* queue);
