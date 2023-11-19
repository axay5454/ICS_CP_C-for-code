#include<stdio.h>
#include<stdbool.h>


int main(){

    int pin = 3169;
    char name[50] = "Akshay Aloriya";
    int balance = 10000;
    bool flag1 = true;
    while(flag1){
        printf("Welcome to the ATM\n");
        int i = 0;
        for(;i<3;i++){
            printf("Enter your pin : ");
            int entry;
            scanf("%d",&entry);
            if(entry == pin){
                printf("Hello %s\n",name);
                break;
            }
            else{
                if(i != 2){
                    printf("You have entered incorrect PIN. Try again.\n");
                }
            }
        }
        if(i == 3){
            printf("Sorry, you have exceeded the limit. Kindly contact to the Bank.\n");
            break;
        }

        // Working fine!

        printf("What do you want to do today ?\n");
        bool flag2 = true;
        while(flag2){
            printf("Press 1 for Balance Checking\n");
            printf("Press 2 for Cash Withdrawl\n");
            printf("Press 3 for Cash Deposition\n");
            printf("Press 0 to exit\n");

            printf("Give your command now : ");
            int command;
            scanf("%d",&command);
            //Working fine
            switch(command){
                case 1:
                    printf("The balance in your account is %d\n",balance);
                    break;

                case 2:
                    printf("What amount do you want to withdraw?\n");
                    int amount;
                    printf("Enter your amount : ");
                    scanf("%d",&amount);
                    if(amount > balance){
                        printf("Sorry, this exceeds the balance in your account\n");
                    }
                    else{
                        printf("Congratulations... Your amount is successfully withdrawn.\n");
                        balance -= amount;
                    }
                    break;
                case 3:
                    printf("How much amount do you want to deposit?\n");
                    int deposit;
                    printf("Enter your deposition amount : ");
                    scanf("%d",&deposit);
                    printf("Congratulations... Your amount is successfully deposited\n");
                    balance += deposit;
                    break;
                
                case 0:
                    flag2 = false;
                    break;
            }

        }
        printf("Thanks... Visit again\n");
        flag1 = false;
            
    }
    

    

    return 0;
}