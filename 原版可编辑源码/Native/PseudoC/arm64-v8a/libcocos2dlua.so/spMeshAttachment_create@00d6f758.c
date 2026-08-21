
long spMeshAttachment_create(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _spCalloc(1,0xe0,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/MeshAttachment.c"
                    ,0x31);
  _spVertexAttachment_init();
  spColor_setFromFloats(0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar1 + 0xa8);
  _spAttachment_init(lVar1,param_1,2,_spMeshAttachment_dispose);
  return lVar1;
}

