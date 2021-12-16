#pragma once 
#include "Functions.h"
void pollEvents(RenderWindow& w)
{
	Event ev;
	while (w.pollEvent(ev))
	{
		switch (ev.type)
		{
		case Event::Closed:
			window.close();
			running = false;
			break;
		case Event::KeyPressed:
			switch (ev.key.code)
			{
			case Keyboard::Escape:
				window.close();
				running = false;
				break;
			}
			break;
		}
	}
}
void draw(RenderWindow& window)
{
	window.clear(); 


	window.display(); 
}



void update()
{
}

void loadTestingData(picArray& arr)
{
}

void loadTrainingData(picArray& arr)
{
}












int main()
{
	// want to load the data first 
	// the training data is 60000 picture of 28x28 by pixels (784)
	picArray trainingData,  testingData; 
	vector<unsigned char> trainingLabels, testingLabels; 
	loadTrainingData(trainingData);
	loadTestingData(testingData); 


	
	
	while (running)
	{
		pollEvents(window);
		update();
		draw(window);
	}


	return 0;
}