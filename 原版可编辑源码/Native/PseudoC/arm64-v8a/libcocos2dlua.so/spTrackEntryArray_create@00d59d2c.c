
undefined4 * spTrackEntryArray_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x10,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                     ,0x28);
  *puVar1 = 0;
  puVar1[1] = param_1;
                    /* catch() { ... } // from try @ 00d59d20 with catch @ 00d59d6c */
  uVar2 = _spCalloc((long)param_1,8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                    ,0x28);
  *(undefined8 *)(puVar1 + 2) = uVar2;
                    /* catch() { ... } // from try @ 00d59db4 with catch @ 00d59d88 */
  return puVar1;
}

