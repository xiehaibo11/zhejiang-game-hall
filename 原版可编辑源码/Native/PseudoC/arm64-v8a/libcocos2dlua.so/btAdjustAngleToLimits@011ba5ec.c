
/* btAdjustAngleToLimits(float, float, float) */

undefined1  [16] btAdjustAngleToLimits(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00005004;
  ulong uVar3;
  undefined8 in_register_00005008;
  undefined1 auVar4 [16];
  
  uVar3 = CONCAT44(in_register_00005004,param_1);
  if (param_2 < param_3) {
    if (param_2 <= param_1) {
      if (param_3 < param_1) {
        fVar1 = fmodf(param_1 - param_3,6.2831855);
        if (-3.1415927 <= fVar1) {
          if (3.1415927 < fVar1) {
            fVar1 = fVar1 + -6.2831855;
          }
        }
        else {
          fVar1 = fVar1 + 6.2831855;
        }
        fVar2 = fmodf(param_1 - param_2,6.2831855);
        if (-3.1415927 <= fVar2) {
          if (3.1415927 < fVar2) {
            fVar2 = fVar2 + -6.2831855;
          }
        }
        else {
          fVar2 = fVar2 + 6.2831855;
        }
        uVar3 = (ulong)(uint)(param_1 + -6.2831855);
        in_register_00005008 = 0;
        if (ABS(fVar1) <= ABS(fVar2)) {
          uVar3 = (ulong)(uint)param_1;
          in_register_00005008 = 0;
        }
      }
    }
    else {
      fVar1 = fmodf(param_2 - param_1,6.2831855);
      if (-3.1415927 <= fVar1) {
        if (3.1415927 < fVar1) {
          fVar1 = fVar1 + -6.2831855;
        }
      }
      else {
        fVar1 = fVar1 + 6.2831855;
      }
      fVar2 = fmodf(param_3 - param_1,6.2831855);
      if (-3.1415927 <= fVar2) {
        if (3.1415927 < fVar2) {
          fVar2 = fVar2 + -6.2831855;
        }
      }
      else {
        fVar2 = fVar2 + 6.2831855;
      }
      if (ABS(fVar2) <= ABS(fVar1)) {
        param_1 = param_1 + 6.2831855;
      }
      in_register_00005008 = 0;
      uVar3 = (ulong)(uint)param_1;
    }
  }
  auVar4._8_8_ = in_register_00005008;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

