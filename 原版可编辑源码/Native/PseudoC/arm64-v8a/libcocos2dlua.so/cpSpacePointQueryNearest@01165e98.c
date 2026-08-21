
undefined8
cpSpacePointQueryNearest
          (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 *param_7)

{
  float fVar1;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  if (param_7 == (undefined8 *)0x0) {
    param_7 = &local_70;
  }
  else {
    param_7[3] = (ulong)uStack_54 << 0x20;
    param_7[2] = (ulong)(uint)param_3;
    param_7[1] = 0;
    *param_7 = 0;
  }
  local_78 = 0;
  fVar1 = param_3;
  if (param_3 <= 0.0) {
    fVar1 = 0.0;
  }
  local_98 = param_1;
  fStack_94 = param_2;
  local_90 = param_3;
  local_88 = param_5;
  uStack_80 = param_6;
  local_60 = param_3;
  (**(code **)(**(long **)(param_4 + 0x68) + 0x48))
            (param_1 - fVar1,param_2 - fVar1,fVar1 + param_1,fVar1 + param_2,
             *(long **)(param_4 + 0x68),&local_98,FUN_01165f8c,param_7);
  (**(code **)(**(long **)(param_4 + 0x60) + 0x48))
            (param_1 - fVar1,param_2 - fVar1,fVar1 + param_1,fVar1 + param_2,
             *(long **)(param_4 + 0x60),&local_98,FUN_01165f8c,param_7);
  return *param_7;
}

