
/* cocos2d::tweenfunc::bezieratFunction(float, float, float, float, float) */

float cocos2d::tweenfunc::bezieratFunction
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float __x;
  
  __x = 1.0 - param_5;
  fVar1 = powf(__x,3.0);
  fVar2 = powf(param_5,3.0);
  return fVar2 * param_4 +
         __x * param_5 * param_5 * 3.0 * param_3 +
         fVar1 * param_1 + param_5 * 3.0 * __x * __x * param_2;
}

