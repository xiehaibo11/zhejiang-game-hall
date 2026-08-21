
undefined4 * spPathConstraintMixTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00d59c40 to 00e59cbf has its CatchHandler @ 00d599a8 */
                    /* catch() { ... } // from try @ 00d59aa4 with catch @ 00d59c54 */
                    /* catch() { ... } // from try @ 00d59a90 with catch @ 00d59c58 */
                    /* catch() { ... } // from try @ 00d59bcc with catch @ 00d59c5c */
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
                    /* catch() { ... } // from try @ 00d59bb8 with catch @ 00d59c70 */
                    /* catch() { ... } // from try @ 00d59bb0 with catch @ 00d59c74 */
  *puVar1 = 0xd;
                    /* catch() { ... } // from try @ 00d59b90 with catch @ 00d59c78 */
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
                    /* catch() { ... } // from try @ 00d59b7c with catch @ 00d59c98 */
                    /* catch() { ... } // from try @ 00d59af8 with catch @ 00d59c9c */
                    /* catch() { ... } // from try @ 00d59a28 with catch @ 00d59ca0 */
                    /* catch() { ... } // from try @ 00d599ec with catch @ 00d59ca4
                       catch() { ... } // from try @ 00d59ad4 with catch @ 00d59ca4
                       catch() { ... } // from try @ 00d59c34 with catch @ 00d59ca4 */
  *puVar2 = _spPathConstraintMixTimeline_apply;
  puVar2[1] = _spPathConstraintMixTimeline_getPropertyId;
  puVar2[2] = _spBaseTimeline_dispose;
                    /* try { // try from 00d59cc0 to 00e59d1f has its CatchHandler @ 00d59cc0
                       catch() { ... } // from try @ 00d59cc0 with catch @ 00d59cc0
                       catch() { ... } // from try @ 00d59d28 with catch @ 00d59cc0 */
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(puVar1 + 4) = uVar3;
  puVar1[6] = param_1 * 3;
  uVar3 = _spCalloc((long)(param_1 * 3),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  return puVar1;
}

