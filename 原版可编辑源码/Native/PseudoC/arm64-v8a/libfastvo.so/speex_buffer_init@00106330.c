
undefined8 * speex_buffer_init(int param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = calloc(0x18,1);
  pvVar2 = calloc((long)param_1,1);
  *puVar1 = pvVar2;
  *(int *)(puVar1 + 1) = param_1;
  return puVar1;
}

