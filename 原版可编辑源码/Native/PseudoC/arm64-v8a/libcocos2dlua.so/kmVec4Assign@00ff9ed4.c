
/* cocos2d::kmVec4Assign(cocos2d::Vec4*, cocos2d::Vec4 const*) */

void cocos2d::kmVec4Assign(Vec4 *param_1,Vec4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar1;
  return;
}

