
/* cocos2d::Node::scheduleUpdateWithPriorityLua(int, int) */

void __thiscall cocos2d::Node::scheduleUpdateWithPriorityLua(Node *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined **local_70;
  Node *pNStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Scheduler::unscheduleUpdate(*(Scheduler **)(this + 0x1e0),this);
  if (*(int *)(this + 0x204) != 0) {
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x50))((long *)*puVar2,*(undefined4 *)(this + 0x204));
    *(undefined4 *)(this + 0x204) = 0;
  }
  *(int *)(this + 0x204) = param_1;
  local_70 = &PTR_FUN_01707838;
  pNStack_68 = this;
  local_50 = (long *)&local_70;
  Scheduler::schedulePerFrame
            (*(Scheduler **)(this + 0x1e0),(function *)&local_70,this,param_2,
             this[0x1f8] == (Node)0x0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f26424;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f26424:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

