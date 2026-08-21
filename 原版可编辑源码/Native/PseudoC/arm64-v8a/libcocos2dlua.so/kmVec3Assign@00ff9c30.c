
/* cocos2d::kmVec3Assign(cocos2d::Vec3*, cocos2d::Vec3 const*) */

void cocos2d::kmVec3Assign(Vec3 *param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar1;
  return;
}

