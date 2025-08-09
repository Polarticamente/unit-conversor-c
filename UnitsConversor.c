//A basic program using logic to converts differents units: Distances, temperatures, time and weigth
// ====== Libraries ======
#include <stdio.h>
#include <math.h>
// ====== Conversion Constants ======
#define KM_MI 0.621371
#define M_FT 3.28084
#define CM_IN 0.393701
#define LB_GR 453.59237
#define KG_LB 2.20462
// ====== Functions ======
void Verifier(int *Option, int min, int max){
    while ((*Option<min) || (*Option>max)){
        printf("\n-- Invalid option, please select a valid option. --\n\n");
        scanf("%i", Option);
    }
}
void AmountVerifier(float *MConversion){
    while (*MConversion < 0){
    printf("--Invalid unit, please use an amount greater than 0.\n");
    scanf("%f", MConversion);
    }  
}
int main(){
    //Variables
    int Option;
    float MConversion;
    float Result;
    float Result2;

    //Process
    //Menu #1 to select the type of unit to convert
    printf("-- Welcome to the units conversor, please selecct an option --\n");
    printf("1. Distance converter.\n2. Temperature converter.\n3. Time converter.\n4. Weigth converter.\n\n");
    scanf("%i", &Option);
    //Verify the answer is a valid option.
    Verifier(&Option, 1, 4);
    switch (Option){
    case 1:
        printf("\n--Distance converter, please selecct an option.--\n");
        printf("1. Kilometers(km) to Miles(mi).\n2. Meters(m) to Feet(ft).\n3. Centimeters(cm) to Inches(in).\n\n");
        scanf("%i", &Option);
        //Bucle that verifies the answer is a valid option
        Verifier(&Option, 1, 3);
        switch (Option)
        {
        case 1:
            printf("\n-- Please input the unit of measurement to convert Km to mi --\n");
            scanf("%f", &MConversion);
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 0.621371;
            printf("The amount of %.2f kilometers are %.2f miles",MConversion,Result);
            break;
        
        case 2:
            printf("\n-- Please input the unit of measurement to convert m to ft --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 3.28084;
            printf("The amount of %.2f meters are %.2f feet",MConversion,Result);
            break;
        case 3:
            printf("\n-- Please input the unit of measurement to convert cm to in --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion / 2.54;
            printf("The amount of %.2f centimeters are %.2f inches",MConversion,Result);
            break;
        }
    break;
    
    case 2:
        printf("\n--Temperature converter, please selecct an option.--\n");
        printf("1. Celsius(°C) to Farenheit(°F).\n2. Farenheit(°F) to Celsius(°C).\n3. Celsius(°C) to Kelvin(°K).\n\n");
        Verifier(&Option,1,2);
        //Bucle that verifies the answer is a valid option
        Verifier(&Option, 1, 2);
        switch (Option)
        {
        case 1:
            printf("\n-- Please input the unit of measurement to convert °C to °F --\n");
            scanf("%f", &MConversion);
            //Operation
            Result = MConversion * 1.8 + 32;
            printf("The amount of °%.2f Celsius are °%.2f Farenheit",MConversion,Result);
            break;
        
        case 2:
            printf("\n-- Please input the unit of measurement to convert °F to °C --\n");
            scanf("%f", &MConversion);
            //Operation
            Result = (MConversion - 32) * 0.5556;
            printf("The amount of °%.2f Farenheit are °%.2f Celsius",MConversion,Result);
            break;
        case 3:
            printf("\n-- Please input the unit of measurement to convert °C to °K --\n");
            scanf("%f", &MConversion);
            //Operation
            Result = MConversion + 273.15;
            printf("The amount of °%.2f Celsius are °%.2f Kelvin",MConversion,Result);
            break;
        }
    break;
    case 3:
        printf("\n--Time converter, please selecct an option.--\n");
        printf("1. Minutes to Hours and Minutes.\n2. Hour to Minutes.\n3. Days to Hours and minutes.\n\n");
        scanf("%i", &Option);
        //Bucle that verifies the answer is a valid option
        Verifier(&Option, 1, 3);
        switch (Option)
        {
        case 1:
            printf("\n-- Please input the unit of measurement to convert Min to Hours and Min --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 60;
            Result2 = fmod(MConversion,60);
            printf("The amount of %.0f Minutes are %.0f Hours and %.0f Minutes",MConversion,Result,Result2);
            break;
        
        case 2:
            printf("\n-- Please input the unit of measurement to convert Hours to Min --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            while (MConversion < 0)
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion / 60;
            printf("The amount of %.2f Hours are %.2f Min",MConversion,Result);
            break;
        case 3:
            printf("\n-- Please input the unit of measurement to convert Days to Hours and Min --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 24 * 60;
            Result = Result / 60;
            Result2 = MConversion * 24 * 60;
            Result2 = fmod(Result2,60);
            printf("The amount of %.1f Days are %.0f Hours and %.0f Minutes",MConversion,Result,Result2);
            break;
        }
    break;
    case 4:
        printf("\n--Weigth converter, please selecct an option.--\n");
        printf("1. Kilograms to Pounds.\n2. Pounds to Grams\n\n");
        Verifier(&Option,1,2);
        switch (Option)
        {
        case 1:
            printf("\n-- Please input the unit of measurement to convert Kg to lb --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 2.20462;
            printf("The amount of %.2f Kilograms are %.2f pounds",MConversion,Result);
            break;
        
        case 2:
            printf("\n-- Please input the unit of measurement to convert lb to gr --\n");
            scanf("%f", &MConversion);
            //Bucle that verifies the answer is greater than 0
            AmountVerifier(&MConversion);
            //Operation
            Result = MConversion * 453.59237;
            printf("The amount of %.2f Pounds are %.2f Grams",MConversion,Result);
            break;
        }
    break;
    }
}
