#include "pch.h"
#include "MyWindow.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyWindow::draw(Canvas^ canvas)
{
	Rectangle ^rect = ref new Rectangle();
	rect->Width = this->width;
	rect->Height = this->height;
	rect->RadiusX = 3;
	rect->RadiusY = 3;

	rect->Fill = ref new SolidColorBrush(Windows::UI::Colors::AliceBlue);

	Canvas::SetTop(rect, this->y);
	Canvas::SetLeft(rect, this->x);

	canvas->Children->Append(rect);
}