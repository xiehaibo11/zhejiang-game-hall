
undefined8 uv_udp_recv_start(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (((param_3 != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x10) == 0xf)) {
    uVar1 = FUN_011abc60();
    return uVar1;
  }
  return 0xffffffea;
}

