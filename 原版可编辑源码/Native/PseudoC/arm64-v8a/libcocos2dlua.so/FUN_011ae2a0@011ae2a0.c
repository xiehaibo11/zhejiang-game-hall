
void FUN_011ae2a0(uint param_1,ulong param_2)

{
  syscall(0x1c,(ulong)param_1,param_2 & 0xffffffff);
  return;
}

