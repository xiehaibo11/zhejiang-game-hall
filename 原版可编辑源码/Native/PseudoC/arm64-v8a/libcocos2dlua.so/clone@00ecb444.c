
/* cocos2d::Speed::clone() const */

void __thiscall cocos2d::Speed::clone(Speed *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x50) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x50) + 0x18))();
    create(pAVar1,*(float *)(this + 0x4c));
    return;
  }
  return;
}

