

            #include<stdio.h>

            int main(){

            //Que- 2

            // 5
            // 4 5
            // 3 4 5
            // 2 3 4 5
            // 1 2 3 4 5

                    int i,j;

                    for ( i = 5  ; i >=1 ; i--)
                    {
                    for (j = i; j <=5 ;j++)
                    {
                        printf("%d ",j);
                    }
                        printf("\n");
                    }
            }


            int main(){
            //Que-5

            // 1 1 1 1 1
            // 2 2 2 2
            // 3 3 3
            // 4 4
            // 5

                int i,j;

                for ( i = 1; i <= 5 ; i++)
                {
                    for (j  = i ;j <= 5 ; j ++)
                    {
                        printf("%d ",i);
                    }
                    printf("\n");
                }
                
            }


            int main(){

            // 1 0 1 0 1
            // 1 0 1 0
            // 1 0 1
            // 1 0
            // 1

                for (int i = 5; i >= 1; i--)
                {
                    for (int j = 1; j <= i ; j++)
                    {
                        printf("%d ",j%2);
                    }
                    printf("\n");
                }
                
            }


            int main(){

            // A
            // B A
            // C B A
            // D C B A
            // E D C B A

                for (int i = 'A'; i <= 'E' ; i++)
                {
                    for (int j = i; j >='A' ; j--)
                    {
                        printf("%c ",j);
                    }
                    printf("\n");
                }
            }

            int main(){

            // 1
            // 2 3
            // 4 5 6
            // 7 8 9 10
            // 11 12 13 14 15

                    int x=1;

                for (int i = 1; i <= 5 ; i++)
                {
                    for (int j = 1; j <= i ; j++)
                    {
                        printf("%d ",x);
                        x=x+1;
                    }
                        printf("\n");
                }
            }


            // 7.2

            int main(){

            //         5
            //       4 5
            //     3 4 5
            //   2 3 4 5
            // 1 2 3 4 5

                int i,k,j;

                for ( i = 5; i >= 1 ;i--)
                {
                    for (k = i; k > 1 ; k--)
                    {
                        printf("  ");
                    }
                for ( j = i ; j <= 5; j++)
                {
                        printf("%d ",j);
                }
                printf("\n");
                }

            }

            int main(){

                // 1 0 1 0 1
                //   0 1 0 1
                //     1 0 1
                //       0 1
                //         1


                int i,k,j;

                    for ( i = 1; i <= 5;i++)
                {
                        for (k = i; k > 1 ; k--)
                {
                                printf("  ");
                    }
                for ( j = i; j <= 5; j++)
                {
                        printf("%d ",j%2);
                }

                printf("\n");
                }

            }


            int main(){

            // 1 2 3 4 5 5 4 3 2 1
            // 1 2 3 4     4 3 2 1
            // 1 2 3         3 2 1
            // 1 2             2 1
            // 1                 1

                    int i,k,j;
            
                    for ( i = 5; i >= 1;i--)
                {
                
                for ( j = 1; j <= i; j++)
                {
                        printf("%d ",j);
                }
            
                    for (k = 4; k >= i ; k--)
                {
                        printf("    ");
                    }
                for ( j = i; j >= 1; j--)
                {
                        printf("%d ",j);
                }
            
                printf("\n");
                }

            }


            int main(){

        // 1 2 3 4 5  5 4 3 2 1
        // 1 2 3 4      4 3 2 1
        // 1 2 3          3 2 1
        // 1 2              2 1
        // 1                  1
        // 1                  1
        // 1 2              2 1
        // 1 2 3          3 2 1
        // 1 2 3 4      4 3 2 1
        // 1 2 3 4 5  5 4 3 2 1

        int i,k,j;
        
        for ( i = 5; i >= 1;i--)
            {
            
            for ( j = 1; j <= i; j++)
            {
                    printf("%d ",j);
            }
        
             for (k = 4; k >= i ; k--)
            {
                    printf("    ");
                }
            for ( j = i; j >= 1; j--)
            {
                    printf("%d ",j);
            }
        
            printf("\n");
            }
            
         for ( i = 1; i <= 5;i++)
            {
            
            for ( j = 1; j <= i; j++)
            {
                    printf("%d ",j);
            }
        
                for (k = 4; k >= i ; k--)
                {
                    printf("    ");
                }
            for ( j = i; j >= 1; j--)
            {
                    printf("%d ",j);
            }
        
            printf("\n");
            }
            }

            int main(){
        //           1
        //         1 2 1
        //       1 2 3 2 1
        //     1 2 3 4 3 2 1
        //   1 2 3 4 5 4 3 2 1
       int i, j, k;  

    for (i = 1; i <= 5; i++) {
        
        for (j = i; j < 5; j++)
         {
            printf("  ");
        }

        for (k = 1; k <= i; k++)
         {
            printf("%d ", k);
        }

        for (k = i - 1; k >= 1; k--)
         {
            printf("%d ", k);
        }

        printf("\n");
    }

            }