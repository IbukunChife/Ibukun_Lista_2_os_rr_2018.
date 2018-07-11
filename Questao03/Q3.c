/*//////IBUKUN CHIFE DIDIER ADJITCHE
//////Compilar: gcc -pthread Q3.c -o Q3*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>



void * Thread1(){
    int inicio = 0;
    int fim = 20000;
    for (int x = inicio ; x < fim;x++){
        int a =0;
        for (int i = 2; i <4;i++){
            if ( (inicio%i == 0) && (inicio != i))
                a++;
        }
        if (a<=1)
           printf("\t%d\n",x);
    }
pthread_exit(NULL);
}

void * Thread2(){
    int inicio = 20000;
    int fim = 40000;
    for (int x = inicio ; x < fim;x++){
        int a =0;
        for (int i = 2; i <4;i++){
            if ( (inicio%i == 0) && (inicio != i))
                a++;
        }
        if (a<=1)
            printf("\t%d\n",x);
    }
pthread_exit(NULL);
}
void * Thread3(){
    int inicio = 40000;
    int fim = 60000;
    for (int x = inicio ; x < fim;x++){
        int a =0;
        for (int i = 2; i <4;i++){
            if ( (inicio%i == 0) && (inicio != i))
                a++;
        }
        if (a<=1)
            printf("\t%d\n",x);
    }
pthread_exit(NULL);
}

void * Thread4(){
    int inicio = 60000;
    int fim = 80000;

    for (int x = inicio ; x < fim;x++){
        int a =0;
        for (int i = 2; i <4;i++){
            if ( (inicio%i == 0) && (inicio != i))
                a++;
        }
        if (a<=1)
            printf("\t%d\n",x);
    }
pthread_exit(NULL);
}

void * Thread5(){
    int inicio = 80000;
    int fim = 10000;
    for (int x = inicio ; x < fim;x++){
        int a =0;
        for (int i = 2; i <4;i++){
            if ( (inicio%i == 0) && (inicio != i))
                a++;
        }
        if (a<=1)
            printf("\t%d\n",x);
    }
pthread_exit(NULL);
}

int main (){

    pthread_t T1,T2,T3,T4,T5;

    pthread_create(&T1,NULL,Thread1,NULL);
    pthread_create(&T2,NULL,Thread2,NULL);
    pthread_create(&T3,NULL,Thread3,NULL);
    pthread_create(&T4,NULL,Thread4,NULL);
    pthread_create(&T5,NULL,Thread5,NULL);

    pthread_join(T1,NULL);
    pthread_join(T2,NULL);
    pthread_join(T3,NULL);
    pthread_join(T4,NULL);
    pthread_join(T5,NULL);
  pthread_exit(NULL);
}
