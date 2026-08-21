
void cpSpaceFilterArbiters(long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  cpSpaceLock();
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  cpHashSetFilter(*(undefined8 *)(param_1 + 0x88),FUN_0116325c,&local_48);
  cpSpaceUnlock(param_1,1);
  return;
}

