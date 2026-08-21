
long spRegionAttachment_create(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00d5ee48 to 00e5ee57 has its CatchHandler @ 00d5f658 */
  lVar1 = _spCalloc(1,0xb8,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/RegionAttachment.c"
                    ,0x2e);
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
                    /* try { // try from 00d5ee58 to 00e5ee6b has its CatchHandler @ 00d5f654 */
                    /* try { // try from 00d5ee6c to 00e5ee77 has its CatchHandler @ 00d5f650 */
  spColor_setFromFloats(0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar1 + 0x44);
  _spAttachment_init(lVar1,param_1,0,_spRegionAttachment_dispose);
                    /* try { // try from 00d5ee90 to 00e5ee9f has its CatchHandler @ 00d5f648 */
  return lVar1;
}

