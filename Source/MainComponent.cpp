/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::darkgrey);

	//Setting values directly
		//g.setColour(Colours::orange);
		//g.fillRect(10, 10, 40, 40);

	//Rectangle
		//g.setColour(Colours::orange);
		//Rectangle <int> area(10, 10, 40, 40);
		//g.fillRect(area);

	//Point
		//g.setColour(Colours::orange);
		//Rectangle <int> area(	Point<int>(10, 50), 
		//						Point<int>(50, 10));
		//g.fillRect(area);

	//Path
		//g.setColour(Colours::orange);
		//Path path;
		//path.startNewSubPath(Point<float>(10, 10));
		//path.lineTo(Point<float>(50, 10));
		//path.lineTo(Point<float>(50, 50));
		//path.lineTo(Point<int>(10, 50).toFloat());
		//path.closeSubPath();
		//g.fillPath(path);

    //Heart
        //g.setColour(Colours::red);
        //Path p;
        //p.startNewSubPath(100, 100);
        //p.lineTo(120, 80);
        //p.lineTo(140, 100);
        //p.lineTo(100, 150);
        //p.lineTo(60, 100);
        //p.lineTo(80, 80);
		//p.closeSubPath();
        //g.fillPath(p);

	//Rectangle to path
		//g.setColour(Colours::orange);
		//Path path;
		//Rectangle<float>area(10, 10, 40, 40);
		//path.addRectangle(area);
		//g.fillPath(path);

	//Random square with inner filled square
		g.setColour(Colours::orange);
		auto& random = Random::getSystemRandom();
		Range<int>rectRange(20, getWidth() / 2);
		Rectangle<int>rectArea(	random.nextInt(rectRange), 
								random.nextInt(rectRange),
								random.nextInt(rectRange),
								random.nextInt(rectRange));
		g.drawRect(rectArea, 2.0f);

		Rectangle<int>pointArea(10, 10);
		Point<int>point(random.nextInt(Range<int>(0, getWidth())),
						random.nextInt(Range<int>(0, getHeight())));
		pointArea.setCentre(point);
		g.setColour(rectArea.contains(point) ? Colours::limegreen : Colours::cornflowerblue);
		g.fillRect(pointArea);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainComponent::mouseDown(const MouseEvent&)
{
	repaint();
}