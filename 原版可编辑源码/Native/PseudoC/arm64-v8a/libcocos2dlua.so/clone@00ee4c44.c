
/* covariant return thunk to cocos2d::TargetedAction::clone() const */

long __thiscall cocos2d::TargetedAction::clone(TargetedAction *this)

{
  long lVar1;
  Node *pNVar2;
  FiniteTimeAction *pFVar3;
  long lVar4;
  
  pNVar2 = *(Node **)(this + 0x38);
  pFVar3 = (FiniteTimeAction *)
           (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30));
  lVar4 = create(pNVar2,pFVar3);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  return lVar1;
}

