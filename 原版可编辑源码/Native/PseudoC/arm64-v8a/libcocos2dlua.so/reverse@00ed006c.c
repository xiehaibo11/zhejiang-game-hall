
/* cocos2d::EaseQuadraticActionIn::reverse() const */

void __thiscall cocos2d::EaseQuadraticActionIn::reverse(EaseQuadraticActionIn *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

