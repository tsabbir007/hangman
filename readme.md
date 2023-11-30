# Welcome to Hangman! :pirate_flag:
This console-based Hangman game allows you to guess a word letter by letter. Try to guess the word before the hangman is fully drawn!

## Instructions:
### Game Start:

Run the program.
The game will welcome you and automatically start a new round.
### Game Display:
```
+----+
|    |
     |
     |
     |
     |
========
```
![Alt text](<Screenshot from 2023-11-30 15-25-24.png>)

You will see a representation of the hangman, the current state of the word you're trying to guess, and the number of chances left. **_(initially you have total 6 chances)_**
### Guessing:

Enter a letter as your guess and press Enter.
If the letter is in the word, it will be revealed in the word. Otherwise, a part of the hangman will be drawn.
### Winning:

Keep guessing until you either correctly guess the entire word or run out of chances.
If you correctly guess the word, you win the round.
Losing:

If the hangman is fully drawn before you guess the word, you lose the round.
End of Round:

At the end of each round, you will be informed whether you won or lost.
Press capital 'C' to continue playing or any other key to exit.
### Game Features:
The game randomly selects a word from a predefined list.
The hangman is drawn progressively for each incorrect guess.
The game keeps track of the number of chances left.

#### How to Play Again:
1. If you want to play another round, press capital 'C' when prompted.
2. If you want to exit the game, press any key other than 'C'.
##### Notes:
###### **_The game is case-sensitive, so ensure your letter guesses are in the correct case.The word to guess will be displayed with underscores representing each letter._**

#### Have fun playing Hangman! :tada:

Feel free to modify the code, add more words to the list, or enhance the game features as you see fit. Enjoy guessing words!