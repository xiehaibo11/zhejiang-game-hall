
void buffer_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = timeout_gettime();
  *param_1 = uVar1;
  return;
}

