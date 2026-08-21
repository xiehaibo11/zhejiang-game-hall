
undefined8 FUN_00163444(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  switch(*param_4) {
  case 1:
    return 0;
  case 2:
    return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
  default:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSavedRegister",
            "unsupported restore location for register");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  case 4:
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_00163b28(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return *puVar1;
  case 6:
    uVar2 = FUN_00163b28(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return uVar2;
  }
  uVar3 = (uint)*(ulong *)(param_4 + 2);
  switch(uVar3) {
  case 0x1d:
    return *(undefined8 *)(param_2 + 0xe8);
  case 0x1e:
    return *(undefined8 *)(param_2 + 0xf0);
  case 0x22:
    return *(undefined8 *)(param_2 + 0x108);
  case 0xfffffffe:
  case 0x1f:
    return *(undefined8 *)(param_2 + 0xf8);
  case 0xffffffff:
  case 0x20:
    return *(undefined8 *)(param_2 + 0x100);
  }
  if (0x1c < uVar3) {
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
}

