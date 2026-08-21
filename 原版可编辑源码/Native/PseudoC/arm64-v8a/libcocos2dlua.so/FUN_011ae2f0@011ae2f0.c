
void FUN_011ae2f0(uint param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  syscall(0x10d,(ulong)param_1,param_2,(ulong)param_3,param_4 & 0xffffffff);
  return;
}

