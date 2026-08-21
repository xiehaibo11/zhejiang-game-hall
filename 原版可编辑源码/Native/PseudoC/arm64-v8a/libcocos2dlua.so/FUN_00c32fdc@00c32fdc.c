
undefined8 FUN_00c32fdc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *__s;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar2 = **(ulong **)(param_1 + 0x20);
    uVar6 = uVar2 & 0x7fffffffffff;
    iVar5 = (int)((long)uVar2 >> 0x2f);
    if (iVar5 != -8) {
      if ((iVar5 != -9) || (*(char *)((uVar2 & 0x7fffffffffff) + 10) != '\0')) goto LAB_00c33028;
      uVar6 = *(long *)((uVar2 & 0x7fffffffffff) + 0x20) - 0x68;
    }
    uVar1 = FUN_00c29cf0(param_1,2);
    if (*(byte *)(uVar6 + 0x3c) <= uVar1) {
      return 0;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    uVar3 = FUN_00bfc938(uVar6,uVar1);
    __s = (char *)FUN_00bfc938(uVar6,uVar1);
    sVar4 = strlen(__s);
    uVar2 = FUN_00bfba1c(param_1,uVar3,sVar4);
    *(ulong *)(lVar7 + -8) = uVar2 | 0xfffd800000000000;
    return 1;
  }
LAB_00c33028:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

