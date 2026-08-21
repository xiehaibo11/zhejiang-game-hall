
undefined8
cpSpaceSegmentQueryFirst
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_70 = 0;
  local_98 = (undefined4)param_3;
  uStack_94 = (undefined4)param_4;
  local_60 = 0;
  uStack_58 = 0x3f800000;
  if (param_9 == (undefined8 *)0x0) {
    param_9 = &local_70;
  }
  else {
    param_9[3] = CONCAT44(uStack_54,0x3f800000);
    param_9[2] = 0;
    param_9[1] = CONCAT44(uStack_94,local_98);
    *param_9 = 0;
  }
  local_a0 = (undefined4)param_1;
  uStack_9c = (undefined4)param_2;
  local_78 = 0;
  local_90 = param_5;
  local_88 = param_7;
  uStack_80 = param_8;
  uStack_68 = local_98;
  uStack_64 = uStack_94;
  (**(code **)(**(long **)(param_6 + 0x60) + 0x50))
            (param_1,param_2,param_3,param_4,0x3f800000,*(long **)(param_6 + 0x60),&local_a0,
             FUN_011662a0,param_9);
  (**(code **)(**(long **)(param_6 + 0x68) + 0x50))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(param_9 + 3),*(long **)(param_6 + 0x68)
             ,&local_a0,FUN_011662a0,param_9);
  return *param_9;
}

