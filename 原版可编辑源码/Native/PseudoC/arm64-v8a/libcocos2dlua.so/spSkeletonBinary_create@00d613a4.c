
void spSkeletonBinary_create(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = spAtlasAttachmentLoader_create();
                    /* try { // try from 00d613cc to 00e613d3 has its CatchHandler @ 00d61518 */
  puVar2 = (undefined4 *)
           _spCalloc(1,0x30,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                     ,0x3c);
  *(undefined8 *)(puVar2 + 2) = uVar1;
  *puVar2 = 0x3f800000;
  puVar2[6] = 1;
  return;
}

