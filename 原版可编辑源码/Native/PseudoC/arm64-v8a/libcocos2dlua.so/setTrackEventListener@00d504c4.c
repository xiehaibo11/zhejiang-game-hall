
/* spine::SkeletonAnimation::setTrackEventListener(spTrackEntry*, std::__ndk1::function<void
   (spTrackEntry*, spEvent*)> const&) */

void __thiscall
spine::SkeletonAnimation::setTrackEventListener
          (SkeletonAnimation *this,spTrackEntry *param_1,function *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x120);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x20] = 0;
    puVar2[0x23] = 0;
    puVar2[0x22] = 0;
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *(code **)(param_1 + 0x18) = trackEntryCallback;
  }
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar3) {
    local_50 = alStack_70;
                    /* catch() { ... } // from try @ 00d5046c with catch @ 00d50580 */
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_00d50754(alStack_70,puVar2 + 0x1e);
                    /* catch() { ... } // from try @ 00d505dc with catch @ 00d5059c */
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d505bc;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00d505bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00d505d4 to 00e505db has its CatchHandler @ 00d506b4 */
                    /* try { // try from 00d505dc to 00e506cf has its CatchHandler @ 00d5059c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

