
long FUN_010868b0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    lVar2 = FT_MulFix((long)param_2,(long)*(int *)(param_1 + 0x1c));
  }
  else {
    uVar4 = (ulong)*(uint *)(param_1 + 0x24);
    do {
      uVar3 = uVar4;
      if (*(int *)(param_1 + 0x20) - 1 <= uVar3) break;
      uVar4 = uVar3 + 1;
    } while (*(int *)(param_1 + (uVar3 + 1 & 0xffffffff) * 0x20 + 0x38) <= param_2);
    if ((int)uVar3 != 0) {
      piVar6 = (int *)(param_1 + (uVar3 & 0xffffffff) * 0x20 + 0x38);
      do {
        iVar5 = *piVar6;
        if (iVar5 <= param_2) {
          *(int *)(param_1 + 0x24) = (int)uVar3;
          goto LAB_01086970;
        }
        uVar1 = (int)uVar3 - 1;
        uVar3 = (ulong)uVar1;
        piVar6 = piVar6 + -8;
      } while (uVar1 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (param_2 < iVar5) {
      lVar2 = FT_MulFix((long)(param_2 - iVar5),(long)*(int *)(param_1 + 0x1c));
      uVar4 = (ulong)*(int *)(param_1 + 0x3c);
    }
    else {
      uVar3 = 0;
LAB_01086970:
      param_1 = param_1 + (uVar3 & 0xffffffff) * 0x20;
      lVar2 = FT_MulFix((long)(param_2 - iVar5),(long)*(int *)(param_1 + 0x40));
      uVar4 = (ulong)*(uint *)(param_1 + 0x3c);
    }
    lVar2 = lVar2 + uVar4;
  }
  return lVar2;
}

