
/* cocostudio::ActionNode::runAction() */

void __thiscall cocostudio::ActionNode::runAction(ActionNode *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x40))();
  if ((plVar1 != (long *)0x0) && (*(long *)(this + 0x40) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cd17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x3a8))();
    return;
  }
  return;
}

