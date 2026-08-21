
/* cocos2d::EaseOut::reverse() const */

void __thiscall cocos2d::EaseOut::reverse(EaseOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1,1.0 / *(float *)(this + 0x60));
  return;
}

