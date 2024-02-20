#pragma once
// cosmos_animation.h

#pragma once
#ifndef COSMOS_ANIMATION_H
#define COSMOS_ANIMATION_H

#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <limits>

const int animationDelay = 1000;  // Delay in milliseconds between frames
const int numAnimationFrames = 20; // Number of animation frames

void displayMercuryInfo(int frame);
void displayVenusInfo(int frame);
// Add similar declarations for other display functions

void animateSolarSystem();

void waitForEnter();

#endif // COSMOS_ANIMATION_H
