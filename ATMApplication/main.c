#include <stdio.h>

int main(int argc, const char * argv[]) {

    float UserBalance = 1000.0, UserQuantitiy = 0.0, DailyLimit = 500.0;
    int Process;

    printf("\t Hello , Welcome !!!\n");
    printf("\t Please select the action you want to perform.\n");
    printf("\t 1- Deposit\n");
    printf("\t 2- Withdraw\n");
    printf("\t 3- Balance Inquiry\n");
    

    scanf("%d", &Process);

    if (Process == 1) {
        printf("\t Please enter the amount you want to deposit\n");
        scanf("%f", &UserQuantitiy);
        if (UserQuantitiy == 0) {
            printf("\t Please enter money within the specified time.\n");
            scanf("%f", &UserQuantitiy);
        }
        UserBalance += UserQuantitiy;
        printf("\t Your transaction has been completed successfully.\n");
        printf("\t Your new balance = %f\n", UserBalance);

    } else if (Process == 2) {
        printf("\t Please enter the amount you want to withdraw\n");
        scanf("%f", &UserQuantitiy);
        if (UserQuantitiy > UserBalance) {
            printf("\t Please do not attempt a transaction larger than the account balance.\n");
            printf("\t Your current account balance = %f", UserBalance);
            scanf("%f", &UserQuantitiy);

        } else if (UserQuantitiy > DailyLimit) {
            printf("\t Please do not exceed the daily limit\n");
            scanf("%f", &UserQuantitiy);
        }
        UserBalance -= UserQuantitiy;
        printf("\t Your transaction has been completed successfully.\n");
        printf("\t Your new balance = %f", UserBalance);

    } else if (Process == 3) {
        printf("\t Your balance = %f\n", UserBalance);

    } else {
        printf("\t Please make a valid choice\n");

    }
}
