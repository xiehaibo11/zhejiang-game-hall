
void spSkeletonJson_createWithLoader(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                     ,0x3c);
  *puVar1 = 0x3f800000;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return;
}

