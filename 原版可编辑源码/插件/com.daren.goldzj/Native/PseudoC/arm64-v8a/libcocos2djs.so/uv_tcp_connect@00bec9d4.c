
undefined8 uv_tcp_connect(undefined8 param_1,long param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x10) == 0xc) {
    if (*param_3 == 2) {
      uVar1 = uv__tcp_connect();
      return uVar1;
    }
    if (*param_3 == 10) {
      uVar1 = uv__tcp_connect();
      return uVar1;
    }
  }
  return 0xffffffea;
}

