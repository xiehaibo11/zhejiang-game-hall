
void FUN_011ae164(ulong param_1)

{
  syscall(0x14,param_1 & 0xffffffff);
  return;
}

