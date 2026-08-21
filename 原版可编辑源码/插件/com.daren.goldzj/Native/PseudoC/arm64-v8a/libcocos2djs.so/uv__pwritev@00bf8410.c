
void uv__pwritev(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  syscall(0x46,param_1 & 0xffffffff,param_2,param_3 & 0xffffffff,param_4,param_4 >> 0x20);
  return;
}

