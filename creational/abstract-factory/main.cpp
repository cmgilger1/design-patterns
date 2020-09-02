#include "WindowsWidgetFactory.h"
#include "AppleWidgetFactory.h"
#include "Scrollbar.h"
#include "RadioButton.h"

void CreateGui(WidgetFactory* factory);

int main()
{
    
    CreateGui(new WindowsWidgetFactory);
    
    CreateGui(new AppleWidgetFactory);
    
    return 0;
}

void CreateGui(WidgetFactory* factory)
{
    Scrollbar* scrollBar;
    RadioButton* radioButton;

    scrollBar = factory->CreateScrollbar();
    scrollBar->Create();
    radioButton = factory->CreateRadioButton();
    radioButton->Create();
}