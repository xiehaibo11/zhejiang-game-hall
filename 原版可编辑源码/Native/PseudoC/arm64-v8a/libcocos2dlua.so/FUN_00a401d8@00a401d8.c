
void FUN_00a401d8(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_2 + 0x470) == '\0') {
    uVar2 = 1;
    cVar1 = *(char *)(param_2 + 0x471);
  }
  else {
    uVar2 = FUN_00a2d1b0(param_1,param_2);
    uVar2 = uVar2 ^ 1;
    cVar1 = *(char *)(param_2 + 0x471);
  }
  if (cVar1 == '\0') {
    uVar3 = 1;
    plVar4 = *(long **)(param_2 + 0x480);
  }
  else {
    uVar3 = FUN_00a2d1e0(param_1,param_2);
    uVar3 = uVar3 ^ 1;
    plVar4 = *(long **)(param_2 + 0x480);
  }
  if (plVar4 != (long *)0x0) {
    for (plVar5 = (long *)*plVar4; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      if (*plVar5 == param_1) {
        FUN_00a4aa5c(plVar4,plVar5,0);
        if ((uVar2 & 1) == 0) {
          FUN_00a2d2d0(param_2);
        }
        break;
      }
    }
  }
  plVar4 = *(long **)(param_2 + 0x478);
  if (plVar4 != (long *)0x0) {
    for (plVar5 = (long *)*plVar4; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      if (*plVar5 == param_1) {
        FUN_00a4aa5c(plVar4,plVar5,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        FUN_00a2cd90(param_2);
        return;
      }
    }
  }
  return;
}

