#include <raylib.h>
#include <iostream>
#include "simulation.hpp"

int main () {
    Color GREY = {29, 29, 29, 255};
    const int WINDOW_WIDTH = 1000;
    const int WINDOW_HEIGHT = 1000;
    const int CELL_SIZE = 4;
    int FPS = 12;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS); // 12 Times per second at most - 12 FPS is the ceiling
    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);

    // Simulation Loop
    while(WindowShouldClose() == false) {
        // 1. Updating state
        simulation.Update();

        // 2. Drawing
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
    }

    CloseWindow();
}