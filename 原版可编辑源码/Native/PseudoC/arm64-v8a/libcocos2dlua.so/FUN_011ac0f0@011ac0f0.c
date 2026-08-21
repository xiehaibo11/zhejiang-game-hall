
ulong FUN_011ac0f0(long param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 1;
  local_28 = 0xffffffffffffffff;
  iVar1 = FUN_011ae184(*(undefined4 *)(param_1 + 0x40),1,param_2,local_30);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if ((iVar1 != 0x11) && (iVar1 != 0)) {
      return (ulong)(uint)-iVar1;
    }
  }
  uVar3 = FUN_011ae184(*(undefined4 *)(param_1 + 0x40),2,param_2,local_30);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

