//
//  intProperty.h
//  signage
//
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#ifndef __stringProperty__
#define __stringProperty__

#include <iostream>
#include "ofMain.h"
#include "propertyEvent.h"
#include "propertyValue.h"

    class StringProperty : public PropertyValue{
    public:
        StringProperty():PropertyValue(){};
        StringProperty(std::string key):PropertyValue(key){};
        void setValue(std::string value){
            this->value = value;
            PropertyValue::setValue();
            static PropertyEvent newEvent;
            newEvent.property = this;
            ofNotifyEvent(PropertyEvent::events, newEvent);
        };
    };
#endif /* defined(__stringProperty__) */
