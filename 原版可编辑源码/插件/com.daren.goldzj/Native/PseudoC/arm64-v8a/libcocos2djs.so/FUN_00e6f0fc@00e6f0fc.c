
void FUN_00e6f0fc(long param_1,long param_2,undefined8 *param_3)

{
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    FT_Outline_Get_CBox(param_2 + 200,param_3);
    return;
  }
  return;
}

