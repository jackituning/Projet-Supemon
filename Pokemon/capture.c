#include <stdlib.h>
#include <time.h>

int tryCapture(int max_hp, int current_hp) {
    if (max_hp <= 0) return 0; // �vite la division par z�ro

    int capture_chance = ((max_hp - current_hp) * 100) / max_hp; // Calcul du taux de capture

    // S'assurer que capture_chance reste entre 0 et 100
    if (capture_chance < 0) capture_chance = 0;
    if (capture_chance > 100) capture_chance = 100;

    return (rand() % 100) < capture_chance; // Succ�s si le nombre al�atoire est inf�rieur au taux de capture
}
