
undefined8 FUN_010aba90(undefined8 param_1,ulong param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  if (*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 7) <= param_3) {
    uVar1 = 0xc0;
  }
  return uVar1;
}

