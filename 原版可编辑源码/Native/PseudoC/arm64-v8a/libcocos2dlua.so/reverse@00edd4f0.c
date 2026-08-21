
/* cocos2d::Repeat::reverse() const */

void __thiscall cocos2d::Repeat::reverse(Repeat *this)

{
  FiniteTimeAction *pFVar1;
  
  pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x68) + 0x20))();
  create(pFVar1,*(uint *)(this + 0x58));
  return;
}

