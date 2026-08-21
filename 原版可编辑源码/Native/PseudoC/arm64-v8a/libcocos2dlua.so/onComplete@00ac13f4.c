
/* fairygui::GTweener::onComplete(std::__ndk1::function<void ()>) */

GTweener * __thiscall fairygui::GTweener::onComplete(GTweener *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00ac138c with catch @ 00ac1424 */
    if (param_2 == plVar2) {
                    /* catch() { ... } // from try @ 00ac1358 with catch @ 00ac1458 */
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
    }
    else {
                    /* catch() { ... } // from try @ 00ac13a4 with catch @ 00ac1428 */
      local_50 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  FUN_008820fc(alStack_70,this + 0x180);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00ac149c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00ac149c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

