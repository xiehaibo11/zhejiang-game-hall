
bool cpShapeSegmentQuery(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,long *param_6,undefined8 *param_7)

{
  float fVar1;
  undefined1 auStack_90 [8];
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_70 = 0;
  uStack_68 = (undefined4)param_3;
  uStack_64 = (undefined4)param_4;
  local_60 = 0;
  uStack_58 = 0x3f800000;
  if (param_7 == (undefined8 *)0x0) {
    param_7 = &local_70;
  }
  else {
    param_7[3] = CONCAT44(uStack_54,0x3f800000);
    param_7[2] = 0;
    param_7[1] = CONCAT44(uStack_64,uStack_68);
    *param_7 = 0;
  }
  (**(code **)(*param_6 + 0x18))(param_1,param_2,param_6,auStack_90);
  if (local_80 <= (float)param_5) {
    *param_7 = param_6;
    *(undefined4 *)(param_7 + 3) = 0;
    local_88 = (float)param_1 - local_88;
    fStack_84 = (float)param_2 - fStack_84;
    fVar1 = 1.0 / (SQRT(local_88 * local_88 + fStack_84 * fStack_84) + 1.1754944e-38);
    *(float *)(param_7 + 2) = fVar1 * local_88;
    *(float *)((long)param_7 + 0x14) = fVar1 * fStack_84;
  }
  else {
    (**(code **)(*param_6 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    param_6 = (long *)*param_7;
  }
  return param_6 != (long *)0x0;
}

