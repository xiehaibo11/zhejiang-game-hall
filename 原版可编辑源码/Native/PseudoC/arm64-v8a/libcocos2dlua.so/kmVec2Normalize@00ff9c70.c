
/* cocos2d::kmVec2Normalize(cocos2d::Vec2*, cocos2d::Vec2 const*) */

Vec2 * cocos2d::kmVec2Normalize(Vec2 *param_1,Vec2 *param_2)

{
  undefined4 uVar1;
  undefined4 in_s1;
  
  uVar1 = Vec2::getNormalized((Vec2 *)param_2);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = in_s1;
  return param_1;
}

