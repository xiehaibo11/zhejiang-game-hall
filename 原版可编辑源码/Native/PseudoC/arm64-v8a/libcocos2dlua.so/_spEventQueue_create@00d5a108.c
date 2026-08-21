
undefined8 * _spEventQueue_create(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x20,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0x45);
                    /* catch() { ... } // from try @ 00d5a514 with catch @ 00d5a138 */
  *puVar1 = param_1;
  puVar1[2] = 0x1000000000;
  uVar2 = _spCalloc(0x10,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0x49);
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}

