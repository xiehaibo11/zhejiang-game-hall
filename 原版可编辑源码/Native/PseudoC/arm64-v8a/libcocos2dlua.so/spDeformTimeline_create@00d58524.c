
undefined4 * spDeformTimeline_create(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x48,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x3ce);
  *puVar1 = 6;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spDeformTimeline_apply;
  puVar2[1] = _spDeformTimeline_getPropertyId;
  puVar2[2] = _spDeformTimeline_dispose;
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  puVar1[6] = param_1;
  *(undefined8 *)(puVar1 + 4) = uVar3;
  uVar3 = _spCalloc((long)param_1,4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x3d1);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  uVar3 = _spCalloc((long)param_1,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x3d2);
  *(undefined8 *)(puVar1 + 0xc) = uVar3;
  puVar1[10] = param_2;
  return puVar1;
}

