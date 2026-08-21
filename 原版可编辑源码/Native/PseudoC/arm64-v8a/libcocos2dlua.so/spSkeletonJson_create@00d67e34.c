
void spSkeletonJson_create(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = spAtlasAttachmentLoader_create();
                    /* catch() { ... } // from try @ 00d67dd0 with catch @ 00d67e44 */
                    /* try { // try from 00d67e60 to 00e67f03 has its CatchHandler @ 00d67e60
                       catch() { ... } // from try @ 00d67e60 with catch @ 00d67e60
                       catch() { ... } // from try @ 00d68210 with catch @ 00d67e60 */
  puVar2 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.c"
                     ,0x3c);
  *(undefined8 *)(puVar2 + 2) = uVar1;
  *puVar2 = 0x3f800000;
  puVar2[6] = 1;
  return;
}

