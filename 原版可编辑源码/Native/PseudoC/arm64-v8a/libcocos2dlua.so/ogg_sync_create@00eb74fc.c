
undefined8 * ogg_sync_create(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = calloc(1,0x30);
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  pvVar2 = calloc(1,0x18);
  *puVar1 = pvVar2;
  return puVar1;
}

