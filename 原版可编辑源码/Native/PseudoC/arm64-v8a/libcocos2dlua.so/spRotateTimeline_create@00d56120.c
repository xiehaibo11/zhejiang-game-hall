
undefined4 * spRotateTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
  *puVar1 = 0;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spRotateTimeline_apply;
  puVar2[1] = _spRotateTimeline_getPropertyId;
  puVar2[2] = _spBaseTimeline_dispose;
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(puVar1 + 4) = uVar3;
  puVar1[6] = param_1 << 1;
  uVar3 = _spCalloc((long)(param_1 << 1),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  return puVar1;
}

