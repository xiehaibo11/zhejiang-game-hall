
void FUN_0119e4dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  uv_once(&DAT_01793234,FUN_0119e570);
  param_2[1] = param_4;
  param_2[2] = param_1;
  *param_2 = param_3;
  uv_mutex_lock(&DAT_01793278);
  puVar1 = param_2 + 3;
  *puVar1 = &DAT_01793220;
  param_2[4] = DAT_01793228;
  *DAT_01793228 = puVar1;
  DAT_01793228 = puVar1;
  if (DAT_01793238 != 0) {
    uv_cond_signal(&DAT_017932a0);
  }
  uv_mutex_unlock(&DAT_01793278);
  return;
}

