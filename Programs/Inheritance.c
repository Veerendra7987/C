#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

struct Student {
    struct Person base;   
    int rollNo;
};

void showPerson(struct Person *p) {
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

void showStudent(struct Student *s) {
    showPerson(&s->base);
    printf("Roll No: %d\n", s->rollNo);
}

int main() {
    struct Student s1;

    strcpy(s1.base.name, "Rahul");
    s1.base.age = 20;

    s1.rollNo = 101;
    showStudent(&s1);

    return 0;
}
