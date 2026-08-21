
/* cocos2d::EventListenerTouchAllAtOnce::EventListenerTouchAllAtOnce() */

void __thiscall
cocos2d::EventListenerTouchAllAtOnce::EventListenerTouchAllAtOnce(EventListenerTouchAllAtOnce *this)

{
                    /* catch() { ... } // from try @ 00faaa90 with catch @ 00faaab0 */
  EventListener::EventListener((EventListener *)this);
  *(undefined8 *)(this + 0xc0) = 0;
                    /* try { // try from 00faaac4 to 010aaadb has its CatchHandler @ 00faaac4
                       catch() { ... } // from try @ 00faaac4 with catch @ 00faaac4
                       catch() { ... } // from try @ 00faaae4 with catch @ 00faaac4 */
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR__EventListenerTouchAllAtOnce_017235b8;
  *(undefined8 *)(this + 0x150) = 0;
                    /* try { // try from 00faaadc to 010aaae3 has its CatchHandler @ 00faaafc */
  return;
}

