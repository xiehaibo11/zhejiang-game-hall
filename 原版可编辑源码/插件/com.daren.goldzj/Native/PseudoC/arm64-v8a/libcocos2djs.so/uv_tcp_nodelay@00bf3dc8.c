
undefined8 uv_tcp_nodelay(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xb8) == -1) || (uVar1 = uv__tcp_nodelay(), (int)uVar1 == 0)) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x400;
      return 0;
    }
    uVar1 = 0;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffbff;
  }
  return uVar1;
}

