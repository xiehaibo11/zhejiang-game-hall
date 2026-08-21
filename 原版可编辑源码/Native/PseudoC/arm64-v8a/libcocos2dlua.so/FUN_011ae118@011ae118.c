
void FUN_011ae118(uint param_1,ulong param_2)

{
  syscall(0x13,(ulong)param_1,param_2 & 0xffffffff);
  return;
}

