
/* covariant return thunk to cocos2d::Animate::clone() const */

long __thiscall cocos2d::Animate::clone(Animate *this)

{
  long lVar1;
  Animation *pAVar2;
  long lVar3;
  
  pAVar2 = (Animation *)(**(code **)(**(long **)(this + 0x50) + 0x10))();
  lVar3 = create(pAVar2);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

