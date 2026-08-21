
void _ToEntry_create(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                     ,0x2a);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = param_1;
  return;
}

