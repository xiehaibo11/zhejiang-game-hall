
/* spine::Triangulator::winding(float, float, float, float, float, float) */

undefined4
spine::Triangulator::winding
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= ((param_3 - param_1) * param_2 +
             ((param_4 - param_2) * param_5 - (param_3 - param_1) * param_6)) -
             (param_4 - param_2) * param_1) {
    uVar1 = 1;
  }
  return uVar1;
}

