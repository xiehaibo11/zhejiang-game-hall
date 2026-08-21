
long lua_upvalueid(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1 & 0x7fffffffffff;
  if (*(char *)(uVar2 + 10) != '\0') {
    return uVar2 + ((long)(param_3 + -1) + 6) * 8;
  }
  return *(long *)(uVar2 + (long)(param_3 + -1) * 8 + 0x28);
}

