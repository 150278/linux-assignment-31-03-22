
/*2.Write a program where a structure of information passed to pthread task function, and display
structure of information.
Abhisehk SAHU
*/


#include<stdio.h>
#include<string.h>

#include<pthread.h>
void *func_task(void *args);

struct info

{

    int roll ;

    char name[50];

    float marks;

}obj;

int main()

{

     pthread_t tid;



    obj.roll = 02;

    strcpy(obj.name, "ABHISHEK SAHU");

    obj.marks = 07;



    pthread_create(&tid, NULL, func_task, &obj);

    pthread_join(tid, NULL);



    pthread_exit(NULL);



    return 0;

}

void *func_task(void *args)

{

    printf("In function task\n");



    struct info *s = (struct info *)args;



    printf("Roll no: %d\t Name of Student: %s\t Marks obtained: %d\n",s->roll, s->name, s->marks);



    return NULL;

}
