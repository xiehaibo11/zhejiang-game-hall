
void uv__utimesat(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  syscall(0x58,param_1 & 0xffffffff,param_2,param_3,param_4 & 0xffffffff);
  return;
}

