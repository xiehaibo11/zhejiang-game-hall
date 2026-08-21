
ulong FUN_00a128fc(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x8ca9) != '\0') {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 - 3U < 0xe) {
    *plVar2 = param_1;
  }
  uVar4 = 0;
  switch(iVar1) {
  case 4:
    if (((int)plVar2[0x30] == 2) && (*(char *)((long)plVar2 + 0x3d9) == '\0')) {
      uVar4 = FUN_00a18560(plVar2,param_2,5);
      return uVar4;
    }
    iVar1 = (int)plVar2[0x4d];
    if (iVar1 == -1) {
      uVar4 = 0;
    }
    else {
      *param_2 = iVar1;
      uVar4 = 0x10000;
    }
    uVar3 = (uint)(iVar1 != -1);
    if (*(int *)((long)plVar2 + 0x26c) != -1) {
      param_2[uVar3] = *(int *)((long)plVar2 + 0x26c);
      return (ulong)(1 << (ulong)(uVar3 | 0x10) | (uint)uVar4);
    }
    break;
  case 5:
    *param_2 = (int)plVar2[0x4c];
    uVar3 = 0x10000;
    if ((int)plVar2[0xe2] == 1) {
      uVar3 = 1;
    }
    uVar4 = (ulong)uVar3;
    break;
  case 6:
  case 7:
    uVar4 = FUN_00a29b04(plVar2,param_2,5);
    return uVar4;
  case 9:
  case 10:
    uVar4 = FUN_00a29b1c(plVar2,param_2,5);
    return uVar4;
  case 0xb:
    if (*(code **)(plVar2[0x80] + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a129d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(plVar2[0x80] + 0x50))(plVar2,param_2,5);
      return uVar4;
    }
    return 0;
  case 0xc:
  case 0xd:
  case 0xe:
    uVar4 = FUN_00a32b64(plVar2,param_2,5);
    return uVar4;
  }
  return uVar4;
}

