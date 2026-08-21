
undefined8 FUN_00c32168(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00c29dd4(param_1,1);
  iVar2 = FUN_00c29cf0(param_1,2);
  uVar1 = iVar2 - 1;
  if (*(byte *)(lVar3 + 0xb) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,2,0x446);
  }
  if (*(char *)(lVar3 + 10) != '\0') {
    *(ulong *)(*(long *)(param_1 + 0x28) + -8) =
         lVar3 + ((long)(int)uVar1 + 6) * 8 | 0xfffe000000000000;
    return 1;
  }
  *(ulong *)(*(long *)(param_1 + 0x28) + -8) =
       *(ulong *)(lVar3 + (long)(int)uVar1 * 8 + 0x28) | 0xfffe000000000000;
  return 1;
}

