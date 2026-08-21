
/* cocos2d::tweenfunc::easeInOut(float, float) */

float cocos2d::tweenfunc::easeInOut(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (1.0 <= fVar1) {
    fVar1 = powf(2.0 - fVar1,param_2);
    fVar1 = fVar1 * -0.5 + 1.0;
  }
  else {
    fVar1 = powf(fVar1,param_2);
    fVar1 = fVar1 * 0.5;
  }
  return fVar1;
}

