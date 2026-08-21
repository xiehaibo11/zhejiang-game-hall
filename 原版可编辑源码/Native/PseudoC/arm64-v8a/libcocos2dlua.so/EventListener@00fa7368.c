
/* cocos2d::EventListener::EventListener() */

void __thiscall cocos2d::EventListener::EventListener(EventListener *this)

{
  Ref::Ref((Ref *)this);
                    /* try { // try from 00fa737c to 010a7387 has its CatchHandler @ 00fa7398 */
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 00fa7388 to 010a73eb has its CatchHandler @ 00fa7308 */
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__EventListener_01723080;
                    /* catch() { ... } // from try @ 00fa737c with catch @ 00fa7398 */
  return;
}

