
undefined8 uv_udp_init(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_2 + 0x20);
  *plVar2 = param_1 + 0x10;
  *(undefined4 *)(param_2 + 0x10) = 0xf;
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x58) = 8;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_2 + 0x28) = puVar1;
  *puVar1 = plVar2;
  *(long **)(param_1 + 0x18) = plVar2;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_011a366c(param_2 + 0x80,FUN_011ab3f0,0xffffffff);
  *(long *)(param_2 + 0xb8) = param_2 + 0xb8;
  *(long *)(param_2 + 0xc0) = param_2 + 0xb8;
  *(long *)(param_2 + 200) = param_2 + 200;
  *(long *)(param_2 + 0xd0) = param_2 + 200;
  return 0;
}

