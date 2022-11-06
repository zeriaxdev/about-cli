#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "colors.h"

#define SLEEP_TIME_MS 300
#define sizeofa(array) sizeof array / sizeof array[0]
#define POINT "\e[42;30m * \e[0;32m"

int msleep(unsigned int tms) {
    return usleep(tms * 1000);
}

int main() {
    printf("\e[42;30m zeriax@puter " COLOR_RESET "\n");
    msleep(SLEEP_TIME_MS);

    char* greentexts[] = {
        "like koding and music",
        "know some typescript",
        "learning rust and c",
        "still kinda dumb",
        "trying to improve"};

    for (size_t i = 0; i < sizeofa(greentexts); i++) {
        printf(GRN "%s %s\n", POINT, greentexts[i], COLOR_RESET);
        msleep(SLEEP_TIME_MS);
    }

    printf("\e[42;30m let's connect " COLOR_RESET "\n");
    msleep(SLEEP_TIME_MS);

    char* socials[] = {
        "github:  \e[4;33mhttps://github.com/zeriaxdev",
        "youtube: \e[4;33mhttps://youtube.com/@zeriaxdev",
        "website: \e[4;33mhttps://zeriax.com",
        "matrix:  \e[4;33m@zeriax:matrix.org",
        "email:   \e[4;33mtheZeriax@protonmail.com",
        "discord: \e[4;33mzeriax#4997"};

    for (size_t i = 0; i < sizeofa(socials); i++) {
        printf(GRN "%s %s\n", POINT, socials[i], COLOR_RESET);
        msleep(SLEEP_TIME_MS);
    }

    printf("\e[0;42;30m yes, that's me " COLOR_RESET "\n");

    return 0;
}
