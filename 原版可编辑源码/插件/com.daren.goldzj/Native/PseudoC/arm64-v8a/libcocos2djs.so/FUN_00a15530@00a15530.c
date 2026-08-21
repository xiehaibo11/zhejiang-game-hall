
long FUN_00a15530(int *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = (ulong)(long)*param_1 / param_3;
  }
  return (long)*param_1 - uVar1 * param_3;
}

