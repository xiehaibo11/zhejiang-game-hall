
/* cocos2d::Node::scheduleUpdate() */

void __thiscall cocos2d::Node::scheduleUpdate(Node *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60;
  Node *pNStack_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_01707838;
  pNStack_58 = this;
  Scheduler::schedulePerFrame
            (*(Scheduler **)(this + 0x1e0),(function *)&local_60,this,0,this[0x1f8] == (Node)0x0);
  if (&local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f26230;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00f26230:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

