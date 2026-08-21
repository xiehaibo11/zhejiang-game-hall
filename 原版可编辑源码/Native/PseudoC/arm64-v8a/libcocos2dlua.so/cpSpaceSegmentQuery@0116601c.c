
void cpSpaceSegmentQuery(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                        undefined8 param_9,undefined8 param_10)

{
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_80 = (undefined4)param_1;
  uStack_7c = (undefined4)param_2;
  local_78 = (undefined4)param_3;
  uStack_74 = (undefined4)param_4;
  local_70 = param_5;
  local_68 = param_7;
  uStack_60 = param_8;
  local_58 = param_9;
  cpSpaceLock();
  (**(code **)(**(long **)(param_6 + 0x60) + 0x50))
            (param_1,param_2,param_3,param_4,0x3f800000,*(long **)(param_6 + 0x60),&local_80,
             FUN_01166104,param_10);
  (**(code **)(**(long **)(param_6 + 0x68) + 0x50))
            (param_1,param_2,param_3,param_4,0x3f800000,*(long **)(param_6 + 0x68),&local_80,
             FUN_01166104,param_10);
  cpSpaceUnlock(param_6,1);
  return;
}

