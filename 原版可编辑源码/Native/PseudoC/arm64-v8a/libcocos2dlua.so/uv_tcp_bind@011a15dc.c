
undefined8 uv_tcp_bind(long param_1,short *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0xc) {
    if (*param_2 == 2) {
      uVar1 = FUN_011a99fc(param_1,param_2,0x10,param_3);
      return uVar1;
    }
    if (*param_2 == 10) {
      uVar1 = FUN_011a99fc(param_1,param_2,0x1c,param_3);
      return uVar1;
    }
  }
  return 0xffffffea;
}

