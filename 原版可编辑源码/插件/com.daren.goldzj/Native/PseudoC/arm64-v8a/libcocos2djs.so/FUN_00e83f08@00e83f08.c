
ulong FUN_00e83f08(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    uVar4 = FT_MulFix((long)param_2,(long)*(int *)(param_1 + 0x1c));
    return uVar4;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x24);
  do {
    uVar5 = uVar4;
    if (*(int *)(param_1 + 0x20) - 1 <= uVar5) break;
    uVar4 = uVar5 + 1;
  } while (*(int *)(param_1 + (uVar5 + 1 & 0xffffffff) * 0x20 + 0x38) <= param_2);
  if ((int)uVar5 != 0) {
    piVar6 = (int *)(param_1 + (uVar5 & 0xffffffff) * 0x20 + 0x38);
    do {
      iVar3 = *piVar6;
      if (iVar3 <= param_2) {
        *(int *)(param_1 + 0x24) = (int)uVar5;
        goto LAB_00e83fbc;
      }
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
      piVar6 = piVar6 + -8;
    } while (uVar2 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_2 < iVar3) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  else {
    uVar5 = 0;
LAB_00e83fbc:
    param_1 = param_1 + (uVar5 & 0xffffffff) * 0x20;
    iVar1 = *(int *)(param_1 + 0x40);
  }
  iVar3 = FT_MulFix((long)(param_2 - iVar3),(long)iVar1);
  return (ulong)(uint)(*(int *)(param_1 + 0x3c) + iVar3);
}

