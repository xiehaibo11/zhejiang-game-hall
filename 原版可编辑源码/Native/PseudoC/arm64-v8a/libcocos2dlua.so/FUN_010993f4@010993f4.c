
uint FUN_010993f4(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(long *)(param_2 + 8) < *(long *)(param_1 + 8));
  if (*(long *)(param_1 + 8) < *(long *)(param_2 + 8)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

