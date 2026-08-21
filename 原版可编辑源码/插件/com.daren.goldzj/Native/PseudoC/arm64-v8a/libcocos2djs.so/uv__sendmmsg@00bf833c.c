
void uv__sendmmsg(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  syscall(0x10d,param_1 & 0xffffffff,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff);
  return;
}

