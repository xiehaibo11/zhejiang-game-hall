
void * vorbis_dsp_create(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x78);
  vorbis_dsp_init(pvVar1,param_1);
  return pvVar1;
}

