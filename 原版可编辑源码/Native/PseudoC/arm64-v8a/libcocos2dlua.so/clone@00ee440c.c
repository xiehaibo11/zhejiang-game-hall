
/* cocos2d::Animate::clone() const */

void __thiscall cocos2d::Animate::clone(Animate *this)

{
  Animation *pAVar1;
  
  pAVar1 = (Animation *)(**(code **)(**(long **)(this + 0x78) + 0x10))();
  create(pAVar1);
  return;
}

