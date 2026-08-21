
ulong FUN_00e53b30(long param_1,uint *param_2)

{
  ulong uVar1;
  
  if (*param_2 < 0xffff) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      uVar1 = FUN_00e5e40c(param_1,param_2,1);
      return uVar1;
    }
    if (*param_2 != *(uint *)(param_1 + 0x28)) {
      uVar1 = FUN_00e5e770(param_1,param_2,1);
      return uVar1;
    }
    FUN_00e5ed9c(param_1);
    uVar1 = (ulong)*(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x2c) != 0) {
      *param_2 = *(uint *)(param_1 + 0x28);
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

