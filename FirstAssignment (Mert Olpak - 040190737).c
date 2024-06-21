#include <stdio.h>
#include <stdlib.h>

one_dice (); //function protoype of first exp.
two_dice (); //function protoype of second exp.



int main(){
    int choice;
    printf("Please enter 1 for one dice 2 for two dice");
    scanf("%d", &choice);
        if(choice == 1){
            one_dice();
        } else if (choice == 2){
            two_dice();
        } else {
            printf("invalid number");
        }
    return 0;
}
//EXPERIMENT 1

one_dice(){
//Frequency of every different possibilities defined as integers

    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;
    int roll;
    int face;

//Used random fuction in for loop in order to simulate one thousand rolls

    for(roll = 1; roll <= 10000; roll++){
        face = 1 + rand() %6;

//Used different switches for every different possibilities
//Every case adds "1" to its own possibility it is responsible of

        switch (face){

            case 1:
                frequency1 ++;
                break;

            case 2:
                frequency2 ++;
                break;

            case 3:
                frequency3 ++;
                break;

            case 4:
                frequency4 ++;
                break;

            case 5:
                frequency5 ++;
                break;

            case 6:
                frequency6 ++;
                break;

    }
}

//I have chosen scale factor "X" as 278 for this experiment

    frequency1 /= 278;
    frequency2 /= 278;
    frequency3 /= 278;
    frequency4 /= 278;
    frequency5 /= 278;
    frequency6 /= 278;

//Defined an array containing all scaled frequency values

    int all_frequency[6] = {frequency1,frequency2,frequency3,frequency4,frequency5,frequency6};

//Outer for loop repeats for 15 times and every time decreasing value of "i"
/*Inner for loop starts from frequency1, ends up at frequency6 for every repeat of outer loop and checks if the scaled frequency value is
equal to or bigger than the present value of "i"; if it is puts a "*" there, else puts a space character there*/

    for(int i = 6; i > 0; i--){
      for(int j = 0; j < 6; j++){
        if(all_frequency[j] >= i){
          printf("* ");
        }
        else printf("  ");
      }
      printf("\n");
    }
        for(int i = 1; i <= 6; i++) printf("%d ",i);


printf("\n\n\n\n");

return;
}


//EXPERIMENT 2

two_dice(){
//Frequency of every different possibilities defined as integers

    int Frequency2 = 0;
    int Frequency3 = 0;
    int Frequency4 = 0;
    int Frequency5 = 0;
    int Frequency6 = 0;
    int Frequency7 = 0;
    int Frequency8 = 0;
    int Frequency9 = 0;
    int Frequency10 = 0;
    int Frequency11 = 0;
    int Frequency12 = 0;
    int Roll;
    int Face1;
    int Face2;
    int Sum_of_faces;

//Used random function in for loop in order to simulate one thousand rolls
        for(Roll = 1; Roll <= 10000; Roll++){
        Face1 = 1 + rand() %6;
        Face2 = 1 + rand() %6;
        Sum_of_faces = Face1 + Face2;

//Used different switches for every different possibilities
//Every case adds "1" to its own possibility it is responsible of
        switch (Sum_of_faces){

            case 2:
                Frequency2 ++;
                break;

            case 3:
                Frequency3 ++;
                break;

            case 4:
                Frequency4 ++;
                break;

            case 5:
                Frequency5 ++;
                break;

            case 6:
                Frequency6 ++;
                break;

            case 7:
                Frequency7 ++;
                break;

            case 8:
                Frequency8 ++;
                break;

            case 9:
                Frequency9 ++;
                break;

            case 10:
                Frequency10 ++;
                break;

            case 11:
                Frequency11 ++;
                break;

            case 12:
                Frequency12 ++;
                break;

    }
}

//I have chosen scale factor "X" as 110 for this experiment
    Frequency2 /= 110;
    Frequency3 /= 110;
    Frequency4 /= 110;
    Frequency5 /= 110;
    Frequency6 /= 110;
    Frequency7 /= 110;
    Frequency8 /= 110;
    Frequency9 /= 110;
    Frequency10 /= 110;
    Frequency11 /= 110;
    Frequency12 /= 110;

//Defined an array containing all scaled frequency values

    int All_frequency[11] = {Frequency2,Frequency3,Frequency4,Frequency5,Frequency6,Frequency7,Frequency8,Frequency9,Frequency10,Frequency11,Frequency12};

//Outer for loop repeats for 15 times and every time decreasing value of "i"
/*Inner for loop starts from Frequency2, ends up at Frequency12 for every repeat of outer loop and checks if the scaled frequency value is
equal to or bigger than the present value of "i"; if it is puts a "*" there, else puts a space character there*/

    for(int i = 15; i > 0; i--){
      for(int t = 0; t < 11; t++){
        if(All_frequency[t] >= i){
          printf("* ");
        }
        else printf("  ");
      }
      printf("\n");
    }

        for(int a = 2; a <= 12; a++){
                printf("%d ",a);
        }

    return;
}


