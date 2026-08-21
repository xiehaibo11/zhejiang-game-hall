
void FUN_011ae1e0(uint param_1,undefined8 param_2,uint param_3,ulong param_4,undefined8 param_5)

{
  undefined8 local_18;
  
  local_18 = param_5;
  syscall(0x16,(ulong)param_1,param_2,(ulong)param_3,param_4 & 0xffffffff,&local_18,8);
  return;
}

