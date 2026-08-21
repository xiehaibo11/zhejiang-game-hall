
undefined8
uv_udp_send(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,short *param_5)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x10) == 0xf) {
    if (*param_5 == 2) {
      uVar1 = FUN_011aae50();
      return uVar1;
    }
    if (*param_5 == 10) {
      uVar1 = FUN_011aae50();
      return uVar1;
    }
  }
  return 0xffffffea;
}

