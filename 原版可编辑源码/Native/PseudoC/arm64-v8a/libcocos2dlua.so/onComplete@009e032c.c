
/* universe::BranchesTask::onComplete() */

void __thiscall universe::BranchesTask::onComplete(BranchesTask *this)

{
  long lVar1;
  long *plVar2;
  BranchesTask local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x70);
  if (plVar2 != (long *)0x0) {
    local_2c[0] = this[0x48];
    (**(code **)(*plVar2 + 0x30))(plVar2,local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

