//
//  intProperty.cpp
//  signage
//
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#include "intProperty.h"

void IntProperty::setValue(int value){
    PropertyValue::setValue();
    this->value = value;
    static PropertyEvent newEvent;
    newEvent.property = this;
    ofNotifyEvent(PropertyEvent::events, newEvent);
};