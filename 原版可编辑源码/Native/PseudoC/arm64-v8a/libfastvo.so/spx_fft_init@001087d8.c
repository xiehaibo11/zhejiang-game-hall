
void * spx_fft_init(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(0x18,1);
  spx_drft_init(pvVar1,param_1);
  return pvVar1;
}

