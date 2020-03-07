#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 100

struct pytania_100 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_100, question2_100;

struct pytania_1000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_1000, question2_1000;



int pytania_odpowiedzi_100(int wylosowane_pytanie_100)
{
    puts("Pytanie za 100 zl");
    char odp;
    if (wylosowane_pytanie_100 == 1) {
        memcpy(question1_100.question, "Ile miesiecy liczy kwartal?\n", N);
        memcpy(question1_100.Answer_A, "A.2\n", N);
        memcpy(question1_100.Answer_B, "B.3\n", N);
        memcpy(question1_100.Answer_C, "C.4\n", N);
        memcpy(question1_100.Answer_D, "D.5\n", N);
        printf("%s %s %s %s %s", question1_100.question, question1_100.Answer_A, question1_100.Answer_B, question1_100.Answer_C, question1_100.Answer_D);
        puts("Podaj odpowiedz:");
        scanf(" %c", &odp);
        if ((odp == 'B') || (odp == 'b')) {
            printf("Odpowiedz prawidlowa\n\n");
            return 1;
        }
        else {
            puts("Odpowiedz bledna");
            return 0;
        }
    }
    if (wylosowane_pytanie_100 == 2) {
        memcpy(question2_100.question, "Ile bitow liczy Bajt?\n", N);
        memcpy(question2_100.Answer_A, "A.2\n", N);
        memcpy(question2_100.Answer_B, "B.12\n", N);
        memcpy(question2_100.Answer_C, "C.16\n", N);
        memcpy(question2_100.Answer_D, "D.8\n", N);
        printf("%s %s %s %s %s", question2_100.question, question2_100.Answer_A, question2_100.Answer_B, question2_100.Answer_C, question2_100.Answer_D);
        puts("Podaj odpowiedz:");
        scanf(" %c", &odp);
        if ((odp == 'D') || (odp == 'd')) {
            printf("Odpowiedz prawidlowa\n\n");
            return 1;
        }
        else {
            puts("Odpowiedz bledna");
            return 0;
        }
    }
    return 0;
}

int pytania_odpowiedzi_1000(int wylosowane_pytanie_1000)
{
    puts("Pytanie za 1000 zl");
    char odp;
    if (wylosowane_pytanie_1000 == 1) {
        memcpy(question1_1000.question, "Latwo przyszlo, latwo...?\n", N);
        memcpy(question1_1000.Answer_A, "A.trzaslo\n", N);
        memcpy(question1_1000.Answer_B, "B.zgaslo\n", N);
        memcpy(question1_1000.Answer_C, "C.poszlo\n", N);
        memcpy(question1_1000.Answer_D, "D.zeszlo\n", N);
        printf("%s %s %s %s %s", question1_1000.question, question1_1000.Answer_A, question1_1000.Answer_B, question1_1000.Answer_C, question1_1000.Answer_D);
        puts("Podaj odpowiedz:");
        scanf(" %c", &odp);
        if ((odp == 'C') || (odp == 'c')) {
            printf("Odpowiedz prawidlowa\n\n");
            return 1;
        }
        else {
            puts("Odpowiedz bledna");
            return 0;
        }
    }
    if (wylosowane_pytanie_1000 == 2) {
        memcpy(question2_1000.question, "Jak nazywa sie polski pilkarz grajacy w Bayernie Monachium?\n", N);
        memcpy(question2_1000.Answer_A, "A.Robert Lewandowski\n", N);
        memcpy(question2_1000.Answer_B, "B.Piotr Zielinski\n", N);
        memcpy(question2_1000.Answer_C, "C.Arkadiusz Milik\n", N);
        memcpy(question2_1000.Answer_D, "D.Jakub Blaszczykowski\n", N);
        printf("%s %s %s %s %s", question2_1000.question, question2_1000.Answer_A, question2_1000.Answer_B, question2_1000.Answer_C, question2_1000.Answer_D);
        puts("Podaj odpowiedz:");
        scanf(" %c", &odp);
        if ((odp == 'A') || (odp == 'a')) {
            printf("Odpowiedz prawidlowa\n\n");
            return 1;
        }
        else {
            puts("Odpowiedz bledna");
            return 0;
        }
    }
    return 0;
}

int main()
{
    puts("+------------------------------------------------------Milionerzy------------------------------------------------------+");
    int wylosowane_pytanie_100, wylosowane_pytanie_1000;
    unsigned int wybor, wynik = 0;
    srand(time(NULL));
    wylosowane_pytanie_100 = 1 + rand() % 2;
    wylosowane_pytanie_1000 = 1 + rand() % 2;

    puts("Wybierz jedna z opcji");
    puts("[1]-Nowa gra");
    puts("[2]-Instrukcja");
    puts("[3]-Wyjdz z gry");
    scanf("%d", &wybor);
    printf("\n");

    if (wybor == 1) {
        wynik++;
        if (pytania_odpowiedzi_100(wylosowane_pytanie_100) == 1) {
            wynik++;
        }
        else {
            puts("Przegrywasz");
        }
        if (wynik == 2) {
            if (pytania_odpowiedzi_1000(wylosowane_pytanie_1000) == 1) {
                wynik++;
                puts("Wygrales 1000 zl ");
            }
            else
            {
                puts("Przegrywasz");
            }
        }
    }
    else if (wybor == 2) {
        puts("Aby wybrac odpowiedz wprowadz litere i nacisnij Enter");
    }
    if (wybor == 3) {
        return 0;
    }
    return 0;
}