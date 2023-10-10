// WAP TO CREATE A QUEUE OF 5 ELEMENTS USING ARRAYS AND WRITE CODE FOR ENQUEUE, DEQUEUE, TRAVERSE OPS

#include <stdio.h>

int queue[5];
int front = -1, rear = -1;
int temp, c;

void enqueue(int x)
{
    if (rear == 4)
    {
        printf("QUEUE FULL\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("EMPTY QUEUE");
    }
    else
    {
        printf("REMEOVED %d FROM THE QUEUE.\n", queue[0]);

        for (int i = 0; i < rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        queue[-1] = 0;

        front--;
        rear--;
    }
}

void traverse()
{
    if (front == -1 && rear == -1)
    {
        printf("EMPTY QUEUE");
    }
    else
    {
        printf("[ ");
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("]\n");
    }
}

int main()
{
    // DRIVER CODE
    while (1 == 1)
    {
        printf("1. ADD AN ELEMENT\n2. REMOVE AN ELEMENT\n3. PRINT THE QUEUE\n0. EXIT\n");
        scanf("%d", &c);

        if (c == 0)
        {
            // break;
            printf("123");
        }
        else if (c == 1)
        {
            printf("ENTER THE VALUE TO ENQUEUE: ");
            scanf("%d", &temp);
            enqueue(temp);
        }
        else if (c == 2)
        {
            dequeue();
        }
        else if (c == 3)
        {
            traverse();
        }
        else
        {
            printf("INVALID CHOICE\n");
        }
    }
    return 0;
}