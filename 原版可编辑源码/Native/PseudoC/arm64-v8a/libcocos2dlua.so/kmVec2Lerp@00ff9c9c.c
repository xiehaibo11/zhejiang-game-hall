
/* cocos2d::kmVec2Lerp(cocos2d::Vec2*, cocos2d::Vec2 const*, cocos2d::Vec2 const*, float) */

void cocos2d::kmVec2Lerp(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_2;
  fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  *(ulong *)param_1 =
       CONCAT44(fVar2 + ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar2) * param_4,
                fVar1 + ((float)*(undefined8 *)param_3 - fVar1) * param_4);
  return;
}

