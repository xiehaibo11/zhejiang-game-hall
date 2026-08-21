
/* cocos2d::EventListenerKeyboard::checkAvailable() */

undefined8 __thiscall cocos2d::EventListenerKeyboard::checkAvailable(EventListenerKeyboard *this)

{
                    /* try { // try from 00fa9390 to 010a9593 has its CatchHandler @ 00fa928c */
  if ((*(long *)(this + 0xc0) == 0) && (*(long *)(this + 0xf0) == 0)) {
    return 0;
  }
  return 1;
}

