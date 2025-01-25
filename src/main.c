#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/**
 *
 * Der Euklidische Algorhthmus wird verwendet um den ggT von zwei Zahlen zu finden.
 *
 * Als kleine Übung wollte ich den Euklidischen Algorithmen mit Division in C implementieren.
 *
 * Thema war dieser in dem Kurs "Informatik Präpodeutikum" im ersten Semester an der TU Berlin
 *
 * ggT(252,105)
 *
 * 252:105 = 2 Rest ((2*105)-252=) 42
 * 105:42 = 2 Rest ((2*42)-105=) [21]
 * 42:21 = 1 Rest ((2*21)-42) 0
 *
 * Lösung: 21
 */

int euklidischer_algo(int first_num, int second_num)
{
    // solange second_num nicht 0 ist läuft die schleife
    // second_num ist immer der rest
    while (second_num != 0)
    {
        // second num zwischenspeichern
        int temp = second_num;
        // erste und zweite nummer teilen und dadurch den rest berechnen
        second_num = first_num % second_num;
        // nun tauschen wir die zahlen und gehen somit einen schritt weiter
        first_num = temp;
    }
    // das letzte element, welches nicht null ist, ist dann der ggT
    return first_num;
}

int main()
{
    int first_num, second_num;

    printf("Der Euklidische Algorhthmus wird verwendet um den ggT von zwei Zahlen zu finden.\n");
    printf("Als kleine Übung wollte ich den Euklidischen Algorithmen mit Division in C implementieren.\n");
    printf("Thema war dieser in dem Kurs \"Informatik Praepodeutikum\" im ersten Semester an der TU Berlin.\n\n\n");

    printf("Gib die erste Zahl ein:");
    if (scanf("%d", &first_num) != 1)
    {
        printf("Eingabe muss eine Zahl sein...");
        return 1;
    }

    printf("Gib die zweite Zahl ein:");
    if (scanf("%d", &second_num) != 1)
    {
        printf("Eingabe muss eine Zahl sein...");
        return 1;
    }

    printf("Berechnung des ggT(%d,%d)...\n", first_num, second_num);
    int result = euklidischer_algo(first_num, second_num);
    printf("Der ggT betraegt: %d\n", result);

    return 0;
}