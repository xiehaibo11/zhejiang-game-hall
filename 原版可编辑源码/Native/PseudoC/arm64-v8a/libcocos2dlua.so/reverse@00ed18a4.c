
/* cocos2d::EaseInOut::reverse() const */

void __thiscall cocos2d::EaseInOut::reverse(EaseInOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1,1.0 / *(float *)(this + 0x60));
  return;
}

