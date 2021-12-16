#pragma once
#include <SFML/Graphics.hpp>
#include <NeuralNetwork.h>
#include <iostream>

using namespace sf; 
using namespace std; 
typedef vector<vector<unsigned char>> picArray; 
unsigned width =280, height =280;  // this is going to be the image size
const int testNum = 10000, trainingNum = 60000, picSize = 784; 
RenderWindow window(VideoMode(width, height	),"Digit Classifier	"); 
//Net nn({784,16,16,10}); // the result of this array is going to be an array with index of the highest value being the guess
bool running = true; 
void draw(RenderWindow& w); 
void pollEvents(RenderWindow &w);
void update(); 
void loadTestingData(picArray &arr); 
void loadTrainingData(picArray &arr); // this method is probably going to return an array of byte arrays, an array of the image s
void train(); // this is going to train the network on the training data
void test(); // this is going to train the data with some of the testing dataset 



