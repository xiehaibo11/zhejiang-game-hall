
undefined8 * spTriangulator_create(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x38,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Triangulator.c"
                     ,0x24);
  uVar2 = spArrayFloatArray_create(0x10);
  *puVar1 = uVar2;
  uVar2 = spArrayShortArray_create(0x10);
  puVar1[1] = uVar2;
  uVar2 = spShortArray_create(0x80);
  puVar1[2] = uVar2;
  uVar2 = spIntArray_create(0x80);
  puVar1[3] = uVar2;
  uVar2 = spShortArray_create(0x80);
  puVar1[4] = uVar2;
  uVar2 = spArrayFloatArray_create(0x10);
  puVar1[5] = uVar2;
  uVar2 = spArrayShortArray_create(0x80);
  puVar1[6] = uVar2;
                    /* try { // try from 00d6c8b0 to 00e6ca2b has its CatchHandler @ 00d6c8b0
                       catch() { ... } // from try @ 00d6c8b0 with catch @ 00d6c8b0
                       catch() { ... } // from try @ 00d6ca34 with catch @ 00d6c8b0 */
  return puVar1;
}

