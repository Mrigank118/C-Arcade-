# Arcade Game Documentation

## Overview

The Arcade Game is a console-based application with multiple mini-games. Each game is implemented in a separate file.

### Files

1. **`main.c`**
   - Entry point for the arcade game.
   - Displays the main menu and redirects to the selected game.

2. **`Game_1.c` (TIC TAC TOE)**
   - Classic TIC TAC TOE game.
   - User plays against the computer.
   - Option to play again or return to the main menu.

3. **`Game_2.c` (High-Low)**
   - Guess the correct number between 1 and 100.
   - Limited lives for guessing.
   - Option to play again or return to the main menu.

4. **`Game_3.c` (Slot Machine)**
   - Simulates a slot machine.
   - Win if all three numbers match.
   - Option to play again or return to the main menu.

5. **`Game_4.c` (Odd-Even)**
   - Choose Odd or Even.
   - User and computer select numbers.
   - Win if the sum is Odd/Even.
   - Option to play again or return to the main menu.

6. **`Game_5.c` (Placeholder for Game 5)**
   - Placeholder for a future game.
   - Rules and details yet to be implemented.

## Functionality

### ASCII Art

- Each game comes with its own ASCII art.
- Use `displayLogoGame_X()` to display the corresponding ASCII art for Game X.

### Playing Games

- Select a game from the main menu.
- Follow on-screen instructions for each game.
- After completing a game, choose to play again or return to the main menu.

### Recommendations

- Ensure all necessary files are present and linked correctly.
- Validate user inputs for robustness.
- Maintain consistency in the user experience.
