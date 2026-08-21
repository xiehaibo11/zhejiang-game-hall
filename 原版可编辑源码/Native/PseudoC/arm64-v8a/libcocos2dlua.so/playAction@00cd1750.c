
/* cocostudio::ActionNode::playAction() */

void __thiscall cocostudio::ActionNode::playAction(ActionNode *this)

{
  FiniteTimeAction *pFVar1;
  Ref *this_00;
  
  if ((*(long *)(this + 0x48) != 0) &&
     (pFVar1 = *(FiniteTimeAction **)(this + 0x38), pFVar1 != (FiniteTimeAction *)0x0)) {
    if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0x40));
      pFVar1 = *(FiniteTimeAction **)(this + 0x38);
    }
    this_00 = (Ref *)cocos2d::Sequence::create(pFVar1,0);
    *(Ref **)(this + 0x40) = this_00;
    cocos2d::Ref::retain(this_00);
                    /* WARNING: Could not recover jumptable at 0x00cd17a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x50))(this);
    return;
  }
  return;
}

