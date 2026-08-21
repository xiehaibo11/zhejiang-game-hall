
/* spine::SkeletonAnimation::setTrackStartListener(spTrackEntry*, std::__ndk1::function<void
   (spTrackEntry*)> const&) */

void __thiscall
spine::SkeletonAnimation::setTrackStartListener
          (SkeletonAnimation *this,spTrackEntry *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 0x90);
  if (puVar4 == (undefined8 *)0x0) {
                    /* try { // try from 00d4ff7c to 00e4ff83 has its CatchHandler @ 00d5019c */
    puVar4 = operator_new(0x120);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
                    /* try { // try from 00d4ff94 to 00e4ff97 has its CatchHandler @ 00d501bc */
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0x13] = 0;
    puVar4[0x12] = 0;
    puVar4[0x15] = 0;
    puVar4[0x14] = 0;
    puVar4[0x17] = 0;
    puVar4[0x16] = 0;
    puVar4[0x19] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x21] = 0;
    puVar4[0x20] = 0;
    puVar4[0x23] = 0;
    puVar4[0x22] = 0;
    *(undefined8 **)(param_1 + 0x90) = puVar4;
    *(code **)(param_1 + 0x18) = trackEntryCallback;
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00d4ffc4;
LAB_00d4ff58:
    if ((long *)param_2 == plVar2) {
      local_50 = alStack_70;
      (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
    }
  }
  else {
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) goto LAB_00d4ff58;
LAB_00d4ffc4:
    local_50 = (long *)0x0;
  }
  FUN_00d505ec(alStack_70,puVar4);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d5001c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00d5001c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

