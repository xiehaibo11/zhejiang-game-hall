
undefined4 * spShearTimeline_create(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0xe6);
  *puVar1 = 3;
  puVar2 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                     ,0x50);
  *(undefined8 **)(puVar1 + 2) = puVar2;
  *puVar2 = _spShearTimeline_apply;
  puVar2[1] = _spShearTimeline_getPropertyId;
  puVar2[2] = _spBaseTimeline_dispose;
                    /* try { // try from 00d56cc0 to 00e56cc7 has its CatchHandler @ 00d56d88 */
                    /* try { // try from 00d56cd0 to 00e56cdb has its CatchHandler @ 00d56d78 */
  uVar3 = _spCalloc((long)(param_1 * 0x13 + -0x13),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0x71);
  *(undefined8 *)(puVar1 + 4) = uVar3;
                    /* try { // try from 00d56cf0 to 00e56cfb has its CatchHandler @ 00d56d8c */
  puVar1[6] = param_1 * 3;
  uVar3 = _spCalloc((long)(param_1 * 3),4,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                    ,0xea);
  *(undefined8 *)(puVar1 + 8) = uVar3;
                    /* try { // try from 00d56cfc to 00e56dd3 has its CatchHandler @ 00d56bc0 */
  return puVar1;
}

