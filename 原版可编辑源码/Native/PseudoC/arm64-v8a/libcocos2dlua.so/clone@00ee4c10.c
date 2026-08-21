
/* cocos2d::TargetedAction::clone() const */

void __thiscall cocos2d::TargetedAction::clone(TargetedAction *this)

{
  Node *pNVar1;
  FiniteTimeAction *pFVar2;
  
  pNVar1 = *(Node **)(this + 0x60);
  pFVar2 = (FiniteTimeAction *)
           (**(code **)(**(long **)(this + 0x58) + 0x18))(*(long **)(this + 0x58));
  create(pNVar1,pFVar2);
  return;
}

