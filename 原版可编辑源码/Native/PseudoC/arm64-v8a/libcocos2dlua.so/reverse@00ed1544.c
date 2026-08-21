
/* cocos2d::EaseIn::reverse() const */

void __thiscall cocos2d::EaseIn::reverse(EaseIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1,1.0 / *(float *)(this + 0x60));
  return;
}

