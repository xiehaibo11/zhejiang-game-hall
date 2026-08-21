
void speex_bits_init(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(2000,1);
  *param_1 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = 0x7d000000000;
    param_1[2] = 0x100000000;
    param_1[1] = 0;
  }
  return;
}

