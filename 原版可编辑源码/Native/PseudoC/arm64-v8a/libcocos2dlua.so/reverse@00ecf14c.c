
/* cocos2d::EaseExponentialOut::reverse() const */

void __thiscall cocos2d::EaseExponentialOut::reverse(EaseExponentialOut *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseExponentialIn::create(pAVar1);
  return;
}

