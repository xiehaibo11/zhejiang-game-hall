
void FUN_011ae250(ulong param_1)

{
  syscall(0x1a,param_1 & 0xffffffff);
  return;
}

