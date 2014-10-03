//
//  boolProperty.h
//  playlistTest
//
//  Created by Osiloke Emoekpere on 8/18/14.
//
//

#ifndef __boolProperty__
#define __boolProperty__

#include <iostream>
#include "ofMain.h"
#include "propertyEvent.h"
#include "propertyValue.h"

class BoolProperty : public PropertyValue{
public:
    BoolProperty():PropertyValue(){};
    BoolProperty(std::string key):PropertyValue(key){};
    BoolProperty(std::string key, bool val):PropertyValue(key){
        this->value = val; 
    };
    void setValue(bool value){
        PropertyValue::setValue();
        this->value = value;
        static PropertyEvent newEvent;
        newEvent.property = this;
        ofNotifyEvent(PropertyEvent::events, newEvent);
    };
};
#endif /* defined(__boolProperty__) */
