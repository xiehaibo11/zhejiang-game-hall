
/* cocos2d::Repeat::clone() const */

void __thiscall cocos2d::Repeat::clone(Repeat *this)

{
  FiniteTimeAction *pFVar1;
  
  pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x68) + 0x18))();
  create(pFVar1,*(uint *)(this + 0x58));
  return;
}

