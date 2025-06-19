# C++ 1024 Game [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A simple terminal-based implementation of the 1024 game in C++.

## Installation & Usage
1. Compile with C++11 support:  
   ```bash
   g++ -std=c++11 project.cpp -o 1024game
   ```
2. Run the executable:  
   ```bash
   ./1024game
   ```

## How to Play
The game starts with a 4x4 grid containing two initial tiles (2 or 4). Use arrow keys to move tiles:
- Tiles slide in the chosen direction
- When two tiles with the same number collide, they merge into one tile with their sum
- After each move, a new tile (2 or 4) appears in an empty spot
- Game ends when you reach 1024 tile or no valid moves remain

## Controls
- Arrow keys: Move tiles
- 'q' key: Quit the game

## Objective
Reach the 1024 tile by merging matching tiles while managing limited grid space.

## License
This project is licensed under the MIT License - see [LICENSE](LICENSE) file for details
