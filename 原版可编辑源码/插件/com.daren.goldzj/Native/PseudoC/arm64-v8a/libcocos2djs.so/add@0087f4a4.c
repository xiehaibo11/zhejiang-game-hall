
/* cocos2d::Vec2::add(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2*) */

void cocos2d::Vec2::add(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3)

{
  *(ulong *)param_3 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)param_2);
  return;
}

