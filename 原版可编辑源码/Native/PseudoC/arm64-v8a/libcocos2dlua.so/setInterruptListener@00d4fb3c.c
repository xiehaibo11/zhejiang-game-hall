
/* spine::SkeletonAnimation::setInterruptListener(std::__ndk1::function<void (spTrackEntry*)>
   const&) */

void __thiscall
spine::SkeletonAnimation::setInterruptListener(SkeletonAnimation *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_00d505ec(alStack_60,this + 0x3f0);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00d4fbe0;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
                    /* catch() { ... } // from try @ 00d4fa20 with catch @ 00d4fbdc */
  (*pcVar3)();
LAB_00d4fbe0:
                    /* catch() { ... } // from try @ 00d4f9dc with catch @ 00d4fbe0 */
                    /* catch() { ... } // from try @ 00d4f988 with catch @ 00d4fbe4 */
                    /* catch() { ... } // from try @ 00d4f8b8 with catch @ 00d4fbe8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

