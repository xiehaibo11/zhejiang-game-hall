
undefined8 uv_tcp_simultaneous_accepts(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x1000;
    return 0;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffefff;
  return 0;
}

