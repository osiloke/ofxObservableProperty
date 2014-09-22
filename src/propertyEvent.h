//
//  propertyEvent.h
//  signage
//  Handles managing a property which can be listened to by other classes
//  Created by Osiloke Emoekpere on 3/20/14.
//
//

#ifndef __signage__propertyEvent__
#define __signage__propertyEvent__
#include "ofMain.h"
#include <iostream>
#include "propertyValue.h"

class PropertyEvent : public ofEventArgs {
public:
    PropertyValue * property;
    PropertyEvent(){};  
    static ofEvent <PropertyEvent> events;
}; 
#endif /* defined(__signage__propertyEvent__) */
