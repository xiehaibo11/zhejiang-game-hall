
void vorbis_info_init(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pvVar1 = calloc(1,0x58);
  param_1[6] = pvVar1;
  return;
}

