
void FUN_0115ef48(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  *(long *)(param_1 + 0x10) = param_2;
  *(ulong *)(param_1 + 0x18) = param_2 + param_3;
  lVar1 = param_2 + param_3 + -7;
  if (param_3 < 8) {
    lVar1 = param_2;
  }
  *(long *)(param_1 + 0x20) = lVar1;
  return;
}

