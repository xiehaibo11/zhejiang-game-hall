
/* cocos2d::kmVec2Scale(cocos2d::Vec2*, cocos2d::Vec2 const*, float) */

void cocos2d::kmVec2Scale(Vec2 *param_1,Vec2 *param_2,float param_3)

{
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_3,
                (float)*(undefined8 *)param_2 * param_3);
  return;
}

