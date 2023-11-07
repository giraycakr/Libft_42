#include <stdlib.h>

static int count_words(const char *s, char c) {
    int count = 0;
    int in_word = 0;

    while (*s) {
        if (*s != c) {
            if (!in_word) {
                in_word = 1;
                count++;
            }
        } else {
            in_word = 0;
        }
        s++;
    }

    return count;
}

char **ft_split(char const *s, char c) {
    if (s == NULL)
        return NULL;

    int num_splits = count_words(s, c);

    // String dizisi için bellek tahsisi
    char **result = (char **)malloc(sizeof(char *) * (num_splits + 1));
    if (result == NULL)
        return NULL;

    const char *str = s;
    int i = 0;

    while (*str) {
        if (*str != c) {
            const char *start = str;
            while (*str && *str != c) {
                str++;
            }
            int split_len = str - start;
            result[i] = (char *)malloc(split_len + 1);

            if (result[i] == NULL) {
                // Bellek tahsisi hatası varsa, önceki tahsis edilen belleği temizle ve NULL döndür
                for (int j = 0; j < i; j++) {
                    free(result[j]);
                }
                free(result);
                return NULL;
            }

            for (int j = 0; j < split_len; j++) {
                result[i][j] = start[j];
            }
            result[i][split_len] = '\0';
            i++;
        } else {
            str++;
        }
    }

    result[i] = NULL; // Sonuç dizisini NULL ile sonlandır

    return result;
}

int main() {
    const char *input = "Merhaba,Dünya,Nasılsın";
    char separator = ',';

    char **result = ft_split(input, separator);
    if (result == NULL) {
        printf("Bellek tahsis hatası\n");
        return 1;
    }

    // Elde edilen bölünmüş string dizisini kullan
    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
