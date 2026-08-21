
undefined8 lua_dump(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
  if ((int)((long)uVar2 >> 0x2f) == -9) {
    uVar2 = uVar2 & 0x7fffffffffff;
    if (*(char *)(uVar2 + 10) == '\0') {
      uVar1 = FUN_00c20c48(param_1,*(long *)(uVar2 + 0x20) + -0x68,param_2,param_3);
      return uVar1;
    }
  }
  return 1;
}

