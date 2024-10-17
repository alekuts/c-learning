#include <stdio.h>
#include <stdlib.h>

int main() {
    char *gig = (char *)malloc(1073741824 * sizeof(char)); // 1 ГіБ

    if (gig == NULL) {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }
for (size_t i = 0; i < 1073741824; i++) {
        gig[i] = 0;
    }

    fgets(gig, sizeof(gig), stdin);

    return 0;
}
