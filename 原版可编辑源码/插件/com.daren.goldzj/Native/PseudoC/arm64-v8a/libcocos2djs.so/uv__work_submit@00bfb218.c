
void uv__work_submit(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 3;
  uv_once(&DAT_01d3be10,FUN_00bfafc4);
  param_2[2] = param_1;
  *param_2 = param_3;
  param_2[1] = param_4;
  uv_mutex_lock(&DAT_01d3bdb0);
  param_2[4] = DAT_01d3bde8;
  param_2[3] = &DAT_01d3bde0;
  *DAT_01d3bde8 = (long)puVar1;
  DAT_01d3bde8 = puVar1;
  if (DAT_01d3bdf4 != 0) {
    uv_cond_signal(&DAT_01d3bd80);
  }
  uv_mutex_unlock(&DAT_01d3bdb0);
  return;
}

