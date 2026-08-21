
void FUN_010a44a4(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2 & 0xffffffff00000000;
  FUN_010a6554(uVar1,uVar1 | *(uint *)(*param_2 + 7));
  return;
}

