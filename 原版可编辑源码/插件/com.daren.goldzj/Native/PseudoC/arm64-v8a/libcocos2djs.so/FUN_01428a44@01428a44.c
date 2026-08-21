
long FUN_01428a44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  long unaff_x26;
  
  *(int *)(param_5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
  if (param_3 < 1) {
    *(undefined4 *)(param_5 + 3) = 3;
    *(long *)(param_5 + 7) = -param_3;
    return param_5;
  }
  *(undefined4 *)(param_5 + 3) = 2;
  *(long *)(param_5 + 7) = param_3;
  return param_5;
}

