
undefined4 * spAttachmentTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x31b);
  *puVar1 = 4;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spAttachmentTimeline_apply;
  puVar2[1] = _spAttachmentTimeline_getPropertyId;
  puVar2[2] = _spAttachmentTimeline_dispose;
  puVar1[4] = param_1;
  uVar3 = _spCalloc((long)param_1,4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,799);
                    /* try { // try from 00d57914 to 00e5798b has its CatchHandler @ 00d579e4 */
  *(undefined8 *)(puVar1 + 6) = uVar3;
  uVar3 = _spCalloc((long)param_1,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,800);
  *(undefined8 *)(puVar1 + 10) = uVar3;
  return puVar1;
}

