
void FUN_011ae270(uint param_1,undefined8 param_2,ulong param_3)

{
  syscall(0x1b,(ulong)param_1,param_2,param_3 & 0xffffffff);
  return;
}

