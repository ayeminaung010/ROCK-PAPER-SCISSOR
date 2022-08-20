#include <stdio.h>
    char playerOne;
    char playerTwo;
    int playerOneAge =0;
    int playerTwoAge =0;

    char playerOneChoose;
    char playerTwoChoose;
    int RoundTime =0;
    int playerOneScore =0;
    int playerTwoScore =0;
    void score(int oneScore,int twoScore);

int main(){
    int playagain = 0;
    //part1
        printf("WELCOME TO OUR GAME...\n");
        printf("ROCK , PAPER and SCISSOR....\n");

        for (int ii=0 ; ii< 20 ; ii++) {
            printf("*");
        }
        printf("\n");

        printf("We are available for now\n");
        printf("You can play mutiplayer with your friend\n");

        printf("Choose player 1 and player 2...\n");

    while (playerOneAge < 18 && playerTwoAge < 18)
    {
            while (playerOneAge < 18 )
        {
            printf("Enter your age for player 1 :");
            scanf("%d",&playerOneAge);

            if (playerOneAge > 17 )
            {
                printf("Enter your first character name for player 1 (eg- mg mg = M) :");
                scanf(" %c",&playerOne);
                printf("Player 1's name is %c\n",playerOne); //playerName
            }else{
                printf("You cannot play the game ,Sorry !! \n");
            }
        }
            

            while (playerTwoAge < 18 )
        {
            printf("Enter your age for player 2 :");
            scanf("%d",&playerTwoAge);

            if (playerTwoAge > 17 )
            {
                printf("Enter your first character name for player 2 (eg- mg mg = M) :");
                scanf(" %c",&playerTwo);
                printf("Player 2's name is %c\n",playerTwo);//playerName
            }else{
                printf("You cannot play the game ,Sorry !! \n");
            }
        }
    }
    for (int ii=0 ; ii< 20 ; ii++) {
        printf("*");
    }
    
    printf("\n");
    //part2
   do{
     printf("Enter your choose (Eg - Rock, Paper and Scissor ) \n");
    printf("Write 'Rock for --> R or r','Paper for --> P or p','Scissor for --> S or s' \n");


    for (int ii=0 ; ii< 20 ; ii++) {
        printf("*");
    }
    
    printf("\n");
    
    while (RoundTime <3){
        printf("Enter your choose for Player 1 : ");
        scanf(" %c",&playerOneChoose);

        printf("Enter your choose for Player 2 : ");
        scanf(" %c",&playerTwoChoose);

        //game data
        if(playerOneChoose == 'R' && playerTwoChoose == 'P' || playerOneChoose == 'r' && playerTwoChoose == 'p'  || playerOneChoose == 'R' && playerTwoChoose == 'p'  || playerOneChoose == 'r' && playerTwoChoose == 'P'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Paper Winn!! \n");
            printf("Player 2 Winner \n");
            
            playerTwoScore+=1; 
            
            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'R' && playerTwoChoose == 'S' || playerOneChoose == 'r' && playerTwoChoose == 's'  || playerOneChoose == 'R' && playerTwoChoose == 's'  || playerOneChoose == 'r' && playerTwoChoose == 's'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Rock Winn!! \n");
            printf("Player 1 Winner \n");
            
            playerOneScore+=1;

            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'P' && playerTwoChoose == 'S' || playerOneChoose == 'p' && playerTwoChoose == 's'  || playerOneChoose == 'P' && playerTwoChoose == 's'  || playerOneChoose == 'p' && playerTwoChoose == 'S'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Scissor Winn!! \n");
            printf("Player 2 Winner \n");
            
            playerTwoScore+=1;

            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'P' && playerTwoChoose == 'R' || playerOneChoose == 'p' && playerTwoChoose == 'r'  || playerOneChoose == 'P' && playerTwoChoose == 'r'  || playerOneChoose == 'p' && playerTwoChoose == 'R'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Paper Winn!! \n");
            printf("Player 1 Winner \n");
            
            playerOneScore+=1;

            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'S' && playerTwoChoose == 'R' || playerOneChoose == 's' && playerTwoChoose == 'r'  || playerOneChoose == 'S' && playerTwoChoose == 'r'  || playerOneChoose == 's' && playerTwoChoose == 'R'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Rock Winn!! \n");
            printf("Player 2 Winner \n");
           
            playerTwoScore+=1;

            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'S' && playerTwoChoose == 'P' || playerOneChoose == 's' && playerTwoChoose == 'p'  || playerOneChoose == 'S' && playerTwoChoose == 'p'  || playerOneChoose == 's' && playerTwoChoose == 'P'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Scissor Winn!! \n");
            printf("Player 1 Winner \n");
            
            playerOneScore+=1;

            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'S' && playerTwoChoose == 'S' || playerOneChoose == 's' && playerTwoChoose == 's'  || playerOneChoose == 'S' && playerTwoChoose == 's'  || playerOneChoose == 's' && playerTwoChoose == 'S'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Draw!! \n");
            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
            
        }else if(playerOneChoose == 'P' && playerTwoChoose == 'P' || playerOneChoose == 'p' && playerTwoChoose == 'p'  || playerOneChoose == 'P' && playerTwoChoose == 'p'  || playerOneChoose == 'p' && playerTwoChoose == 'P'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Draw!! \n");
            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else if(playerOneChoose == 'R' && playerTwoChoose == 'R' || playerOneChoose == 'r' && playerTwoChoose == 'r'  || playerOneChoose == 'R' && playerTwoChoose == 'r'  || playerOneChoose == 'r' && playerTwoChoose == 'R'){
            RoundTime++;

            printf("Round %d \n",RoundTime);
            printf("Draw!! \n");
            
            printf("Player 1 score is %d \n",playerOneScore);
            printf("Player 2 score is %d \n",playerTwoScore);
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }else{
            printf("Please type correctly, i can't read your alien language xD\n");
            for (int ii=0 ; ii< 20 ; ii++) {
                printf("*");
            }
            printf("\n");
        }
        
    }
    score(playerOneScore,playerTwoScore);// fun call

        printf("Do you want to play again? Press 1 to play again :");
        scanf("%d",& playagain);

        if(playagain != 1){
            break;
            
        }else{
            RoundTime =0;
            continue;
        }
        
   }while (playagain = 1);

    printf("Thank You for Playing Our Game, Make with Lovesss");
    return 0;
}
void score(int oneScore,int twoScore){

    if (playerOneScore > playerTwoScore){
        printf("PLayer name @%c is Winner Congrats :3\n",playerOne);
    }else if (playerOneScore < playerTwoScore){
        printf("PLayer name @%c  is Winner Congrats :3\n",playerTwo);
    }else{
        printf("Draw %d = %d \n",oneScore,twoScore);
    }
    for (int ii=0 ; ii< 20 ; ii++) {
        printf("*");
    }
    printf("\n");
}  
