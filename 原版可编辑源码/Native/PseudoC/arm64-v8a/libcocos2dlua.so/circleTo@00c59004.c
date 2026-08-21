
/* cocostudio::circleTo(float, cocos2d::Vec2&, float, float, float) */

float cocostudio::circleTo(float param_1,Vec2 *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float local_18;
  float fStack_14;
  
  fVar1 = *(float *)param_2;
  sincosf(param_1 * param_5 + param_4,&fStack_14,&local_18);
  return local_18 * param_3 + fVar1;
}

