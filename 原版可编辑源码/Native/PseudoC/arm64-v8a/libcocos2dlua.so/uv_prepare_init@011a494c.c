
undefined8 uv_prepare_init(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x20);
  *plVar1 = param_1 + 0x10;
  *(undefined4 *)(param_2 + 0x10) = 9;
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x58) = 8;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  *puVar2 = plVar1;
  *(long **)(param_1 + 0x18) = plVar1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  return 0;
}

