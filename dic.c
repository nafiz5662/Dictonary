#include<stdio.h>
#include<string.h>
void search_word(char ch[]);
void insert_word(char ch[], char mean[]);
void full_dictionary();
char words[][2][40] = {"access","Entry",
        "accept","take in",
        "go","move",
        "come","arrive",
        "power","strength",
        "",""
        };
int row = 5, col = 5;
int main(){
    int choice;
    char word[50], meaning[50], c = 'n', dump;
    while(c == 'n' || c == 'N'){
        printf("       DICTIONARY       \n");
        printf("Options:\n");
        printf("\t1.Search word\n\t2.Insert word\n\t3.Print full dictionary\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice == 1){
            printf("Enter the word to be searched: ");
            scanf("%s",&word);
            search_word(word);
        }
        else if(choice == 2){
            printf("Enter the word to be inserted: ");
            scanf("%s",words[row][0]);
            row++;
            printf("Enter the meaning of the word: ");
            scanf("%s",words[col][1]);
            col++;
        }
        else if(choice == 3){
            full_dictionary();
        }
        else{
                printf("Invalid choice.\n");
        }
        printf("Do you want to exit?(y/n): ");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    return 0;
}
void search_word(char ch[]){
    int i = 0;
    while(strcmp(words[i][0],"")){
        if(!strcmp(ch,words[i][0])){
            printf("\nManing of %s is %s\n\n",ch, words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0],""))
        printf("\nNot in Dictionary\n\n");
}

void full_dictionary(){
    int i, j;
    printf("Words     Meaning\n");
    printf("-----     -------\n");
    for(i=0; i<row; i++){
        printf("%s      %s\n",words[i][0],words[i][1]);
    }
}
