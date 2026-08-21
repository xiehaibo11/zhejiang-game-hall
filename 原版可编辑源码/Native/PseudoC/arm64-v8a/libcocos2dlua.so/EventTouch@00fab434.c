
/* cocos2d::EventTouch::EventTouch() */

void __thiscall cocos2d::EventTouch::EventTouch(EventTouch *this)

{
  void *pvVar1;
  
                    /* try { // try from 00fab448 to 010ab453 has its CatchHandler @ 00fab58c */
  Event::Event((Event *)this,0);
                    /* try { // try from 00fab454 to 010ab477 has its CatchHandler @ 00fab3b0 */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__EventTouch_01721fe8;
  pvVar1 = operator_new(0x78);
  *(void **)(this + 0x48) = pvVar1;
  *(void **)(this + 0x40) = pvVar1;
                    /* try { // try from 00fab478 to 010ab483 has its CatchHandler @ 00fab588 */
  *(long *)(this + 0x50) = (long)pvVar1 + 0x78;
                    /* try { // try from 00fab484 to 010ab4a7 has its CatchHandler @ 00fab3b0 */
  return;
}

