#ifndef SUPEMON_H
#define SUPEMON_H

#define MAX_MOVES 2

typedef struct {
    char name[30];        // Nom du Sup�mon
    int level;            // Niveau
    int hp;               // HP actuels
    int max_hp;           // HP maximum
    int attack;           // Attaque
    int defense;          // D�fense
    int evasion;          // �vasion
    int accuracy;         // Pr�cision
    int speed;            // Vitesse
    char moves[MAX_MOVES][20];  // Noms des attaques
} Supemon;

Supemon create_supemon(const char *name, int hp, int attack, int defense, int evasion, int accuracy, int speed, const char *move1, const char *move2);


#endif
