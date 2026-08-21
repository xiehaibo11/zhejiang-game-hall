
/* covariant return thunk to cocos2d::Repeat::clone() const */

long __thiscall cocos2d::Repeat::clone(Repeat *this)

{
  long lVar1;
  FiniteTimeAction *pFVar2;
  long lVar3;
  
  pFVar2 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x40) + 0x18))();
  lVar3 = create(pFVar2,*(uint *)(this + 0x30));
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

