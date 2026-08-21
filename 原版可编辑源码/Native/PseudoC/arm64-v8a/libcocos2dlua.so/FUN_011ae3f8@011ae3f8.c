
void FUN_011ae3f8(uint param_1,uint param_2,ulong param_3)

{
  syscall(0x18,(ulong)param_1,(ulong)param_2,param_3 & 0xffffffff);
  return;
}

