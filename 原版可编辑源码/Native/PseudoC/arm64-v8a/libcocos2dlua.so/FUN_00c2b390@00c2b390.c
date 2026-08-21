
undefined8 FUN_00c2b390(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  
  puVar3 = *(ulong **)(param_1 + 0x20);
  if ((*(ulong **)(param_1 + 0x28) <= puVar3) || ((int)((long)*puVar3 >> 0x2f) != -7)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0x236);
  }
  uVar1 = *puVar3 & 0x7fffffffffff;
  uVar2 = 0x4f2;
  if (*(long *)(uVar1 + 0x50) == 0) {
    uVar2 = 0x512;
    if ((*(byte *)(uVar1 + 0xb) < 2) &&
       ((*(byte *)(uVar1 + 0xb) != 0 || (*(long *)(uVar1 + 0x28) != *(long *)(uVar1 + 0x20))))) {
      FUN_00bfe0e0(uVar1,(ulong)((long)*(ulong **)(param_1 + 0x28) - (long)puVar3) >> 3);
      return 0;
    }
  }
  puVar3[-2] = 0xffff7fffffffffff;
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = FUN_00bfab64(param_1,uVar2);
  *(ulong *)(lVar4 + -8) = uVar1 | 0xfffd800000000000;
  return 3;
}

