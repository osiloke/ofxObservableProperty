//
//  propertyValue.h
//  signage
//
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#ifndef __signage__propertyValue__
#define __signage__propertyValue__

#include <iostream>
#include "json/json.h"
#include "ofEvents.h"

class PropertyValue{
protected:
    Json::Value _value;
    Json::Value value;
public:
    ofEvent <PropertyValue> onChange;
    std::string key;
    PropertyValue(){};
    PropertyValue(std::string key):key(key){};
    virtual Json::Value getValue(){
        return value;
    };
    virtual Json::Value getLastValue(){
        return _value;
    };
    virtual void setValue(){
        _value = value;
        ofNotifyEvent(onChange, *this, this);
    };
}; 
#endif /* defined(__signage__propertyValue__) */
