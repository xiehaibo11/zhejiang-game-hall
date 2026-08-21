
void cpSpaceBBQuery(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_78 = (undefined4)param_1;
  uStack_74 = (undefined4)param_2;
  local_70 = (undefined4)param_3;
  uStack_6c = (undefined4)param_4;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  cpSpaceLock();
  (**(code **)(**(long **)(param_5 + 0x68) + 0x48))
            (param_1,param_2,param_3,param_4,*(long **)(param_5 + 0x68),&local_78,FUN_01166410,
             param_9);
  (**(code **)(**(long **)(param_5 + 0x60) + 0x48))
            (param_1,param_2,param_3,param_4,*(long **)(param_5 + 0x60),&local_78,FUN_01166410,
             param_9);
  cpSpaceUnlock(param_5,1);
  return;
}

