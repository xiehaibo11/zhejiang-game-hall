
/* spine::MathUtil::clamp(float, float, float) */

float spine::MathUtil::clamp(float param_1,float param_2,float param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  if (param_2 <= param_1) {
    param_2 = param_3;
  }
  return param_2;
}

