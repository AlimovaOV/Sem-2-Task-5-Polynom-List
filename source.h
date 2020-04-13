#ifndef PROBLEM5SEM2_SOURCE_H
#define PROBLEM5SEM2_SOURCE_H

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

#define fi  first
#define se second

typedef struct link {
    pair <int, int> an;
    struct link *next;
} list;
extern list *L;

void startDefaults();
void menu();

void push_last(pair <int,int> t);

void printL();

double valueat(double x);
#endif //PROBLEM5SEM2_SOURCE_H
