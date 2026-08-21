
undefined8 uv_timer_init(long param_1,long param_2)

{
  long *plVar1;
  
  *(long *)(param_2 + 0x20) = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0xd;
  *(long **)(param_2 + 0x28) = plVar1;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *plVar1 = param_2 + 0x20;
  *(long *)(param_1 + 0x18) = param_2 + 0x20;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  return 0;
}

