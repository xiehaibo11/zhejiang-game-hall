
/* CSSColorParser::css_hue_to_rgb(float, float, float) */

undefined1  [16] CSSColorParser::css_hue_to_rgb(float param_1,float param_2,float param_3)

{
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_register_00005024;
  undefined8 in_register_00005028;
  float fVar3;
  
  auVar2._4_4_ = in_register_00005004;
  auVar2._0_4_ = param_1;
  fVar3 = 1.0;
  if (param_3 < 0.0) {
LAB_0088fd74:
    param_3 = param_3 + fVar3;
  }
  else if (1.0 < param_3) {
    fVar3 = -1.0;
    goto LAB_0088fd74;
  }
  if (1.0 <= param_3 * 6.0) {
    if (param_3 + param_3 < 1.0) goto LAB_0088fdd0;
    if (2.0 <= param_3 * 3.0) {
      auVar2._8_8_ = in_register_00005008;
      return auVar2;
    }
    param_3 = 0.6666667 - param_3;
  }
  param_2 = (param_2 - param_1) * param_3 * 6.0 + param_1;
  in_register_00005024 = 0;
  in_register_00005028 = 0;
LAB_0088fdd0:
  auVar1._4_4_ = in_register_00005024;
  auVar1._0_4_ = param_2;
  auVar1._8_8_ = in_register_00005028;
  return auVar1;
}

