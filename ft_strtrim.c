#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set) {
    // Başta ve sondaki karakterleri atla
    while (*s1 && strchr(set, *s1)) {
        s1++;
    }
    int len = strlen(s1);
    while (len > 0 && strchr(set, s1[len - 1])) {
        len--;
    }

    // Yeni bir dize için bellek ayır
    char *result = (char *)malloc(len + 1);

    if (!result) {
        return NULL; // Bellek hatası
    }

    // Temizlenmiş diziyi oluştur
    strncpy(result, s1, len);
    result[len] = '\0';

    return result;
}

int main() {
    char text[] = "kabak    ";
    char set[] = "ka";

    char *trimmed = ft_strtrim(text, set);

    if (trimmed) {
        printf("Temizlenmiş: '%s'\n", trimmed);
        free(trimmed); // Belleği serbest bırak
    } else {
        printf("Bellek hatası! Temizlenemedi.\n");
    }

    return 0;
}
