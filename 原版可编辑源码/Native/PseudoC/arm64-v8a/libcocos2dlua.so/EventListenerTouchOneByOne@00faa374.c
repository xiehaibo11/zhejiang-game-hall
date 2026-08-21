
/* cocos2d::EventListenerTouchOneByOne::EventListenerTouchOneByOne() */

void __thiscall
cocos2d::EventListenerTouchOneByOne::EventListenerTouchOneByOne(EventListenerTouchOneByOne *this)

{
  EventListener::EventListener((EventListener *)this);
                    /* catch() { ... } // from try @ 00faa2b4 with catch @ 00faa38c */
                    /* catch() { ... } // from try @ 00faa258 with catch @ 00faa390 */
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x160) = 0;
                    /* catch() { ... } // from try @ 00faa810 with catch @ 00faa3ac */
  *(undefined ***)this = &PTR__EventListenerTouchOneByOne_01723588;
  this[0x178] = (EventListenerTouchOneByOne)0x0;
  return;
}

