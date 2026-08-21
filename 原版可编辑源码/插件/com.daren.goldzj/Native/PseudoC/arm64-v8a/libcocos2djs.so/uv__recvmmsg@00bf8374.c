
void uv__recvmmsg(uint param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  syscall(0xf3,(ulong)param_1,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5);
  return;
}

