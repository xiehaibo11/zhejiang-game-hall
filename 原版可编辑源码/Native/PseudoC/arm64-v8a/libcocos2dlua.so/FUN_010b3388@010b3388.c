
void FUN_010b3388(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[4] = param_4;
  memcpy(param_1 + 5,ps_parser_funcs,0x68);
  return;
}

