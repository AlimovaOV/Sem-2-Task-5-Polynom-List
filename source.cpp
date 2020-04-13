#include "source.h"

/*typedef struct link {
    int id;
    link *next;
  } list;*/
list *L = new list;
bool f = true;

void startDefaults() {
    if (f) {
        f = false;
        L = nullptr;
        return;
    }
    // L = malloc
}

void push(pair<int, int> t) {
    list *tl = new list;
    tl->an = t;
    tl->next = L;
    L = tl;
    //cout << L -> id << endl << L -> next -> id;

}

void push_last(pair<int, int> t) {
    list *tmp = L;
    if (tmp == nullptr) {
        push(t);
        return;
    }
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    tmp->next = new list; //!
    tmp->next->an = t;
    tmp->next->next = nullptr;
}

void printL() {
    list *tmp = L;
    bool fl = false;
    while (tmp != nullptr) {
        if (tmp == L && tmp ->an.fi < 0)
            cout << " - ";
        if (tmp-> an.se == 0)
            cout << tmp ->an.fi;
        else
            if (tmp->an.fi != 1)
                cout << abs(tmp->an.fi) << "*x^" << tmp ->an.se;
            else
                cout << "x^" << tmp->an.se;
        if (tmp -> next != nullptr)
            if (tmp -> an.fi > 0)
                cout << " + ";
            else
                cout << " - ";
        tmp = tmp->next;
        fl = true;
    }
    cout << endl;
    if (!fl)
        cout << "It's nullptr\n";
}

double pow(double x, int n){
    double t = 1;
    if (n > 0) {
        for (int i = 0; i < n; i++)
            t *= x;
    }
    else {
        for (int i = 0; i < n; i++)
            t /= x;
    }
    return t;
}

double valueat(double x){
    double sum = 0;
    list *tmp = L;
    if (tmp == nullptr) {
        return 0;
    }
    while (tmp->next != nullptr) {
        sum += (double) tmp->an.fi * pow(x, tmp->an.se);
        tmp = tmp->next;
    }
    return  sum;
}