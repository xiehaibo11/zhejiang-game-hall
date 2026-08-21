
void spAnimationStateData_create(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                     ,0x4a);
  *puVar1 = param_1;
  return;
}

