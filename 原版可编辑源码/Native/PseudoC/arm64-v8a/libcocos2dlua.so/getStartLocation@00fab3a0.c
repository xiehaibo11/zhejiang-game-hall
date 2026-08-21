
/* cocos2d::EventMouse::getStartLocation() const */

void __thiscall cocos2d::EventMouse::getStartLocation(EventMouse *this)

{
  Director *this_00;
  
                    /* try { // try from 00fab3b0 to 010ab417 has its CatchHandler @ 00fab3b0
                       catch() { ... } // from try @ 00fab3b0 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab424 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab454 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab484 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab4b4 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab4f8 with catch @ 00fab3b0
                       catch() { ... } // from try @ 00fab54c with catch @ 00fab3b0 */
  this_00 = (Director *)Director::getInstance();
  Director::convertToGL(this_00,this + 0x54);
  return;
}

