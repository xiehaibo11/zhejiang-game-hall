
/* cocos2d::ReverseTime::ReverseTime() */

void __thiscall cocos2d::ReverseTime::ReverseTime(ReverseTime *this)

{
                    /* catch() { ... } // from try @ 00ee3c44 with catch @ 00ee3ca8 */
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__ReverseTime_016f88d8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8938;
  return;
}

