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
		//g.setColour(Colours::orange);
		//auto& random = Random::getSystemRandom();
		//Range<int>rectRange(20, getWidth() / 2);
		//Rectangle<int>rectArea(	random.nextInt(rectRange), 
		//						random.nextInt(rectRange),
		//						random.nextInt(rectRange),
		//						random.nextInt(rectRange));
		//g.drawRect(rectArea, 2.0f);

		//Rectangle<int>pointArea(10, 10);
		//Point<int>point(random.nextInt(Range<int>(0, getWidth())),
		//				random.nextInt(Range<int>(0, getHeight())));
		//pointArea.setCentre(point);
		//g.setColour(rectArea.contains(point) ? Colours::limegreen : Colours::cornflowerblue);
		//g.fillRect(pointArea);

	//Lines
		//g.setColour(Colours::orange);
		//Line<float>line(Point<float>(10, 10),
		//				Point<float>(50, 50));
		//g.drawLine(line, 2.0f);

	//Random lines with intersection
        //g.setColour(Colours::orange);
        //auto& random = Random::getSystemRandom();
        //Range<int>lineRange(0, getWidth());
        //Array<Line<float>>lines;
        //auto numLines = 10;
        //for (auto i = 0; i < numLines; ++i)
        //{
        //    Line<float>line(random.nextInt(lineRange),
        //                    random.nextInt(lineRange), 
        //                    random.nextInt(lineRange), 
        //                    random.nextInt(lineRange));
        //    lines.add(line);
        //    g.drawLine(line, 2.0f);
        //}

		//g.setColour(Colours::palegreen);
		//Rectangle<float>pointArea(8, 8);
		//for (auto lineI : lines)
		//{
		//	for (auto lineJ : lines)
		//	{
		//		if (lines.indexOf(lineI) != lines.indexOf(lineJ))
		//		{
		//			Point<float>intersection;
		//			if (lineI.intersects(lineJ,intersection))
		//			{
		//				pointArea.setCentre(intersection);
		//				g.fillEllipse(pointArea);
		//			}
		//		}
		//	}
		//}

        //g.setColour(Colours::palegreen);
        //Rectangle<float>pointArea(8, 8);
        //for (auto i = 0; i < lines.size() - 1; ++i)
        //{
        //    for (auto j = i + 1; j < lines.size(); ++j)
        //    {
        //        Point<float>intersection;
        //        if (lines[i].intersects(lines[j], intersection))
        //        {
        //            pointArea.setCentre(intersection);
        //            g.fillEllipse(pointArea);
        //        }
        //    }
        //}
    
    //Offset same sized rectangles
        //Rectangle<int>area(10,10,40,40);
        //auto numSquares = 10;
        //for (auto i = 0; i < numSquares; ++i) {
        //    g.setColour(getRandomColour());
        //    g.fillRect(area);
        //    area.translate(30,30);
        //}
    
    //Offset varying sized rectangles
        //Rectangle<int>area(10,10,40,40);
        //auto& random = Random::getSystemRandom();
        //auto numSquares = 10;
        //for (auto i = 0; i < numSquares; ++i) {
        //    g.setColour(getRandomColour());
        //    g.fillRect(area);
        //    //area.translate(area.getWidth(),area.getHeight());
        //    area += Point<int>(area.getWidth(), area.getHeight());
        //    area.setSize(random.nextInt(Range<int>(20,40)),
        //                 random.nextInt(Range<int>(20,40)));
        //}
    
    Rectangle<int>area(10,10,40,40);
    auto& random = Random::getSystemRandom();
    Range<int>rectRandomRange(20,40);
    auto numSquares = 10;
    for (auto i = 0; i < numSquares; ++i) {
        g.setColour(getRandomColour());
        g.drawRect(area,2.0f);
        g.setColour(getRandomColour());
        auto nextArea = area + Point<int>(random.nextInt(rectRandomRange),
                                          random.nextInt(rectRandomRange));
        g.setColour(getRandomColour());
        g.fillRect(area.getIntersection(nextArea));
        area = nextArea;
    }

}

void MainComponent::resized()
{
}

void MainComponent::mouseDown(const MouseEvent&)
{
	repaint();
}

Colour MainComponent::getRandomColour()
{
    auto& random = Random::getSystemRandom();
    return Colour((uint8)random.nextInt(256),
                  (uint8)random.nextInt(256),
                  (uint8)random.nextInt(256));
}
