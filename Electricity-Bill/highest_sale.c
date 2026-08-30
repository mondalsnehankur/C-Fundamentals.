#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Defining the constructor to store the sales along with their day names correspondingly.
struct sales{
    char day[10];
    float sales;
};

// Defining a veriable to denote the no of days to calculate.
int n;

// Dynamic allocation of the array.
struct sales *s;

void input(){
    printf("Enter the no:of days for which sales are to be noted: ");
    scanf("%d",&n);

    // Dynamically allocate memory for n days
    s = malloc(n * sizeof(struct sales));

    //Now the user shall enter the day names and the sales on that particular day.
    for(int i = 0; i < n; i++){
        printf("\n Enter the name of %dth day and its corresponding sales: \n",i+1);
        scanf("%9s", s[i].day);
        scanf("%f", &s[i].sales);
    }
}

void high_sales(){
    float highest = s[0].sales;
    int h_day = 0;

    for(int j = 0; j < n; j++){
        if(s[j].sales > highest){
            highest = s[j].sales;
            h_day = j;
        }
    }

    printf("\nThe highest sales was recorded on %s of an amount %.2f",s[h_day].day, highest);
}

void main(){
    input();
    high_sales();

    free(s);

    getch();
}