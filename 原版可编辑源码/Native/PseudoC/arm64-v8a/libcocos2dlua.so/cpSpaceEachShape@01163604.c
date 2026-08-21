
void cpSpaceEachShape(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  cpSpaceLock();
  local_40 = param_2;
  uStack_38 = param_3;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),FUN_01163684,&local_40);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
            (*(long **)(param_1 + 0x60),FUN_01163684,&local_40);
  cpSpaceUnlock(param_1,1);
  return;
}

