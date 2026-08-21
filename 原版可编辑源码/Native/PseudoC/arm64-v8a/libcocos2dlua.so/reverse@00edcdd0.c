
/* cocos2d::Sequence::reverse() const */

undefined8 __thiscall cocos2d::Sequence::reverse(Sequence *this)

{
  FiniteTimeAction *pFVar1;
  FiniteTimeAction *pFVar2;
  undefined8 uVar3;
  
  if ((*(long *)(this + 0x58) != 0) && (*(long **)(this + 0x60) != (long *)0x0)) {
    pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x60) + 0x20))();
    pFVar2 = (FiniteTimeAction *)
             (**(code **)(**(long **)(this + 0x58) + 0x20))(*(long **)(this + 0x58));
    uVar3 = createWithTwoActions(pFVar1,pFVar2);
    return uVar3;
  }
  return 0;
}

