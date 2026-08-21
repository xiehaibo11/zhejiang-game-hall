
void uv__dup3(ulong param_1,ulong param_2,ulong param_3)

{
  syscall(0x18,param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff);
  return;
}

