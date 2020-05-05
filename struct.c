#include <stdio.h>
#include <string.h>

int func();

typedef struct Human {
    int age;
    char name[10];
}Human_a;

int main() {
    Human_a man[3];

    man[0].age = 20;
    strcpy(man[0].name, "Yamanda");

    func(man[0]);
    printf("name is %s\nage is %d\n", man[0].name, man[0].age);

    man[1].age = 10;
    strcpy(man[1].name, "Suzuki");
    printf("name is %s\nage is %d\n", man[1].name, man[1].age);

    return 0;
}

int func(Human_a man) {
    man.age = 30;
    strcpy(man.name, "Tanaka");

    return 0;
}