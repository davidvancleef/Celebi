#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

void abriraplicativo(char *fala);
void procurarnawiki ();
void escolha();
void pedirordem();

int main (){
  printf ("Celebi: Bom dia, Sr. David.\n");
  escolha();
return 0;
}

void escolha(){
  char fala[50];
  time_t rawtime;
  struct tm * timeinfo;
  int z = 0;
  while (z == 0){
  pedirordem();
  scanf ("%[^\n]s", fala);
  setbuf(stdin, NULL);

  if (strcmp(fala,"Celebi, quantas horas?") == 0 || strcmp(fala,"Celebi, que horas sao?") == 0 || strcmp(fala,"Celebi, horas.") == 0 || strcmp(fala,"Celebi, horario.") == 0){
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ("S%co ", 198);
    if (timeinfo->tm_hour < 10){
    printf ("0%i:", timeinfo->tm_hour);
    }
    else{
    printf ("%0i:", timeinfo->tm_hour);
    }
    if (timeinfo->tm_min < 10){
    printf ("0%i:", timeinfo->tm_min);
    }
    else{
    printf ("%i:", timeinfo->tm_min);
    }
    if (timeinfo->tm_sec < 10){
    printf ("0%i.", timeinfo->tm_sec);
    }
    else{
    printf ("%i.", timeinfo->tm_sec);
    }
    printf ("\n");
  }

  if (strcmp(fala,"Celebi, que dia e hoje?") == 0 || strcmp(fala,"Celebi, em que dia estamos?") == 0 || strcmp(fala,"Celebi, data.") == 0 || strcmp(fala,"Celebi, diga a data.") == 0 || strcmp(fala,"Celebi, data, por favor.") == 0 ) {
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "A data atual %c: ", 130);
    if (timeinfo->tm_mday < 10){
    printf ("0%i/", timeinfo->tm_mday);
    }
    else{
    printf ("%0i/", timeinfo->tm_mday);
    }
    if (timeinfo->tm_mon+1 < 10){
    printf ("0%i/", timeinfo->tm_mon+1);
    }
    else{
    printf ("%i/", timeinfo->tm_mon+1);
    }
    if (timeinfo->tm_year+1900 < 10){
    printf ("0%i. ", timeinfo->tm_year+1900);
    }
    else{
    printf ("%i. ", timeinfo->tm_year+1900);
    }
    printf ("Atualmente s%co ", 198);
    if (timeinfo->tm_hour < 10){
    printf ("0%i:", timeinfo->tm_hour);
    }
    else{
    printf ("%0i:", timeinfo->tm_hour);
    }
    if (timeinfo->tm_min < 10){
    printf ("0%i:", timeinfo->tm_min);
    }
    else{
    printf ("%i:", timeinfo->tm_min);
    }
    if (timeinfo->tm_sec < 10){
    printf ("0%i.", timeinfo->tm_sec);
    }
    else{
    printf ("%i.", timeinfo->tm_sec);
    }
    printf ("\n");
  }

  if (strcmp(fala,"Celebi, internet.") == 0 || strcmp(fala,"Celebi, google.") == 0 || strcmp(fala,"Celebi,internet.") == 0 || strcmp(fala,"Celebi,google.") == 0){
  	system ("start https://www.google.com.br/");
  }

  if (strcmp(fala,"Celebi, wiki.") == 0){
  	procurarnawiki ();
  }

  if (fala[8] >= 'A' && fala[8] <= 'Z'){
    abriraplicativo(fala);
  }

  if (strcmp(fala,"Celebi, encerrar.") == 0){
    printf ("\nDesligando sistema Celebi.\n");
  	exit(0);
    }

  if (strcmp(fala,"Celebi, recompilar.") == 0){
    system ("start C:\\Users\\samug\\Programas\\recompilarcelebi.exe");
    exit (0);
    } 
  }
}

void abriraplicativo(char *fala){
  char acUserName[100];
  DWORD nUserName = sizeof(acUserName);
  GetUserName(acUserName, &nUserName);

  printf ("start C:\\Users\\%s\\Appdata\\Roaming\\Spotify\\Spotify.exe", acUserName);
  if (strcmp(fala,"Celebi, Paladins.") == 0){
  	system ("start steam://rungameid/444090");
  }

  if (strcmp(fala,"Celebi, Spotify.") == 0){
  	system ("start C:\\Users\\samug\\AppData\\Roaming\\Spotify\\Spotify.exe");
  }

  if  (strcmp(fala,"Celebi, Discord.") == 0){
  	system ("start C:\\Users\\samug\\AppData\\Local\\Discord\\Update.exe --processStart Discord.exe");
  }
}

void procurarnawiki(){
    char buscawiki[30];
    char link[70] = "start https://pt.wikipedia.org/wiki/";
    int i = 0;
    int a = 0;
    printf ("\n");
    printf ("Celebi: O que o senhor deseja buscar?\n");
    scanf ("%[^\n]s", buscawiki);
    if (buscawiki[0] >= '0' && buscawiki[0] <= '9' || buscawiki[0] >= 'A' && buscawiki[0] <= 'Z' || buscawiki[0] >= 'a' && buscawiki[0] <= 'z'){
    while (buscawiki[i] != '\0'){
        a++;
        i++;
    }
    for (i = 0; i < a;i++){
        if (buscawiki[i] == ' '){
            buscawiki[i] = '_';
        }
        if (buscawiki[i] == '.'){
            buscawiki[i] = ' ';
        }
    }
    strcat(link, buscawiki);
    system (link);
    setbuf(stdin, NULL);
    }
    else{
    system(link);
    setbuf(stdin, NULL);
    }
}

void pedirordem(){
    int randnumber;
    int randinho;
    srand(time(NULL));
    randnumber = ((rand() % 5) + 1);
    printf ("\n");
    if (randnumber == 1){
    printf ("Celebi: O que faremos?\n");
    }
    else if (randnumber == 2){
    printf ("Celebi: Novas ordens?\n");
    }
    else if (randnumber == 3){
    printf ("Celebi: Alguma ordem, senhor?\n");
    }
    else if (randnumber == 4){
    printf ("Celebi: Em que posso ajudar?\n");
    }
    else if (randnumber == 5){
    printf ("Celebi: Como posso ajudar?\n");
    }
}