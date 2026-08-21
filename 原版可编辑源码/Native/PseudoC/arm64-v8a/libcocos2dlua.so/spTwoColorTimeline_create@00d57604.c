
undefined4 * spTwoColorTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00d57604 to 00e5775f has its CatchHandler @ 00d574a0 */
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
  *puVar1 = 0xe;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spTwoColorTimeline_apply;
  puVar2[1] = _spTwoColorTimeline_getPropertyId;
  puVar2[2] = _spBaseTimeline_dispose;
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
                    /* catch() { ... } // from try @ 00d57514 with catch @ 00d5769c */
  *(undefined8 *)(puVar1 + 4) = uVar3;
                    /* catch() { ... } // from try @ 00d5750c with catch @ 00d576a0 */
                    /* catch() { ... } // from try @ 00d575d0 with catch @ 00d576b0 */
  puVar1[6] = param_1 << 3;
                    /* catch() { ... } // from try @ 00d5752c with catch @ 00d576b4 */
  uVar3 = _spCalloc((long)(param_1 << 3),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
                    /* catch() { ... } // from try @ 00d574f4 with catch @ 00d576c8 */
  return puVar1;
}

