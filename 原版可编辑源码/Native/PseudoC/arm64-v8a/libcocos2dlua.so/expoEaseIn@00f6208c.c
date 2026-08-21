
/* cocos2d::tweenfunc::expoEaseIn(float) */

float cocos2d::tweenfunc::expoEaseIn(float param_1)

{
  float fVar1;
  
  if (param_1 == 0.0) {
    return 0.0;
  }
  fVar1 = exp2f((param_1 + -1.0) * 10.0);
  return fVar1 + -0.001;
}

