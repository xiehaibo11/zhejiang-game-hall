
undefined8 * spSkeletonClipping_create(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x48,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonClipping.c"
                     ,0x23);
  uVar2 = spTriangulator_create();
  *puVar1 = uVar2;
  uVar2 = spFloatArray_create(0x80);
  puVar1[1] = uVar2;
  uVar2 = spFloatArray_create(0x80);
  puVar1[2] = uVar2;
  uVar2 = spFloatArray_create(0x80);
  puVar1[3] = uVar2;
  uVar2 = spFloatArray_create(0x80);
  puVar1[4] = uVar2;
  uVar2 = spUnsignedShortArray_create(0x80);
  puVar1[5] = uVar2;
  uVar2 = spFloatArray_create(0x80);
  puVar1[6] = uVar2;
  return puVar1;
}

