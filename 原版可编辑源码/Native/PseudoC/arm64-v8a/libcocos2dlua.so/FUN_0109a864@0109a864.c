
ulong FUN_0109a864(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0x30) < 0xffffffff) {
    if ((*(char *)(param_1 + 0x28) == '\0') || (*(ulong *)(param_1 + 0x30) != (ulong)*param_2)) {
      uVar2 = FUN_0109c5a0(param_1,param_2,1);
      return uVar2;
    }
    FUN_0109c6b8(param_1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x38);
      if (uVar1 == 0) {
        return 0;
      }
      *param_2 = (uint)*(undefined8 *)(param_1 + 0x30);
      return (ulong)uVar1;
    }
  }
  return 0;
}

