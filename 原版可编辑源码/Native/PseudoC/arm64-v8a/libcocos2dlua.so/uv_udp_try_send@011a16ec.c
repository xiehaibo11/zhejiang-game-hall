
undefined8 uv_udp_try_send(long param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0xf) {
    if (*param_4 == 2) {
      uVar1 = FUN_011ab19c();
      return uVar1;
    }
    if (*param_4 == 10) {
      uVar1 = FUN_011ab19c();
      return uVar1;
    }
  }
  return 0xffffffea;
}

