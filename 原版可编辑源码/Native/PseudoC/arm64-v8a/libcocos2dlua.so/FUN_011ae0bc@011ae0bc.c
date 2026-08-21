
void FUN_011ae0bc(uint param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  syscall(0xf2,(ulong)param_1,param_2,param_3,param_4 & 0xffffffff);
  return;
}

