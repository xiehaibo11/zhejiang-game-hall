
/* cocos2d::EaseSineIn::clone() const */

void __thiscall cocos2d::EaseSineIn::clone(EaseSineIn *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
                    /* try { // try from 00ecf3a4 to 00fcf3bb has its CatchHandler @ 00ecf4d0 */
  return;
}

