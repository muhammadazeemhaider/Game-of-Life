#pragma once
#include <grid.hpp>

class Simulation
{
    public:
        Simulation(int width, int height, int cellSize)
        : grid(width, height, cellSize), tempGrid(width, height, cellSize) {grid.FillRandom();};
        void Draw();
        void setCellValue(int row, int column, int value);
        int CountLiveNeighbors(int row, int column);
        void Update();
    private:
        Grid grid;
        Grid tempGrid;
};