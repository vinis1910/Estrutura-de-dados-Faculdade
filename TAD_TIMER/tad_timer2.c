#include "tad_timer.h"

struct timer{
    clock_t begin, end, tempoReal;
};

Timer* timer_criar(){
    Timer* t = (Timer*) malloc(sizeof(Timer));
    t->begin = 0;
    t->end = 0;
    t->tempoReal = 0;
    return t;
}

void timer_desalocar(Timer** endereco){
    free(*endereco);
    *endereco = NULL;
}

bool timer_start(Timer* t){
    t->begin = clock();
    return 1;
}

bool timer_stop(Timer* t){
    t->begin = clock();
    return 1;
}

bool timer_reset(Timer* t){
    t->begin = 0;
    t->end = 0;
    t->tempoReal = 0;
    return 1;
}

double timer_resultado(Timer* t){
    t->tempoReal =  (double) (t->end - t->begin/CLOCKS_PER_SEC);

    return abs(t->tempoReal);
}