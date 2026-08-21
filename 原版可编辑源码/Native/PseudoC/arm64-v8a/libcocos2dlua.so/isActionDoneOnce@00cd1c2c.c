
/* cocostudio::ActionNode::isActionDoneOnce() */

undefined8 __thiscall cocostudio::ActionNode::isActionDoneOnce(ActionNode *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cd1c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x40) + 0x28))();
    return uVar1;
  }
  return 1;
}

