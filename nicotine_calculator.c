#include <stdio.h>
#include <strings.h>
#include <stdlib.h>


const float NICOTINE_PER_CIGARETTE = 1.2f;
const float NICOTINE_PER_BD = 2.0f;

int main() {

    int choice = 0;
    int bd_count = 0, cig_count = 0, years = 0;
    float bd_price = 0.0f, cig_price = 0.0f;

    float total_nicotine_daily = 0.0f;
    float cost_per_day = 0.0f, cost_per_week = 0.0f, cost_per_year = 0.0f;

    long long total_smoked_lifetime = 0;


    printf("\033[1;34m\n");
    printf("\n\n---------------------------------------\n");
    printf("\033[1;33m"); 
    printf("Welcome to the Smoking Habits Analyzer\n");
    printf("\033[1;32m"); 
    printf("----------@Dev - xghost----------------\n\n");
    printf("\033[0m\n");
   

    printf("Please select your Smoking type:\n");
    printf(" 1. BD (Beedi) Only\n");
    printf(" 2. Cigarettes Only\n");
    printf(" 3. Both BD and Cigarettes\n\n");

    printf("Enter your Choice (1, 2, or 3): ");

    scanf("%d", &choice);



    if(choice == 1){

        printf("\n--- BD (Beedi) Details ---\n");
        printf("How many BDs do you smoke per day? ");
        scanf("%d", &bd_count);
        
        printf("What is the average price of ONE BD? (e.g Rs. 10) ");
        scanf("%f", &bd_price);

    } else if(choice == 2) {

        printf("\n--- Cigarettes Details ---\n");
        printf("How many Cigarettes do you smoke per day? ");
        scanf("%d", &cig_count);
        
        printf("What is the average price of ONE Cigarettes? (e.g Rs. 160) ");
        scanf("%f", &cig_price);

    } else if( choice == 3){

        printf("\n--- BD (Beedi) Details ---\n");
        printf("How many BDs do you smoke per day? ");
        scanf("%d", &bd_count);
        
        printf("What is the average price of ONE BD? (e.g. Rs. 10) ");
        scanf("%f", &bd_price);

        printf("\n--- Cigarettes Details ---\n");
        printf("How many Cigarettes do you smoke per day? ");
        scanf("%d", &cig_count);
        
        printf("What is the average price of ONE Cigarettes? (e.g Rs. 160) ");
        scanf("%f", &cig_price);

    } else {

        printf("\033[1;31m"); 
        printf("\nError: '%d' is not a valid choice. Please restart the program.\n");
        printf("\033[0m\n");
        exit(1);

    }

    printf("\n--- Final Question ---\n");
    printf("How many years have you been smoking? ");
    scanf("%d", &years);

      
    total_nicotine_daily = (bd_count * NICOTINE_PER_BD) + (cig_count * NICOTINE_PER_CIGARETTE);
    
    cost_per_day = (bd_count * bd_price) + (cig_count * cig_price);
    cost_per_week = cost_per_day * 7;
    cost_per_year = cost_per_day * 365;
    

    total_smoked_lifetime = (long long)(bd_count + cig_count) * 365 * years;

    printf("\033[1;35m\n");
    printf("\n\n------------------------------------\n");
    printf("    Your Non Medical Analysis Report\n");
    printf("------------------------------------\n\n");
    printf("\033[0m\n");
    

    printf("\033[1;33m"); 
    printf("------Chemical Intake (Estimated)----\n");
    printf("\033[0m\n");
    printf("Total Daily Nicotine: %.1f mg\n\n", total_nicotine_daily);
    
    printf("\033[1;34m"); 
    printf("------Financial Cost (Estimated)----\n");
    printf("\033[0m\n");
    printf("Cost Per Day:   Rs. %.2f\n", cost_per_day);
    printf("Cost Per Week:  Rs. %.2f\n", cost_per_week);
    printf("Cost Per Year:  Rs. %.2f\n", cost_per_year);
    
    printf("\033[1;32m"); 
    printf("\n------Habit Duration (Estimated)----\n");
    printf("\033[0m\n");
    printf("Over %d years, you have smoked approximately:\n", years);
    printf(" %lld  total units.\n", total_smoked_lifetime);
    
    printf("\n------------------------------------\n");
    printf("\033[1;31m"); 
    printf("This is a non medical report for motivational purposes only.\n");
    printf("\033[0m\n");
    printf("Please be kind to share with your smoking buddies... they need saving too!\n\n\n");



    return 0;
};