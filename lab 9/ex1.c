#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
} Month;

typedef struct Data {
  int day;
  Month month;
  int year; 
  
} Data;

typedef struct event {
  char name[100];
  char local[100];
  Data date; 
  
} Event;

void register_event(Event agenda[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %s", agenda[i].name, agenda[i].local);
        scanf("%d", &agenda[i].date.day);
        scanf("%d", (int*)&agenda[i].date.month);
        scanf("%d", &agenda[i].date.year);
    }
}
void print_eventsonday(Event agenda[], Data d, int n) {
    int event_found = 0;
    for (int i = 0; i < n; i++) {
        if (agenda[i].date.day == d.day &&
            agenda[i].date.month == d.month &&
            agenda[i].date.year == d.year) {
            printf("%s %s\n", agenda[i].name, agenda[i].local);
            event_found = 1;
        }
    }

    if (!event_found) {
        printf("Nenhum evento encontrado!\n");
    }
}
int main(void) {
   int n;
    scanf("%d", &n);
    Event agenda[n];
    Data d;
    register_event(agenda, n);
    scanf("%d %d %d", &d.day, (int*)&d.month, &d.year);
    print_eventsonday(agenda, d, n);

    return 0;
}
