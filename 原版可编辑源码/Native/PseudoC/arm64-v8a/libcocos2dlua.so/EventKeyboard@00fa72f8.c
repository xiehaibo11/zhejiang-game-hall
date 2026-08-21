
/* cocos2d::EventKeyboard::EventKeyboard(cocos2d::EventKeyboard::KeyCode, bool) */

void __thiscall
cocos2d::EventKeyboard::EventKeyboard(EventKeyboard *this,undefined4 param_2,byte param_3)

{
                    /* catch() { ... } // from try @ 00fa7388 with catch @ 00fa7308 */
  Event::Event((Event *)this,1);
  *(undefined4 *)(this + 0x38) = param_2;
                    /* try { // try from 00fa7328 to 010a734b has its CatchHandler @ 00fa73d8 */
  this[0x3c] = (EventKeyboard)(param_3 & 1);
  *(undefined ***)this = &PTR__Event_01723048;
  return;
}

