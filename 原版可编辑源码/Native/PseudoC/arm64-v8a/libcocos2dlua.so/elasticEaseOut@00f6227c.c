
/* cocos2d::tweenfunc::elasticEaseOut(float, float) */

undefined1  [16] cocos2d::tweenfunc::elasticEaseOut(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00005004;
  ulong uVar3;
  undefined8 in_register_00005008;
  undefined1 auVar4 [16];
  
  uVar3 = CONCAT44(in_register_00005004,param_1);
                    /* try { // try from 00f6229c to 0106229f has its CatchHandler @ 00f627c8 */
  if ((param_1 != 0.0) && (param_1 != 1.0)) {
    fVar1 = exp2f(param_1 * -10.0);
    fVar2 = (param_1 + param_2 * -0.25) * 3.1415927;
    fVar2 = sinf((fVar2 + fVar2) / param_2);
    uVar3 = (ulong)(uint)(fVar1 * fVar2 + 1.0);
    in_register_00005008 = 0;
  }
  auVar4._8_8_ = in_register_00005008;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

