
long FUN_0134ab34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x26;
  
  *(int *)(param_4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
  if (param_1 < 1) {
    *(undefined4 *)(param_4 + 3) = 3;
    *(long *)(param_4 + 7) = -param_1;
    return param_4;
  }
  *(undefined4 *)(param_4 + 3) = 2;
  *(long *)(param_4 + 7) = param_1;
  return param_4;
}

