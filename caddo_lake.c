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

// time travel fuction (loop)

// quantum entanglement function (results of familiar lineage from the time travel)

int main(){

    struct Person person1;

    strcpy(person1.name, "Anna Lang");

    printf("Name: %s\n", person1.name);

    return 0;
    
}