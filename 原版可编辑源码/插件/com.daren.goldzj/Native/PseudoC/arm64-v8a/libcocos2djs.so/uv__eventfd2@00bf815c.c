
void uv__eventfd2(ulong param_1,ulong param_2)

{
  syscall(0x13,param_1 & 0xffffffff,param_2 & 0xffffffff);
  return;
}

