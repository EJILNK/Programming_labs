#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//first task
/* 
int main(){ 
    char input[100]; char prefix[10]; char *word;int found = 0;
    printf("Введите текст: ");
    fgets(input, 100, stdin);
    printf("Введите приставку: ");
    scanf("%s", prefix);

    word = strtok(input, ",");
    
    while (word != NULL){
        if (strncmp(word, prefix, strlen(prefix)) == 0) {
            printf("%s ", word);
            found = 1;
        }
        word = strtok(NULL, ",");
    }
    if (found == 0){
        printf("Слова с данной приставкой не найдены.\n");
    } else {
        printf("\n");
    }
}   
 */
//second task
/* 
int main(){
    char input[1000];char words[100][50];int counts[100] = {0};int wordCount = 0;

    printf("Введите слова, разделенные запятыми: ");
    fgets(input, 1000, stdin);

    char *newwords = strtok(input, ",");
    while(newwords != NULL){
        int found = 0;
        for(int i = 0; i < wordCount; i++){
            if(strcmp(words[i], newwords) == 0){
                counts[i]++;
                found = 1;
                break;
            }
        }
        if(found == 0){
            strcpy(words[wordCount], newwords);
            counts[wordCount] = 1;
            wordCount++;
        }
        newwords = strtok(NULL, ",");
    }
    printf("Количество повторений каждого слова:\n");
    for(int i = 0; i < wordCount; i++){
        printf("%s: %d\n", words[i], counts[i]);
    }
}
 */
//third task
/* 
int main(){
    char input[1000];
    char names[100][50];
    int nameCount = 0;

    printf("Введите фамилии, разделенные запятыми: ");
    fgets(input, 1000, stdin);

    char *newnames = strtok(input, ",");
    while (newnames != NULL){
        strcpy(names[nameCount], newnames);
        nameCount++;
        newnames = strtok(NULL, ",");
    }
    for(int i = 0; i < nameCount - 1; i++){
        for(int j = 0; j < nameCount - 1 - i; j++){
            if(strcmp(names[j], names[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("Отсортированные фамилии:\n");
    for(int i = 0; i < nameCount; i++){
        printf("%s\n", names[i]);
    }
}
 */

