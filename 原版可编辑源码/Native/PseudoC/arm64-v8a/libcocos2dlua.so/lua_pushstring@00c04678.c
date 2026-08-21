
void lua_pushstring(long param_1,char *param_2)

{
  size_t sVar1;
  ulong uVar2;
  
  if (param_2 == (char *)0x0) {
    **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  else {
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80();
    }
    sVar1 = strlen(param_2);
    uVar2 = FUN_00bfba1c(param_1,param_2,sVar1);
    **(ulong **)(param_1 + 0x28) = uVar2 | 0xfffd800000000000;
  }
  uVar2 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar2;
  if (uVar2 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164(param_1);
  return;
}

