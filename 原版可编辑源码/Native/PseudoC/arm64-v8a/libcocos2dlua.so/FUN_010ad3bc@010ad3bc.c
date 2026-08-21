
undefined8 FUN_010ad3bc(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 0) {
      FT_Outline_Transform(param_2 + 200,param_3);
    }
    if (param_4 != (undefined8 *)0x0) {
      FT_Outline_Translate(param_2 + 200,*param_4,param_4[1]);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}

