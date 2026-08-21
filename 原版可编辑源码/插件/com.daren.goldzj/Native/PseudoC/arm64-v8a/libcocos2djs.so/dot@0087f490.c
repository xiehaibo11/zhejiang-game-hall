
/* cocos2d::Vec2::dot(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

float cocos2d::Vec2::dot(Vec2 *param_1,Vec2 *param_2)

{
  return (float)*(undefined8 *)param_1 * (float)*(undefined8 *)param_2 +
         (float)((ulong)*(undefined8 *)param_1 >> 0x20) *
         (float)((ulong)*(undefined8 *)param_2 >> 0x20);
}

