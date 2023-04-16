#include "tad_timer.h"

struct timer{
    time_t begin, end, tempoReal;
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
    time(&t->begin);
    return 1;
}

bool timer_stop(Timer* t){
    time(&t->end);
    return 1;
}

bool timer_reset(Timer* t){
    t->begin = 0;
    t->end = 0;
    t->tempoReal = 0;
    return 1;
}

double timer_resultado(Timer* t){
    t->tempoReal = t->end - t->begin;

    return t->tempoReal;
}
