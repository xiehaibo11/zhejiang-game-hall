
undefined4 FUN_010a44c0(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010a6650(param_2,param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7));
  return uVar1;
}

