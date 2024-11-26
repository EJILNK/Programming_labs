#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//first

int main(){ 
    char input[10000] = {0}; char prefix[10]; char word[1000];int a = 0;
    printf("Введите текст: ");
    fgets(input, 10000, stdin);
    printf("Введите приставку: ");
    scanf("%s", prefix);

    for (int i = 0; i < strlen(input); i++){
        if (input[i]==',' || i == strlen(input)-1){
            if (strncmp(word, prefix, strlen(prefix))==0){
                printf("%s ", word);
            }
            bzero(word,1000);
            a=0;
            i+=2;  
     
        }
        word[a]=input[i];
        a++;
    }
}  

//second
/* 
int main(){
    char input[10000]; char word[20]; char words[100][100]; int count[1000] = {0}; int wordcounter = 0; int k  = 0;
    printf("Введите строку: ");
    fgets(input, 10000, stdin);

    for (int i = 0; input[i] != '\0'; i++){
        if (input[i + 1] == '\0'){
            int found = 0;
            for (int i = 0; i < wordcounter; i++){
                if (strcmp(words[i], word) == 0){
                    count[i]++; 
                    found = 1;
                    break;
                }
            }
            if (!found){
                strcpy(words[wordcounter], word);
                count[wordcounter] = 1; 
                wordcounter++;
            }
        }

        if (input[i] != ',') {
            word[k++] = input[i];
        } 
        else {
            word[k] = '\0';
            i++;
            int found = 0;
            for (int i = 0; i < wordcounter; i++){
                if (strcmp(words[i], word) == 0){
                    count[i]++; 
                    found = 1;
                    break;
                }
            }
            if (!found){
                strcpy(words[wordcounter], word);
                count[wordcounter] = 1; 
                wordcounter++;
            }
            bzero(word, 20);
            k = 0;
        }
    }
    for (int i = 0; i < wordcounter; i++){
        printf("%s: %d\n", words[i], count[i]);
    }
}
 */
//third //Рязанцев, Болтенко, Бурим, Гулый, Гриценко, Зайцев, Шапорин, Дмитриева
/* 
int main(){
    char mas[100000]; char word[50]; char words[100][100]; int wordcounter = 0; int k  = 0;
    printf("Введите список фамилий через запятую: ");
    fgets(mas, 100000, stdin); 

    for (int i = 0; mas[i] != '\0'; i++){
        if (mas[i + 1] == '\0'){
            strcpy(words[wordcounter++], word);
        }
        if (mas[i] != ','){
            word[k++] = mas[i];
        }
        else {
            word[k] = '\0';
            i++;
            strcpy(words[wordcounter], word);
            wordcounter++;
            bzero(word, 20);
            k = 0;
        }
    }
    for (int i = 0; i < wordcounter - 1; i++){
        for (int j = i + 1; j < wordcounter; j++){
            if (strcmp(words[i], words[j]) > 0){
                char temp[80];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    for (int i = 0; i < wordcounter; i++){
        printf("%s\n", words[i]);
    }
}
 */


