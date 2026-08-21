
undefined4 * spPathConstraintPositionTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00d59554 with catch @ 00d595a8 */
                    /* try { // try from 00d595bc to 00e595f7 has its CatchHandler @ 00d595bc
                       catch() { ... } // from try @ 00d595bc with catch @ 00d595bc
                       catch() { ... } // from try @ 00d5961c with catch @ 00d595bc */
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
  *puVar1 = 0xb;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
                    /* try { // try from 00d595f8 to 00e5961b has its CatchHandler @ 00d5964c */
  *puVar2 = _spPathConstraintPositionTimeline_apply;
  puVar2[1] = _spPathConstraintPositionTimeline_getPropertyId;
  puVar2[2] = _spBaseTimeline_dispose;
                    /* try { // try from 00d5961c to 00e5965f has its CatchHandler @ 00d595bc */
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(puVar1 + 4) = uVar3;
  puVar1[6] = param_1 << 1;
                    /* catch() { ... } // from try @ 00d595f8 with catch @ 00d5964c */
  uVar3 = _spCalloc((long)(param_1 << 1),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  return puVar1;
}

