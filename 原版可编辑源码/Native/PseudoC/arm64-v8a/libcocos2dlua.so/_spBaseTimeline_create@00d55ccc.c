
undefined4 *
_spBaseTimeline_create
          (int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00d55cfc to 00e55d2b has its CatchHandler @ 00d5560c */
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
                    /* catch() { ... } // from try @ 00d55cc4 with catch @ 00d55d18 */
  *puVar1 = param_2;
                    /* catch() { ... } // from try @ 00d55c60 with catch @ 00d55d20 */
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = param_4;
  puVar2[1] = param_5;
  puVar2[2] = _spBaseTimeline_dispose;
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(puVar1 + 4) = uVar3;
  puVar1[6] = param_3 * param_1;
  uVar3 = _spCalloc((long)(param_3 * param_1),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  return puVar1;
}

