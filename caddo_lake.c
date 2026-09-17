#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100

struct Person{
    char name[MAX];
    char partner[MAX];
    int age;
    int yob; // year of birth
    int yod; // year of death
    int yoa; // year of arrival
    bool isTimeTraveler;
};

void timeTravel(struct Person *p){
    if(p->isTimeTraveler){
        p->yoa = 1952;
        p->age = 55;
        strcpy(p->name, "Anna Lang");
        strcpy(p->partner, "Benjamim Lang");
        printf("\n%s has traveled to the year %d.\n", p->name, p->yoa);
    } 
    else {
        printf("\n%s is not a time traveler.\n", p->name);
    }
}

// quantum entanglement function (results of familiar lineage from the time travel)

int main(){
    int currentYear = 2024;

    // Anna

    struct Person person1;

    strcpy(person1.name, "Anna Bennet");
    person1.age = 8;
    person1.isTimeTraveler = true;

    printf ("\n%s's current year is %d.\n", person1.name, currentYear);

    printf ("\nBefore time travel:\n -name: %s\n -age: %d\n", person1.name, person1.age);

    timeTravel(&person1);

    printf ("\nAfter time travel:\n -name: %s\n -age: %d\n -partner: %s\n", person1.name, person1.age, person1.partner);

    // Paris ...


    return 0;
    
}