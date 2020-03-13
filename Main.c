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
} question1_100, question2_100, question3_100, question4_100, question5_100;

struct pytania_1000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_1000, question2_1000, question3_1000, question4_1000, question5_1000;

struct pytania_5000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_5000, question2_5000, question3_5000, question4_5000, question5_5000;

struct pytania_10000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_10000, question2_10000, question3_10000, question4_10000, question5_10000;

struct pytania_50000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_50000, question2_50000, question3_50000, question4_50000, question5_50000;

struct pytania_250000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_250000, question2_250000, question3_250000, question4_250000, question5_250000;

struct pytania_500000 {
    char question[N];
    char Answer_A[N];
    char Answer_B[N];
    char Answer_C[N];
    char Answer_D[N];
} question1_500000, question2_500000, question3_500000, question4_500000, question5_500000;



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
    if (wylosowane_pytanie_100 == 3) {
        memcpy(question3_100.question, "Co przeslania swiatlo Slonca widziane z Ziemi w czasie calkowitego zacmienia Slonca?\n", N);
        memcpy(question3_100.Answer_A, "A.Ksiezyc\n", N);
        memcpy(question3_100.Answer_B, "B.Mars\n", N);
        memcpy(question3_100.Answer_C, "C.kometa\n", N);
        memcpy(question3_100.Answer_D, "D.satelita\n", N);
        printf("%s %s %s %s %s", question3_100.question, question3_100.Answer_A, question3_100.Answer_B, question3_100.Answer_C, question3_100.Answer_D);
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
    if (wylosowane_pytanie_100 == 4) {
        memcpy(question4_100.question, "Jak nazywa sie zgromadzenie powolane w celu uchwalenia konstutucji?\n", N);
        memcpy(question4_100.Answer_A, "A.sejm\n", N);
        memcpy(question4_100.Answer_B, "B.elektorat\n", N);
        memcpy(question4_100.Answer_C, "C.konstutuanta\n", N);
        memcpy(question4_100.Answer_D, "D.senat\n", N);
        printf("%s %s %s %s %s", question4_100.question, question4_100.Answer_A, question4_100.Answer_B, question4_100.Answer_C, question4_100.Answer_D);
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

    if (wylosowane_pytanie_100 == 5) {
        memcpy(question5_100.question, "Umowna granica miedzy Europa a Azja sa gory?\n", N);
        memcpy(question5_100.Answer_A, "A.Pireneje\n", N);
        memcpy(question5_100.Answer_B, "B.Ural\n", N);
        memcpy(question5_100.Answer_C, "C.Kaukaz\n", N);
        memcpy(question5_100.Answer_D, "D.Himalaje\n", N);
        printf("%s %s %s %s %s", question5_100.question, question5_100.Answer_A, question5_100.Answer_B, question5_100.Answer_C, question5_100.Answer_D);
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

    if (wylosowane_pytanie_1000 == 3) {
        memcpy(question3_1000.question, "Ktory pierwiastek jest podstawa w chemii organicznej?\n", N);
        memcpy(question3_1000.Answer_A, "A.azot\n", N);
        memcpy(question3_1000.Answer_B, "B.wegiel\n", N);
        memcpy(question3_1000.Answer_C, "C.tlen\n", N);
        memcpy(question3_1000.Answer_D, "D.wodor\n", N);
        printf("%s %s %s %s %s", question3_1000.question, question3_1000.Answer_A, question3_1000.Answer_B, question3_1000.Answer_C, question3_1000.Answer_D);
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

    if (wylosowane_pytanie_1000 == 4) {
        memcpy(question4_1000.question, "Jaki ksztalt maja polskie znaki drogowe informacyjne?\n", N);
        memcpy(question4_1000.Answer_A, "A.kola\n", N);
        memcpy(question4_1000.Answer_B, "B.trojkata\n", N);
        memcpy(question4_1000.Answer_C, "C.trapezu\n", N);
        memcpy(question4_1000.Answer_D, "D.prostokatu\n", N);
        printf("%s %s %s %s %s", question4_1000.question, question4_1000.Answer_A, question4_1000.Answer_B, question4_1000.Answer_C, question4_1000.Answer_D);
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

    if (wylosowane_pytanie_1000 == 5) {
        memcpy(question5_1000.question, "Pierwszym krolem Polski byl?\n", N);
        memcpy(question5_1000.Answer_A, "A.Mieszko I\n", N);
        memcpy(question5_1000.Answer_B, "B.Boleslaw Smialy\n", N);
        memcpy(question5_1000.Answer_C, "C.Kazimierz Odnowiciel\n", N);
        memcpy(question5_1000.Answer_D, "D.Boleslaw Chrobry\n", N);
        printf("%s %s %s %s %s", question5_1000.question, question5_1000.Answer_A, question5_1000.Answer_B, question5_1000.Answer_C, question5_1000.Answer_D);
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

int pytania_odpowiedzi_5000(int wylosowane_pytanie_5000)
{
    puts("Pytanie za 5000 zl");
    char odp;

    if (wylosowane_pytanie_5000 == 1) {
        memcpy(question1_5000.question, "Co jest jednostka pojemnosci elektrycznej?\n", N);
        memcpy(question1_5000.Answer_A, "A.amper\n", N);
        memcpy(question1_5000.Answer_B, "B.volt\n", N);
        memcpy(question1_5000.Answer_C, "C.rank\n", N);
        memcpy(question1_5000.Answer_D, "D.farad\n", N);
        printf("%s %s %s %s %s", question1_5000.question, question1_5000.Answer_A, question1_5000.Answer_B, question1_5000.Answer_C, question1_5000.Answer_D);
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

    if (wylosowane_pytanie_5000 == 2) {
        memcpy(question2_5000.question, "Kto odkryl morska droge do Indii?\n", N);
        memcpy(question2_5000.Answer_A, "A.Amerigo Vespucci\n", N);
        memcpy(question2_5000.Answer_B, "B.Krzysztof Kolumb\n", N);
        memcpy(question2_5000.Answer_C, "C.Vasco da Gama\n", N);
        memcpy(question2_5000.Answer_D, "D.John Cook\n", N);
        printf("%s %s %s %s %s", question2_5000.question, question2_5000.Answer_A, question2_5000.Answer_B, question2_5000.Answer_C, question2_5000.Answer_D);
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

    if (wylosowane_pytanie_5000 == 3) {
        memcpy(question3_5000.question, "Ktora reprezentacja wygrala najwiecej Mistrzostw swiata w pilce noznej ?\n", N);
        memcpy(question3_5000.Answer_A, "A.Brazylia\n", N);
        memcpy(question3_5000.Answer_B, "B.Niemcy\n", N);
        memcpy(question3_5000.Answer_C, "C.Urugwaj\n", N);
        memcpy(question3_5000.Answer_D, "D.Francja\n", N);
        printf("%s %s %s %s %s", question3_5000.question, question3_5000.Answer_A, question3_5000.Answer_B, question3_5000.Answer_C, question3_5000.Answer_D);
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

    if (wylosowane_pytanie_5000 == 4) {
        memcpy(question4_5000.question, "Ktory gruczol potrzebuje jodu do wlasciwego funkcjonowania ?\n", N);
        memcpy(question4_5000.Answer_A, "A.przysadka\n", N);
        memcpy(question4_5000.Answer_B, "B.tarczyca\n", N);
        memcpy(question4_5000.Answer_C, "C.jajnik\n", N);
        memcpy(question4_5000.Answer_D, "D.przytarczyczki\n", N);
        printf("%s %s %s %s %s", question4_5000.question, question4_5000.Answer_A, question4_5000.Answer_B, question4_5000.Answer_C, question4_5000.Answer_D);
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

    if (wylosowane_pytanie_5000 == 5) {
        memcpy(question4_5000.question, "Drewniany statek o malym zanurzeniu uzywany w Chinach do polowow ryb to: ?\n", N);
        memcpy(question4_5000.Answer_A, "A.piroga\n", N);
        memcpy(question4_5000.Answer_B, "B.canoe\n", N);
        memcpy(question4_5000.Answer_C, "C.galera\n", N);
        memcpy(question4_5000.Answer_D, "D.dzonka\n", N);
        printf("%s %s %s %s %s", question4_5000.question, question4_5000.Answer_A, question4_5000.Answer_B, question4_5000.Answer_C, question4_5000.Answer_D);
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

int pytania_odpowiedzi_10000(int wylosowane_pytanie_10000)
{
    puts("Pytanie za 10000 zl");
    char odp;
    if (wylosowane_pytanie_10000 == 1) {
        memcpy(question1_10000.question, "Ktore z rozszerzen oznacza pliki skompresowane?\n", N);
        memcpy(question1_10000.Answer_A, "A.vbs\n", N);
        memcpy(question1_10000.Answer_B, "B.html\n", N);
        memcpy(question1_10000.Answer_C, "C.cpp\n", N);
        memcpy(question1_10000.Answer_D, "D.rar\n", N);
        printf("%s %s %s %s %s", question1_10000.question, question1_10000.Answer_A, question1_10000.Answer_B, question1_10000.Answer_C, question1_10000.Answer_D);
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

    if (wylosowane_pytanie_10000 == 2) {
        memcpy(question2_10000.question, "Najwiecej atomow wegla w czasteczce zawiera:?\n", N);
        memcpy(question2_10000.Answer_A, "A.metan\n", N);
        memcpy(question2_10000.Answer_B, "B.etan\n", N);
        memcpy(question2_10000.Answer_C, "C.butan\n", N);
        memcpy(question2_10000.Answer_D, "D.propan\n", N);
        printf("%s %s %s %s %s", question2_10000.question, question2_10000.Answer_A, question2_10000.Answer_B, question2_10000.Answer_C, question2_10000.Answer_D);
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

    if (wylosowane_pytanie_10000 == 3) {
        memcpy(question3_10000.question, "Ile wynosi najdluzszy skok w karierze Adama Malysza?\n", N);
        memcpy(question3_10000.Answer_A, "A.230,5\n", N);
        memcpy(question3_10000.Answer_B, "B.238\n", N);
        memcpy(question3_10000.Answer_C, "C.227\n", N);
        memcpy(question3_10000.Answer_D, "D.234,5\n", N);
        printf("%s %s %s %s %s", question3_10000.question, question3_10000.Answer_A, question3_10000.Answer_B, question3_10000.Answer_C, question3_10000.Answer_D);
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

    if (wylosowane_pytanie_10000 == 4) {
        memcpy(question4_10000.question, "Jak nazywa sie stolica Malezji?\n", N);
        memcpy(question4_10000.Answer_A, "A.Kuala Lumpur\n", N);
        memcpy(question4_10000.Answer_B, "B.Bamako\n", N);
        memcpy(question4_10000.Answer_C, "C.Hanoi\n", N);
        memcpy(question4_10000.Answer_D, "D.Abu Zabi\n", N);
        printf("%s %s %s %s %s", question4_10000.question, question4_10000.Answer_A, question4_10000.Answer_B, question4_10000.Answer_C, question4_10000.Answer_D);
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

    if (wylosowane_pytanie_10000 == 5) {
        memcpy(question5_10000.question, "Ile czsu minelo od startu Apollo 11 do ladowania na ksiezycu?\n", N);
        memcpy(question5_10000.Answer_A, "A.30 dni\n", N);
        memcpy(question5_10000.Answer_B, "B.3 dni\n", N);
        memcpy(question5_10000.Answer_C, "C.1 dzien\n", N);
        memcpy(question5_10000.Answer_D, "D.60 dni\n", N);
        printf("%s %s %s %s %s", question5_10000.question, question5_10000.Answer_A, question5_10000.Answer_B, question5_10000.Answer_C, question5_10000.Answer_D);
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
        return 0;
}

int pytania_odpowiedzi_50000(int wylosowane_pytanie_50000)
{
    puts("Pytanie za 50000 zl");
    char odp;

    if (wylosowane_pytanie_50000 == 1) {
        memcpy(question1_50000.question, "Jakie jest najglebsze jezioro w Polsce?\n", N);
        memcpy(question1_50000.Answer_A, "A.Hancza\n", N);
        memcpy(question1_50000.Answer_B, "B.Morskie Oko\n", N);
        memcpy(question1_50000.Answer_C, "C.Szelment\n", N);
        memcpy(question1_50000.Answer_D, "D.Sniardwy\n", N);
        printf("%s %s %s %s %s", question1_50000.question, question1_50000.Answer_A, question1_50000.Answer_B, question1_50000.Answer_C, question1_50000.Answer_D);
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

    if (wylosowane_pytanie_50000 == 2) {
        memcpy(question2_50000.question, "Jaki jezyk urzedowy obowiazuje na Cyprze?\n", N);
        memcpy(question2_50000.Answer_A, "A.Cyprzynski\n", N);
        memcpy(question2_50000.Answer_B, "B.Grecki\n", N);
        memcpy(question2_50000.Answer_C, "C.Angielski\n", N);
        memcpy(question2_50000.Answer_D, "D.Francuski\n", N);
        printf("%s %s %s %s %s", question2_50000.question, question2_50000.Answer_A, question2_50000.Answer_B, question2_50000.Answer_C, question2_50000.Answer_D);
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

    if (wylosowane_pytanie_50000 == 3) {
        memcpy(question3_50000.question, "Jak nazywa sie stolica Australii?\n", N);
        memcpy(question3_50000.Answer_A, "A.Syndey\n", N);
        memcpy(question3_50000.Answer_B, "B.Kair\n", N);
        memcpy(question3_50000.Answer_C, "C.Canberra\n", N);
        memcpy(question3_50000.Answer_D, "D.Ottawa\n", N);
        printf("%s %s %s %s %s", question3_50000.question, question3_50000.Answer_A, question3_50000.Answer_B, question3_50000.Answer_C, question3_50000.Answer_D);
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

    if (wylosowane_pytanie_50000 == 4) {
        memcpy(question4_50000.question, "Ile Wojewodztw ma Polska?\n", N);
        memcpy(question4_50000.Answer_A, "A.15\n", N);
        memcpy(question4_50000.Answer_B, "B.19\n", N);
        memcpy(question4_50000.Answer_C, "C.23\n", N);
        memcpy(question4_50000.Answer_D, "D.16\n", N);
        printf("%s %s %s %s %s", question4_50000.question, question4_50000.Answer_A, question4_50000.Answer_B, question4_50000.Answer_C, question4_50000.Answer_D);
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

    if (wylosowane_pytanie_50000 == 5) {
        memcpy(question5_50000.question, "Ile jest miejsc w polskim senacie?\n", N);
        memcpy(question5_50000.Answer_A, "A.100\n", N);
        memcpy(question5_50000.Answer_B, "B.120\n", N);
        memcpy(question5_50000.Answer_C, "C.60\n", N);
        memcpy(question5_50000.Answer_D, "D.460\n", N);
        printf("%s %s %s %s %s", question5_50000.question, question5_50000.Answer_A, question5_50000.Answer_B, question5_50000.Answer_C, question5_50000.Answer_D);
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

int pytania_odpowiedzi_250000(int wylosowane_pytanie_250000)
{
    puts("Pytanie za 250000 zl");
    char odp;

    if (wylosowane_pytanie_250000 == 1) {
        memcpy(question1_250000.question, "Jak nazywa sie punkt przeciwlegly zenitowi?\n", N);
        memcpy(question1_250000.Answer_A, "A.paralaksa\n", N);
        memcpy(question1_250000.Answer_B, "B.nadir\n", N);
        memcpy(question1_250000.Answer_C, "C.azymut\n", N);
        memcpy(question1_250000.Answer_D, "D.radian\n", N);
        printf("%s %s %s %s %s", question1_250000.question, question1_250000.Answer_A, question1_250000.Answer_B, question1_250000.Answer_C, question1_250000.Answer_D);
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

    if (wylosowane_pytanie_250000 == 2) {
        memcpy(question2_250000.question, "Ktora z greckich bogin byla opiekunka dzieci i sierot oraz ogniska domowego?\n", N);
        memcpy(question2_250000.Answer_A, "A.Artemida\n", N);
        memcpy(question2_250000.Answer_B, "B.Hera\n", N);
        memcpy(question2_250000.Answer_C, "C.Hestia\n", N);
        memcpy(question2_250000.Answer_D, "D.Demeter\n", N);
        printf("%s %s %s %s %s", question2_250000.question, question2_250000.Answer_A, question2_250000.Answer_B, question2_250000.Answer_C, question2_250000.Answer_D);
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

    if (wylosowane_pytanie_250000 ==3) {
        memcpy(question3_250000.question, "Jak nazywali sie dwaj glowni bohaterowie w filmie Pulp Fiction?\n", N);
        memcpy(question3_250000.Answer_A, "A.Jules i Vincent\n", N);
        memcpy(question3_250000.Answer_B, "B.Mick i Butch\n", N);
        memcpy(question3_250000.Answer_C, "C.Jack i Vincent\n", N);
        memcpy(question3_250000.Answer_D, "D.Vernon i Jules\n", N);
        printf("%s %s %s %s %s", question3_250000.question, question3_250000.Answer_A, question3_250000.Answer_B, question3_250000.Answer_C, question3_250000.Answer_D);
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

    if (wylosowane_pytanie_250000 == 4) {
        memcpy(question4_250000.question, "Ile to jest gros?\n", N);
        memcpy(question4_250000.Answer_A, "A.110\n", N);
        memcpy(question4_250000.Answer_B, "B.111\n", N);
        memcpy(question4_250000.Answer_C, "C.144\n", N);
        memcpy(question4_250000.Answer_D, "D.180\n", N);
        printf("%s %s %s %s %s", question4_250000.question, question4_250000.Answer_A, question4_250000.Answer_B, question4_250000.Answer_C, question4_250000.Answer_D);
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

    if (wylosowane_pytanie_250000 == 5) {
        memcpy(question5_250000.question, "Jak nazywal sie przywodca krasnoludow w ksiazce Hobbit?\n", N);
        memcpy(question5_250000.Answer_A, "A.Gandalf Szary\n", N);
        memcpy(question5_250000.Answer_B, "B.Bilbo Bagins\n", N);
        memcpy(question5_250000.Answer_C, "C.Aragorn\n", N);
        memcpy(question5_250000.Answer_D, "D.Thorin Debowa Tarcza\n", N);
        printf("%s %s %s %s %s", question5_250000.question, question5_250000.Answer_A, question5_250000.Answer_B, question5_250000.Answer_C, question5_250000.Answer_D);
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

int pytania_odpowiedzi_500000(int wylosowane_pytanie_500000)
{
    puts("Pytanie za 500000 zl");
    char odp;

    if (wylosowane_pytanie_500000 == 1) {
        memcpy(question1_500000.question, "W Ktorym kraju znajduja sie ruiny Kartaginy?\n", N);
        memcpy(question1_500000.Answer_A, "A.w Turcji\n", N);
        memcpy(question1_500000.Answer_B, "B.w Indiach\n", N);
        memcpy(question1_500000.Answer_C, "C.w Tunezji\n", N);
        memcpy(question1_500000.Answer_D, "D.w Egipcie\n", N);
        printf("%s %s %s %s %s", question1_500000.question, question1_500000.Answer_A, question1_500000.Answer_B, question1_500000.Answer_C, question1_500000.Answer_D);
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

    if (wylosowane_pytanie_500000 == 2) {
        memcpy(question2_500000.question, "Kim byl Atylla?\n", N);
        memcpy(question2_500000.Answer_A, "A.Wodzem Spartan\n", N);
        memcpy(question2_500000.Answer_B, "B.Wodzem Hunow\n", N);
        memcpy(question2_500000.Answer_C, "C.Wodzem Rzymian\n", N);
        memcpy(question2_500000.Answer_D, "D.Wodzem Persow\n", N);
        printf("%s %s %s %s %s", question2_500000.question, question2_500000.Answer_A, question2_500000.Answer_B, question2_500000.Answer_C, question2_500000.Answer_D);
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

    if (wylosowane_pytanie_500000 == 3) {
        memcpy(question3_500000.question, "Ktora z niemieckich wunderwaffe byla bezzalogowym samolotem-bomba?\n", N);
        memcpy(question3_500000.Answer_A, "A.V-2\n", N);
        memcpy(question3_500000.Answer_B, "B.Neger\n", N);
        memcpy(question3_500000.Answer_C, "C.V-3\n", N);
        memcpy(question3_500000.Answer_D, "D.V-1\n", N);
        printf("%s %s %s %s %s", question3_500000.question, question3_500000.Answer_A, question3_500000.Answer_B, question3_500000.Answer_C, question3_500000.Answer_D);
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

    if (wylosowane_pytanie_500000 == 4) {
        memcpy(question4_500000.question, "Wzgorze Tibidabo znajduje sie w ?\n", N);
        memcpy(question4_500000.Answer_A, "A.Barcelonie\n", N);
        memcpy(question4_500000.Answer_B, "B.Madrycie\n", N);
        memcpy(question4_500000.Answer_C, "C.Lizbonie\n", N);
        memcpy(question4_500000.Answer_D, "D.Bilbao\n", N);
        printf("%s %s %s %s %s", question4_500000.question, question4_500000.Answer_A, question4_500000.Answer_B, question4_500000.Answer_C, question4_500000.Answer_D);
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

    if (wylosowane_pytanie_500000 == 5) {
        memcpy(question5_500000.question, " Do dynastii Andegawenow nalezal?\n", N);
        memcpy(question5_500000.Answer_A, "A.Henryk IV Probus\n", N);
        memcpy(question5_500000.Answer_B, "B.Henryk Walezy\n", N);
        memcpy(question5_500000.Answer_C, "C.Leszek Czarny\n", N);
        memcpy(question5_500000.Answer_D, "D.Ludwik Wegierski\n", N);
        printf("%s %s %s %s %s", question5_500000.question, question5_500000.Answer_A, question5_500000.Answer_B, question5_500000.Answer_C, question5_500000.Answer_D);
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


int main()
{
    puts("+------------------------------------------------------Milionerzy------------------------------------------------------+\n");
    int wylosowane_pytanie_100, wylosowane_pytanie_1000, wylosowane_pytanie_5000, wylosowane_pytanie_10000, wylosowane_pytanie_50000;
    int wylosowane_pytanie_250000, wylosowane_pytanie_500000;
    unsigned int wybor, wynik = 0;
    srand(time(NULL));
    wylosowane_pytanie_100 = 1 + rand() % 5;
    wylosowane_pytanie_1000 = 1 + rand() % 5;
    wylosowane_pytanie_5000 = 1 + rand() % 5;
    wylosowane_pytanie_10000 = 1 + rand() % 5;
    wylosowane_pytanie_50000= 1 + rand() % 5;
    wylosowane_pytanie_250000= 1 + rand() % 5;
    wylosowane_pytanie_500000 = 1 + rand() % 5;

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
            }
            else
            {
                puts("Przegrywasz");
            }
        }
        if (wynik == 3) {
            if (pytania_odpowiedzi_5000(wylosowane_pytanie_5000) == 1) {
                wynik++;
            }
            else
            {
                puts("Przegrywasz");
            }
        }
        if (wynik == 4) {
            if (pytania_odpowiedzi_10000(wylosowane_pytanie_10000) == 1) {
                wynik++;
            }
            else
            {
                puts("Przegrywasz");
            }
        }
        if (wynik == 5) {
            if (pytania_odpowiedzi_50000(wylosowane_pytanie_50000) == 1) {
                wynik++;
            }
            else
            {
                puts("Przegrywasz");
            }
        }
        if (wynik == 6) {
            if (pytania_odpowiedzi_250000(wylosowane_pytanie_250000) == 1) {
                wynik++;
            }
            else
            {
                puts("Przegrywasz");
            }
        }
        if (wynik == 7) {
            if (pytania_odpowiedzi_500000(wylosowane_pytanie_500000) == 1) {
                puts("Gratulacje! Wygrales 500000 zl");
                wynik++;
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
