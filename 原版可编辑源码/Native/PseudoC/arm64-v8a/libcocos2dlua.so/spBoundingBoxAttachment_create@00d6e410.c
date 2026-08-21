
undefined8 spBoundingBoxAttachment_create(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _spCalloc(1,0x48,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/BoundingBoxAttachment.c"
                    ,0x2b);
                    /* try { // try from 00d6e43c to 00e6e45f has its CatchHandler @ 00d6e544 */
  _spVertexAttachment_init();
  _spAttachment_init(uVar1,param_1,1,_spBoundingBoxAttachment_dispose);
                    /* try { // try from 00d6e460 to 00e6e59b has its CatchHandler @ 00d6df24 */
  return uVar1;
}

