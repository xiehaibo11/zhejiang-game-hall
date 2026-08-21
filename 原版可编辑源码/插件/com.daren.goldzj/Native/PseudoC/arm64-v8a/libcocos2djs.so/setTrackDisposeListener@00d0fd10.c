
/* spine::SkeletonAnimation::setTrackDisposeListener(spine::TrackEntry*, std::__ndk1::function<void
   (spine::TrackEntry*)> const&) */

void __thiscall
spine::SkeletonAnimation::setTrackDisposeListener
          (SkeletonAnimation *this,TrackEntry *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    puVar3 = operator_new(0x120);
    puVar3[0x21] = 0;
    puVar3[0x20] = 0;
    puVar3[0x23] = 0;
    puVar3[0x22] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)(param_1 + 0x18) = 0;
    TrackEntry::setListener(param_1,trackEntryCallback);
    lVar5 = *(long *)(param_1 + 0x10);
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00d0fdb4;
LAB_00d0fd44:
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
    if (plVar2 != (long *)0x0) goto LAB_00d0fd44;
LAB_00d0fdb4:
    local_50 = (long *)0x0;
  }
  FUN_00c8c388(alStack_70,lVar5 + 0x90);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d0fe0c;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00d0fe0c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

