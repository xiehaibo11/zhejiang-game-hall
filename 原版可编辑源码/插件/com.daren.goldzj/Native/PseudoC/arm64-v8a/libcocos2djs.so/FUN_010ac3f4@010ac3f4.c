
undefined8 FUN_010ac3f4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = param_2 & 0xffffffff00000000;
  uVar4 = uVar2 | *(uint *)(param_2 + 7);
  if (((*(uint *)(uVar4 + 0x13) & 3) == 2) && ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0)) {
    lVar3 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    lVar5 = 0x1800000000;
    lVar6 = 0x1000000000;
    do {
      iVar1 = *(int *)((lVar6 >> 0x20) + uVar4 + 7);
      if (((iVar1 != *(int *)(uVar2 + 0xa8)) && (iVar1 != *(int *)(uVar2 + 0xa0))) &&
         ((*(uint *)((lVar5 >> 0x20) + uVar4 + 7) >> 1 & 1) != 0)) {
        return 1;
      }
      lVar3 = lVar3 + -1;
      lVar5 = lVar5 + 0xc00000000;
      lVar6 = lVar6 + 0xc00000000;
    } while (lVar3 != 0);
  }
  return 0;
}

