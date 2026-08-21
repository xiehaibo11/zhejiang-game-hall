
undefined8 uv_tcp_simultaneous_accepts(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58) | 0x4000000;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x58) & 0xfbffffff;
  }
  *(uint *)(param_1 + 0x58) = uVar1;
  return 0;
}

