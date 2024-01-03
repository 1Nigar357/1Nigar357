# CS50 GAMES
#### Video Demo: https://youtu.be/GJU8d39r0To 
#### Description:

# General Info About The Program

    CS50GAMES is designed to entertain people and it contains two games: hangman and guess the number game. I used to play these two games with my
friends and during my lessons, therefore, I got inspired to make this game center. To play hangman the user has to input 1 and to play the guesss the number game the user has to input 2. I built this system using if else statement and creating a function for each game. At the beginning of each game, the user is provided with instructions and descriptions of the games.

## Hangman

    I made a function called hangman in which I wrote the code for the hangman game. The user has to guess the sentence in 7 tries and can not input
the same characeter more than once. The secret sentence contains letters and numbers. The secret sentence is CS50X is the best cs course ever. Once the user guesses it or runs out of tries, they are given the option to play the other game.

## Guess The Number Game

    I made another function called guessNumber in which I wrote the code for the guess the numver game. The user has infinite number of tries to guess
the number that is chosen by the code with the randint function from random library. If the user inputs a number that is less than the secret number, then the code prints "Guess a greater number". If the user inputs a number that is greater than the secret number, then the code prints "Guess a smaller number". If the user guesses correctly the secret number, then the system outputs the number of tries that they took to guess it. For this, I used a counter. Once the user guesses the correct number, they are given the option to play the other game.