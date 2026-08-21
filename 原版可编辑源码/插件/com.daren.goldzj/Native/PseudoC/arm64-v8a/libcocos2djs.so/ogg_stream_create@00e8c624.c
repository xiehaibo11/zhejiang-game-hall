
void ogg_stream_create(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x68);
  *(long *)((long)pvVar1 + 0x28) = (long)param_1;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0xffffffffffffffff;
  return;
}

