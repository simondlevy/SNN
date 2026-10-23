#include <string.h>

size_t strlcpy(char *dst, const char *src, size_t size) {
    size_t srclen = strlen(src);
    if (size) {
        size_t min = (srclen >= size) ? size - 1 : srclen;
        memcpy(dst, src, min);
        dst[min] = '\0';
    }
    return srclen;
}
