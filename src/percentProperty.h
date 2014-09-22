//
//  percentProperty.h
//  signage
//
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#ifndef __signage__percentProperty__
#define __signage__percentProperty__

#include <iostream>
#include "ofMain.h"
#include "propertyEvent.h"
#include "propertyValue.h" 

class PercentProperty : public PropertyValue{
public:
    PercentProperty():PropertyValue(){};
    PercentProperty(std::string key):PropertyValue(key){};
    void setValue(int value){
        this->value = value;
        PropertyValue::setValue();
        static PropertyEvent newEvent;
        newEvent.property = this;
        ofNotifyEvent(PropertyEvent::events, newEvent);
    };
};

#endif /* defined(__signage__percentProperty__) */
