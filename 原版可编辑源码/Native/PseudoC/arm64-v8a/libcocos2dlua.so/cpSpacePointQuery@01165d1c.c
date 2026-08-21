
void cpSpacePointQuery(float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
                      undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  fVar1 = param_3;
  if (param_3 <= 0.0) {
    fVar1 = 0.0;
  }
  local_78 = param_1;
  fStack_74 = param_2;
  local_70 = param_3;
  local_68 = param_5;
  uStack_60 = param_6;
  local_58 = param_7;
  cpSpaceLock();
  (**(code **)(**(long **)(param_4 + 0x68) + 0x48))
            (param_1 - fVar1,param_2 - fVar1,fVar1 + param_1,fVar1 + param_2,
             *(long **)(param_4 + 0x68),&local_78,FUN_01165df4,param_8);
  (**(code **)(**(long **)(param_4 + 0x60) + 0x48))
            (param_1 - fVar1,param_2 - fVar1,fVar1 + param_1,fVar1 + param_2,
             *(long **)(param_4 + 0x60),&local_78,FUN_01165df4,param_8);
  cpSpaceUnlock(param_4,1);
  return;
}

