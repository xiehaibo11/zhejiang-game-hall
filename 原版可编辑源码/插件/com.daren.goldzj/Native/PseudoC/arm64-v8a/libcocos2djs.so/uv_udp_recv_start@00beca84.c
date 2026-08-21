
undefined8 uv_udp_recv_start(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x10) == 0xf) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = uv__udp_recv_start();
    return uVar1;
  }
  return 0xffffffea;
}

