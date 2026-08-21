
undefined8 uv_udp_recv_stop(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0xf) {
    uVar1 = FUN_011abd8c();
    return uVar1;
  }
  return 0xffffffea;
}

