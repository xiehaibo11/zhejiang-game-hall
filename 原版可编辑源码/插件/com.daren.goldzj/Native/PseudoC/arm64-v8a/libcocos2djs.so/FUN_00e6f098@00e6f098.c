
undefined8 FUN_00e6f098(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 0) {
      FT_Outline_Transform(param_2 + 200,param_3);
    }
    if (param_4 != (undefined8 *)0x0) {
      FT_Outline_Translate(param_2 + 200,*param_4,param_4[1]);
    }
    return 0;
  }
  return 6;
}

