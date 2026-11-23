// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 11/23/26
// This program prints all possible colors from RGB(0,0,0) -> RGB(2,2,2)

#include<iostream>

int main() {
    for (int red = 0; red < 3; red += 1) {
        for (int green = 0; green < 3; green += 1) {
            for (int blue = 0; blue < 3; blue += 1) {
                // Print the current RGB Color
                std::cout
                << "RGB: ("
                << red << ","
                << green << ","
                << blue << ")\n";
            }
        }
    }
}
