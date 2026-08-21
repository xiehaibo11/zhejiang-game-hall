
/* cocos2d::EventListenerFocus::checkAvailable() */

bool __thiscall cocos2d::EventListenerFocus::checkAvailable(EventListenerFocus *this)

{
                    /* catch() { ... } // from try @ 00fa9390 with catch @ 00fa928c
                       catch() { ... } // from try @ 00fa95f8 with catch @ 00fa928c
                       catch() { ... } // from try @ 00fa96e8 with catch @ 00fa928c */
  return *(long *)(this + 0xc0) != 0;
}

