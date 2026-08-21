
undefined8 * spAnimationState_create(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (DAT_017875f0 == 0) {
    DAT_017875f0 = 1;
    DAT_017875f0 = spAnimation_create("<empty>",0);
  }
  puVar1 = (undefined8 *)
           _spCalloc(1,0x68,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0xd9);
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x20,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0x45);
  *puVar2 = puVar1;
  puVar2[2] = 0x1000000000;
  uVar3 = _spCalloc(0x10,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0x49);
  puVar2[1] = uVar3;
                    /* catch() { ... } // from try @ 00d5ae68 with catch @ 00d5adf8 */
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar1[9] = puVar2;
  uVar3 = _spCalloc(0x80,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0xe0);
  puVar1[8] = uVar3;
                    /* try { // try from 00d5ae1c to 00e5ae23 has its CatchHandler @ 00d5aebc */
  uVar3 = _spCalloc(0x80,4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0xe2);
  puVar1[10] = uVar3;
  *(undefined4 *)((long)puVar1 + 0x5c) = 0x80;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x10,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0x28);
  *puVar2 = 0x1000000000;
  uVar3 = _spCalloc(0x10,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0x28);
  puVar2[1] = uVar3;
  puVar1[5] = puVar2;
                    /* try { // try from 00d5ae64 to 00e5ae67 has its CatchHandler @ 00d5aeac */
                    /* try { // try from 00d5ae68 to 00e5aed7 has its CatchHandler @ 00d5adf8 */
  return puVar1;
}

