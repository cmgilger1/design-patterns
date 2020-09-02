// AbstractFactory

#ifndef WIDGETFACTORY_H_
#define WIDGETFACTORY_H_

#include "Scrollbar.h"
#include "RadioButton.h"

class WidgetFactory 
{
public:
    virtual Scrollbar* CreateScrollbar() = 0;
    virtual RadioButton* CreateRadioButton() = 0;
};

#endif /* WIDGETFACTORY_H_ */