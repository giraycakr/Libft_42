#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    // Başta ve sondaki karakterleri atla
    while (*s1 && ft_strchr(set, *s1)) {
        s1++;
    }
    int len = ft_strlen(s1);
    while (len > 0 && ft_strchr(set, s1[len - 1])) {
        len--;
    }

    // Yeni bir dize için bellek ayır
    char *result = (char *)malloc((len > 0 ? len : 1) + 1);

    if (!result) {
        return NULL; // Bellek hatası
    }

    // Temizlenmiş diziyi oluştur
    ft_strlcpy(result, s1, len + 1);

    return result;
}

