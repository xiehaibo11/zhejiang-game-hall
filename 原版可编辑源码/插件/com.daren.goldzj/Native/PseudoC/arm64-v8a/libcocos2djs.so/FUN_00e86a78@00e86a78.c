
undefined8 FUN_00e86a78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x90) != 0x6f75746c) {
    return 0x12;
  }
  uVar1 = FT_Outline_New(*param_1,(long)*(short *)(param_2 + 0xca),(long)*(short *)(param_2 + 200),
                         param_1 + 5);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  FT_Outline_Copy(param_2 + 200,param_1 + 5);
  return 0;
}

