#include <stdio.h>
#include <stdlib.h>
#include "mesure.h"

/*
oxy mesureTest(char* filename){

}
*/

double mesureRatio(absorp valeur, double* maxr, double* maxir, double* minr, double* minir){
  double ratio;
  ratio = ((*maxr - *minr)/valeur.dcr)*(valeur.dcir/(*maxir-*minir));
  return ratio;
}

float mesurespo2(double ratio){
  float spo2;
  if (ratio >= 0.4 && ratio <= 1)
    spo2 = -25*ratio + 110;
  else if (ratio >1 && ratio <= 3.4)
    spo2 = -(100/3)*ratio + (350/3);
  else
    printf("Erreur\n");
  return spo2;
}


void lecture_fichier(){
/*  int tableau;
  tableau = malloc (sizeof(int));
  double valeur;
  int colonne;
  while (valeur != null)
  {


    *pointeur ++;
  }
}
*/
  FILE* fichier = NULL;
  int valeur2;int valeur3;int valeur4;int valeur5,i;
  int valeur1;
  //fichier = fopen ("record1_iir.dat", "r");
  //printf(record1_iir.dat);
  fscanf(fichier, "%d,%d,%d,%d,%d", &valeur1, &valeur2, &valeur3, &valeur4, &valeur5);
  fgetc(fichier);
  printf("valeur 1 : %d\n valeur 2 : %d\n valeur 3 : %d\n valeur 3 : %d\n valeur 4 : %d\n", valeur1, valeur2, valeur3, valeur4,valeur5);
  int** tableau = malloc (10* sizeof (int *));
  for (i=0; i<10; i++)
  {
    tableau[i] = malloc (10 * sizeof (int));
  }
  printf("premiere case du teableau : %d", tableau[0][0]);

}

int main(int argc, char const *argv[]) {
  absorp Newabsorp;
  Newabsorp.dcr = 1;
  Newabsorp.dcir = 1;
  double valeur1 = 2.0;
  maxr = &valeur1;
  double valeur2 = 1.0;
  maxir = &valeur2;
  double valeur3 = 0.0;
  minr = &valeur3;
  double valeur4 = 0.0;
  minir = &valeur4;


  double ratio = mesureRatio(Newabsorp, maxr, maxir, minr, minir);
  printf("ratio : %f\n", ratio);
  double spo2 = mesurespo2(ratio);
  printf("spo2 : %f\n", spo2);

  lecture_fichier();
  return 0;
}
