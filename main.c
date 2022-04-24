#include <stdio.h>

int main()
{
  int i=1;
  char category;
  int tempchoice;
  int currencychoice;
  int masschoice;
  float userinputC;
  float userinputF;
  float userinputK;
  float userinputRupToUSD;
  float userinputRupToEur;
  float userinputRupToYen;
  float userinputRupToPou;
  float userinputUSDToRup;
  float userinputUSDToEur;
  float userinputUSDToYen;
  float userinputUSDToPou;
  float userinputOunce;
  float userinputGrams;
  float userinputKilos;
  float CtoF;
  float CtoK;
  float FtoC;
  float FtoK;
  float KtoC;
  float KtoF;
  float RupToUSD;
  float RupToEur;
  float RupToYen;
  float RupToPou;
  float USDToRup;
  float USDToEur;
  float USDToYen;
  float USDToPou;
  float GmToKg;
  float GmToOun;
  float KgToGm;
  float KgToOun;
  float OunToGm;
  float OunToKg;

  printf("Welcome to SRM Unit Convertor\n");
  while(i==1)
    {
      printf("\nHere is a list of convertion to choose from: ");
      printf("Tempurature(T)\tCurrency(C)\tMass(M)\n\n");
      printf("Enter the letter you want to convert: ");
  
      scanf("%c",&category);

      if(category == 'T'||category == 't')
       {
         printf("\n\nWelcome to Tempurature Convertor!\n");
         printf("Here is a list of convertions you can do:\n");
         printf("Enter 1 for Celsius to Fahrenheit\n");
         printf("Enter 2 for Celsius to Kelvin\n");
         printf("Enter 3 for Fahrenheit to Celsius\n");
         printf("Enter 4 for Fahrenheit to Kelvin\n");
         printf("Enter 5 for Kelvin to Celsius\n");
         printf("Enter 6 for kelvin to Fahrenheit\n");
         printf("Enter 7 for exiting program\n\n\n");
         printf("Enter a number from above options: ");

         scanf("%d",&tempchoice);

         switch (tempchoice)
          {
            case 1:
             printf("Enter Tempurature in Celsius: ");
             scanf("%f",&userinputC);
             CtoF=(userinputC*1.8)+32;
             printf("\nFahrenheit: %.2fF\n",CtoF);
             break;

            case 2:
             printf("Enter Tempurature in Celsius: ");
             scanf("%f",&userinputC);
             CtoK=userinputC+273.15;
             printf("\nKelvin: %.2fK\n",CtoK);
             break;

            case 3:
             printf("Enter Tempurature in Fahrenheit: ");
             scanf("%f",&userinputF);
             FtoC=(userinputF-32)/1.8;
             printf("\nCelsius: %.2fC\n",FtoC);
             break;

            case 4:
             printf("Enter Tempurature in Fahrenheit: ");
             scanf("%f",&userinputF);
             FtoK=((double)5/9)*(userinputF+459.67);
             printf("\nKelvin: %.2fK\n",FtoK);
             break;

            case 5:
             printf("Enter Tempurature in Kelvin: ");
             scanf("%f",&userinputK);
             KtoC=userinputK-273.15;
             printf("\nCelsius: %.2fC\n",KtoC);
             break;

            case 6:
             printf("Enter Tempurature in Kelvin: ");
             scanf("%f",&userinputK);
             KtoF=((double)9/5)*(userinputK-273)+32;
             printf("\nFahrenheit: %.2fF\n",KtoF);
             break;

            case 7:
             printf("\nProgram exited successfully\n");
             i=0;
             break;

            default:
             printf("\nInvalid Input. Please try again.\n");
          }
        }

      else if(category == 'C'||category == 'c')
        {
          printf("Welcome to Currency Convertor!\n");
          printf("Here is a list of convertions you can do:\n");
          printf("Enter 1 for converting Ruppee to Doller\n");
          printf("Enter 2 for converting Ruppee to Euros\n");
          printf("Enter 3 for converting Ruppee to Yen\n");
          printf("Enter 4 for converting Ruppee to Pound\n");
          printf("Enter 5 for converting Doller to Ruppee\n");
          printf("Enter 6 for converting Doller to Euros\n");
          printf("Enter 7 for converting Doller to Yen\n");
          printf("Enter 8 for converting Doller to Pound\n");
          printf("Enter 9 for exiting program\n\n\n");
          printf("Enter a number from above options: ");

          scanf("%d",&currencychoice);

          switch (currencychoice)
           {
             case 1:
              printf("Enter Currency in Ruppee: ");
              scanf("%f",&userinputRupToUSD);
              RupToUSD=userinputRupToUSD/76.11;
              printf("\nUSD=$%.2f\n",RupToUSD);
              break;

            case 2:
              printf("Enter Currency in Ruppee: ");
              scanf("%f",&userinputRupToEur);
              RupToEur=userinputRupToEur/83.03;
              printf("\nEuro=â€š%.2f\n",RupToEur);
              break;

            case 3:
              printf("Enter Currency in Ruppee: ");
              scanf("%f",&userinputRupToYen);
              RupToYen=userinputRupToYen*1.65;
              printf("\nYen=Â¥%.2f\n",RupToYen);
              break;

            case 4:
              printf("Enter Currency in Ruppee: ");
              scanf("%f",&userinputRupToPou);
              RupToPou=userinputRupToPou/99.95;
              printf("\nPound=Â£%.2f\n",RupToPou);
              break;

            case 5:
              printf("Enter Currency in Doller: ");
              scanf("%f",&userinputUSDToRup);
              USDToRup=userinputUSDToRup*76.19;
              printf("\nRuppee=â€š%.2f\n",USDToRup);
              break;

            case 6:
              printf("Enter Currency in Doller: ");
              scanf("%f",&userinputUSDToEur);
              USDToEur=userinputUSDToEur*0.9273;
              printf("\nEuro=â€šÂ¬%.2f\n",USDToEur);
              break;

            case 7:
              printf("Enter Currecy in Doller: ");
              scanf("%f",&userinputUSDToYen);
              USDToYen=userinputUSDToYen*125.90;
              printf("\nYen=Â¥%.2f\n",USDToYen);
              break;

            case 8:
              printf("Enter Currency in Doller: ");
              scanf("%f",&userinputUSDToPou);
              USDToPou=userinputUSDToPou*0.77;
              printf("\nPound=Â£%.2f\n",USDToPou);
              break;

            case 9:
              printf("\nProgram exited succesfully\n");
              i=0;
              break;

            default:
              printf("\nInvalid Input. Please try again\n");
          } 
        }
      else if(category=='M'||category=='m')
         {
           printf("Welcome to Currency Convertor!\n");
           printf("Here is a list of convertions you can do:\n");
           printf("Enter 1 for converting Grams to Kilos\n");
           printf("Enter 2 for converting Grams to Ounce\n");
           printf("Enter 3 for converting Kilos to Grams\n");
           printf("Enter 4 for converting Kilos to Ounce\n");
           printf("Enter 5 for converting Ounce to Grams\n");
           printf("Enter 6 for converting Ounce to Kilos\n");
           printf("Enter 7 for exiting program\n\n\n");
           printf("Enter a number from above options: ");

           scanf("%d",&masschoice);
    
           switch (masschoice)
            {
              case 1:
               printf("Enter Mass in Grams: ");
               scanf("%f",&userinputGrams);
               GmToKg=userinputGrams/1000;
               printf("\nkilos= %.2fKg\n",GmToKg);
               break;

              case 2:
               printf("Enter Mass in Grams: ");
               scanf("%f",&userinputGrams);
               GmToOun=userinputGrams*0.035274;
               printf("\nOunce= %.2fOz\n",GmToOun);
               break;

              case 3:
               printf("Enter Mass in Kilos: ");
               scanf("%f",&userinputKilos);
               KgToGm=userinputKilos*1000;
               printf("\nGrams= %.2fGm\n",KgToGm);
               break;

              case 4:
               printf("Enter Mass in Kilos: ");
               scanf("%f",&userinputKilos);
               KgToOun=userinputKilos*35.274;
               printf("\nOunce= %.2fOz\n",KgToOun);
               break;

              case 5:
               printf("Enter Mass in Ounce: ");
               scanf("%f",&userinputOunce);
               OunToGm=userinputOunce*28.3495;
               printf("\nGrams= %.2fGm\n",OunToGm);
               break;

              case 6:
               printf("Enter Mass in Ounce: ");
               scanf("%f",&userinputOunce);
               OunToKg=userinputOunce*0.0283495;
               printf("\nKilos= %.2fKg\n",OunToKg);
               break;

              case 7:
               printf("\nPrograme exited successfully\n");
               i=0;
               break;

              default:
               printf("\nInvalid Input. Please try again\n");
            }
        }
      else 
        printf("Invalid Input. Please try again");
    }
  return 0;
}