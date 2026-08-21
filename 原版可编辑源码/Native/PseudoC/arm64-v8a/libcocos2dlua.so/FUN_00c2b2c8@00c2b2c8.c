
undefined8 FUN_00c2b2c8(long param_1)

{
  undefined4 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar2 = *(ulong **)(param_1 + 0x20);
  puVar5 = *(ulong **)(param_1 + 0x28);
  if ((puVar5 <= puVar2) || ((int)((long)*puVar2 >> 0x2f) != -9)) {
    uVar1 = FUN_00c29da0(param_1,1,1);
    lVar3 = FUN_00bfc824(param_1,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,1,0x47e);
    }
    puVar5 = *(ulong **)(param_1 + 0x28);
    puVar2 = (ulong *)(lVar3 - 8);
  }
  uVar4 = *puVar2;
  *(ulong **)(param_1 + 0x28) = puVar5 + 1;
  if (*(char *)((uVar4 & 0x7fffffffffff) + 10) != '\0') {
    *puVar5 = *(ulong *)(param_1 + 0x48) | 0xfffa000000000000;
    return 1;
  }
  *puVar5 = *(ulong *)((uVar4 & 0x7fffffffffff) + 0x10) | 0xfffa000000000000;
  return 1;
}

