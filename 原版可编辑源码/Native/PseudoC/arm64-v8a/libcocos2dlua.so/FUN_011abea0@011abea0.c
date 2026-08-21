
ulong FUN_011abea0(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x340);
  FUN_011a2d5c(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (*(int *)(param_1 + 0x348) != -1) {
    FUN_011a37d8(param_1,param_1 + 0x308,1);
    FUN_011a2d5c(*(undefined4 *)(param_1 + 0x348));
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  }
  iVar1 = FUN_011ae164(0x80000);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    if (((*piVar2 != 0x26) && (*piVar2 != 0x16)) || (iVar1 = FUN_011ae140(0x100), iVar1 == -1)) {
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x340) = 0;
      if (*piVar2 != 0) {
        return (ulong)(uint)-*piVar2;
      }
      goto LAB_011abf50;
    }
    FUN_011a2cfc(iVar1,1);
  }
  *(int *)(param_1 + 0x40) = iVar1;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x340) = 0;
LAB_011abf50:
  uVar3 = FUN_011ad1f4(param_1,uVar4);
  return uVar3;
}

