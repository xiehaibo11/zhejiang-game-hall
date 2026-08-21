
/* cocostudio::bezierTo(float, cocos2d::Vec2&, cocos2d::Vec2&, cocos2d::Vec2&, cocos2d::Vec2&) */

float cocostudio::bezierTo(float param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,Vec2 *param_5)

{
  float fVar1;
  double dVar2;
  double __x;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double __x_00;
  
  fVar1 = *(float *)param_2;
  __x_00 = (double)(1.0 - param_1);
  dVar2 = pow(__x_00,3.0);
  fVar4 = *(float *)param_3;
  fVar5 = *(float *)param_4;
  __x = (double)param_1;
  fVar6 = *(float *)param_5;
  dVar3 = pow(__x,3.0);
  return (float)(dVar3 * (double)fVar6 +
                dVar2 * (double)fVar1 + __x_00 * __x_00 * (double)(param_1 * 3.0 * fVar4) +
                __x * __x * (double)(fVar5 * 3.0) * __x_00);
}

