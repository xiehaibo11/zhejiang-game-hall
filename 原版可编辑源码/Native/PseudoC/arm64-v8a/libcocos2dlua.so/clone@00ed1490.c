
/* cocos2d::EaseIn::clone() const */

void __thiscall cocos2d::EaseIn::clone(EaseIn *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1,*(float *)(this + 0x60));
    return;
  }
  return;
}

