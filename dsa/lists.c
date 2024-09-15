#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Initialize ncurses
  initscr();                            // Start curses mode
  printw("Hello, NixOS with ncurses!"); // Print message
  refresh();                            // Refresh the screen to show the output
  getch();                              // Wait for user input
  cbreak();                             // Disable line buffering
  keypad(stdscr, TRUE); // Enable reading of function keys (e.g., F1, arrow keys)
  noecho();     // Don't echo() while we do getch
  curs_set(0);  // Hide the cursor

  // Print message
  mvprintw(10, 20, "Hello, ncurses!"); // Print at row 10, column 20
  refresh();                           // Print on the screen

  // Wait for user input
  getch(); // Wait for user input (it will block until a key is pressed)

  // Clean up and end ncurses mode
  endwin(); // End curses mode

  return 0;
}
