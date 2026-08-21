
undefined4 * spDrawOrderTimeline_create(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x460);
  *puVar1 = 8;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spDrawOrderTimeline_apply;
  puVar2[1] = _spDrawOrderTimeline_getPropertyId;
  puVar2[2] = _spDrawOrderTimeline_dispose;
  puVar1[4] = param_1;
  uVar3 = _spCalloc((long)param_1,4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x464);
  *(undefined8 *)(puVar1 + 6) = uVar3;
  uVar3 = _spCalloc((long)param_1,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x465);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar1[10] = param_2;
  return puVar1;
}

