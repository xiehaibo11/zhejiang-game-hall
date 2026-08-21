
void FUN_015e0ac8(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined1 local_24 [4];
  
  pcVar1 = (char *)(param_1 + 0x30);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  v8::base::Mutex::Lock((Mutex *)(param_1 + 0x158));
  plVar6 = *(long **)(param_1 + 0x180);
  plVar7 = *(long **)(param_1 + 0x188);
  if (plVar6 != plVar7) {
    do {
      local_24[0] = 2;
      plVar4 = (long *)plVar6[4];
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,local_24);
      plVar6 = plVar6 + 6;
    } while (plVar7 != plVar6);
    plVar6 = *(long **)(param_1 + 0x180);
    plVar7 = *(long **)(param_1 + 0x188);
joined_r0x015e0b44:
    if (plVar7 != plVar6) {
      plVar4 = (long *)plVar7[-2];
      plVar7 = plVar7 + -6;
      if (plVar7 != plVar4) goto code_r0x015e0b70;
      pcVar5 = *(code **)(*plVar4 + 0x20);
      goto LAB_015e0b54;
    }
  }
  *(long **)(param_1 + 0x188) = plVar6;
  v8::base::Mutex::Unlock((Mutex *)(param_1 + 0x158));
  return;
code_r0x015e0b70:
  if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
LAB_015e0b54:
    (*pcVar5)();
  }
  goto joined_r0x015e0b44;
}

