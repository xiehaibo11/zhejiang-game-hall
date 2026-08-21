
undefined8 FUN_00c2ab8c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  int local_4;
  
  lVar1 = FUN_00c29e20(param_1,2);
  puVar3 = *(ulong **)(param_1 + 0x20);
  if ((*(ulong **)(param_1 + 0x28) <= puVar3) || ((int)((long)*puVar3 >> 0x2f) != -9)) {
    local_4 = FUN_00c29cf0(param_1,1);
    if (local_4 == 0) {
      *(long *)(param_1 + 0x48) = lVar1;
      return 0;
    }
    lVar2 = FUN_00bfc824(param_1,local_4,&local_4);
    puVar3 = (ulong *)(lVar2 + -8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,1,0x47e);
    }
  }
  uVar4 = *puVar3 & 0x7fffffffffff;
  if (*(char *)(uVar4 + 10) == '\0') {
    *(long *)(uVar4 + 0x10) = lVar1;
    if (((*(byte *)(lVar1 + 8) & 3) != 0) && ((*(byte *)(uVar4 + 8) >> 2 & 1) != 0)) {
      FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10),uVar4,lVar1);
    }
    puVar3 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = uVar4 | 0xfffb800000000000;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x4be);
}

