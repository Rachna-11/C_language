#include <stdio.h>

int main(){

        float maths , english ,  science , average;
        
        printf("Enter maths marks:",maths);
        scanf("%f",&maths);


        if(maths > 0){
            if(maths < 100){
                 printf("Enter english marks: ");
                   scanf("%f", &english);
                   if(english > 0){
                        if(english < 100){
                            printf("Enter science marks: ");
                               scanf("%f", &science);

                     if (science >= 0) {
                        if (science <= 100) {
                            // Calculate the average if all marks are valid
                            average = (maths + english + science) / 3;
                            printf("The average mark is: %.2f\n", average);
                        } else {
                            printf("Error: Marks for science are out of the valid range (0-100).\n");
                        }
                    } else {
                        printf("Error: Marks for science are out of the valid range (0-100).\n");
                    }

                        }
                        else{
                           printf("Error: Marks for english are out of the valid range (0-100).\n");
                        }

                   }
                   else{
                            printf("Error: Marks for english are out of the valid range (0-100).\n");
                   }
            }
         else{
                printf("Error: Marks for maths are out of the valid range (0-100).\n");
         }
        }
        else{
          printf("Error: Marks for maths are out of the valid range (0-100).\n");
        }

       
}