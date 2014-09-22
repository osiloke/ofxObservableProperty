//
//  intProperty.h
//  signage
//
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#ifndef __signage__intProperty__
#define __signage__intProperty__

#include <iostream>
#include "ofMain.h"
#include "propertyEvent.h"
#include "propertyValue.h"

class IntProperty : public PropertyValue{ 
public:
    IntProperty():PropertyValue(){};
    IntProperty(std::string key):PropertyValue(key){}; 
    void setValue(int value); 
};
#endif /* defined(__signage__intProperty__) */
