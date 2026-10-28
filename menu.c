
#include <stdio.h>

int main() {
    int option, qty;
    int total = 0;
    int coffee = 0, pizza = 0, burger = 0;

    do {
        printf("\n<------- Welcome to Pratush Cafe ------->\n");
        printf("1. Coffee: 150\n");
        printf("2. Pizza: 200\n");
        printf("3. Burger: 70\n");
        printf("0. Generate Bill\n");

        printf("Enter your choice: ");
        scanf("%d", &option);

        if (option >= 1 && option <= 3) {
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if (qty <= 0) {
                printf("Invalid quantity!\n");
                continue;
            }
        }

        switch (option) {
            case 1:
                coffee += qty;
                total += 150 * qty;
                break;

            case 2:
                pizza += qty;
                total += 200 * qty;
                break;

            case 3:
                burger += qty;
                total += 70 * qty;
                break;

            case 0:
                printf("\nGenerating bill...\n");
                break;

            default:
                printf("Invalid option!\n");
        }

    } while (option != 0);

    printf("\n========== PRATUSH CAFE BILL ==========\n");

    if (coffee > 0)
        printf("Coffee  x %d = Rs. %d\n", coffee, coffee * 150);

    if (pizza > 0)
        printf("Pizza   x %d = Rs. %d\n", pizza, pizza * 200);

    if (burger > 0)
        printf("Burger  x %d = Rs. %d\n", burger, burger * 70);

    printf("---------------------------------------\n");
    printf("Total Bill = Rs. %d\n", total);
    printf("Thank you,Visit Again\n");
}