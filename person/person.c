#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HEIGHT 200
#define BASE_LIFE 100

typedef struct {
    int buff;
    int damage;
    char name[50];
    char type[20];
} weapon;

typedef struct {
    int height;
    char name[20];
    int life;
    int speed;
    weapon weapon;
} person;

void attack(person *base, person *target){
    if(base->speed > target->speed || (base->speed == target->speed 
        && base->weapon.damage > target->weapon.damage)){

        target->life -= base->weapon.damage;
        if(target->life < 0){
            target->life = 0;
        }

    }
};

int main() {

    person p;
    person p2;

    p.height = 100;
    strcpy(p.name, "Tyrion");

    p.weapon.buff = 20;
    p.weapon.damage = 120;
    p.speed = 90;
    p.life = BASE_LIFE;
    strcpy(p.weapon.name, "Bow");
    strcpy(p.weapon.type, "Equipment");

    p2.height = 180;
    strcpy(p2.name, "Tywin");
    p2.weapon.buff = 35;
    p2.speed = 90;
    p2.weapon.damage = 100;
    p2.life = BASE_LIFE;
    strcpy(p2.weapon.name, "Sword");
    strcpy(p2.weapon.type, "Equipment");

    printf("%s's life %d\n", p.name, p.life);
    printf("%s's life %d\n", p2.name, p2.life);
    printf("%s is attacking %s with a(an) %s \n", p.name, p2.name, p.weapon.name);
    attack(&p, &p2);
    printf("%s's life %d\n", p2.name, p2.life);

    if(p2.life <= 0){
       printf("%s's very dead\n", p2.name); 
    }

    return 0;
}