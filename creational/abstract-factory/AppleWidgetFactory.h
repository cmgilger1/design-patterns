// ConcreteFactory1

#include "WidgetFactory.h"
#include "AppleScrollbar.h"
#include "AppleRadioButton.h"

class AppleWidgetFactory : public WidgetFactory
{
private:
    Scrollbar* CreateScrollbar()
    {
        Scrollbar* scrollbar(new AppleScrollbar);
        std::cout << "Creating Apple Scrollbar Pointer\n";
        return scrollbar;
    }

    RadioButton* CreateRadioButton()
    {
        RadioButton* radioButton(new AppleRadioButton);
        std::cout << "Creating Apple Radio Button Pointer\n";
        return radioButton;
    }
};