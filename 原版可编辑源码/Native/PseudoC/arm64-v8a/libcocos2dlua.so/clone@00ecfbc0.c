
/* cocos2d::EaseBackIn::clone() const */

void __thiscall cocos2d::EaseBackIn::clone(EaseBackIn *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
  return;
}

