
undefined8 FUN_00a20318(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00a18560();
  return uVar1;
}

