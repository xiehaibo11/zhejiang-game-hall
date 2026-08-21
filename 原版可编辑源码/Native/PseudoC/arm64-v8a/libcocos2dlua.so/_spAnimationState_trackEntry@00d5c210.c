
long * _spAnimationState_trackEntry
                 (undefined8 *param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
                    /* catch() { ... } // from try @ 00d5bf78 with catch @ 00d5c224 */
                    /* catch() { ... } // from try @ 00d5bb54 with catch @ 00d5c228
                       catch() { ... } // from try @ 00d5bd2c with catch @ 00d5c228 */
                    /* catch() { ... } // from try @ 00d5b774 with catch @ 00d5c22c */
                    /* catch() { ... } // from try @ 00d5bc5c with catch @ 00d5c230 */
                    /* catch() { ... } // from try @ 00d5bb84 with catch @ 00d5c234 */
                    /* catch() { ... } // from try @ 00d5be20 with catch @ 00d5c244 */
                    /* catch() { ... } // from try @ 00d5bfb4 with catch @ 00d5c24c */
  plVar1 = (long *)_spCalloc(1,0xa0,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                             ,0x2fc);
                    /* catch() { ... } // from try @ 00d5ba7c with catch @ 00d5c250 */
                    /* catch() { ... } // from try @ 00d5bf00 with catch @ 00d5c254 */
  *plVar1 = param_3;
  *(undefined4 *)(plVar1 + 4) = param_2;
  *(undefined4 *)((long)plVar1 + 0x24) = param_4;
  plVar1[5] = 0;
  plVar1[6] = 0;
  uVar5 = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)((long)plVar1 + 0x44) = 0;
  *(undefined8 *)((long)plVar1 + 0x3c) = 0xbf800000bf800000;
                    /* catch() { ... } // from try @ 00d5bee8 with catch @ 00d5c274 */
  *(undefined8 *)((long)plVar1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(plVar1 + 7) = uVar5;
  *(undefined8 *)((long)plVar1 + 0x54) = 0x3f8000004f000000;
  *(undefined8 *)((long)plVar1 + 0x4c) = 0xbf800000bf800000;
  *(undefined4 *)(plVar1 + 0xd) = 0x3f800000;
  if (param_5 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = spAnimationStateData_getMix(*param_1,*param_5,param_3);
  }
  *(undefined4 *)((long)plVar1 + 100) = uVar5;
  lVar2 = spIntArray_create(0x10);
                    /* catch() { ... } // from try @ 00d5ba0c with catch @ 00d5c2b4 */
                    /* catch() { ... } // from try @ 00d5b3d8 with catch @ 00d5c2b8 */
                    /* catch() { ... } // from try @ 00d5b3c4 with catch @ 00d5c2bc */
  plVar1[0xe] = lVar2;
                    /* catch() { ... } // from try @ 00d5b4d8 with catch @ 00d5c2c0 */
                    /* catch() { ... } // from try @ 00d5b4c4 with catch @ 00d5c2c4 */
                    /* catch() { ... } // from try @ 00d5b4bc with catch @ 00d5c2c8 */
                    /* catch() { ... } // from try @ 00d5b450 with catch @ 00d5c2cc */
  puVar3 = (undefined8 *)
           _spCalloc(1,0x10,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0x28);
                    /* catch() { ... } // from try @ 00d5b43c with catch @ 00d5c2e0 */
                    /* catch() { ... } // from try @ 00d5b434 with catch @ 00d5c2e4 */
                    /* catch() { ... } // from try @ 00d5b40c with catch @ 00d5c2e8 */
  *puVar3 = 0x1000000000;
  uVar4 = _spCalloc(0x10,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0x28);
  puVar3[1] = uVar4;
  plVar1[0xf] = (long)puVar3;
  return plVar1;
}

