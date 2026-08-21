
undefined8 spPathAttachment_create(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _spCalloc(1,0x60,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathAttachment.c"
                    ,0x2c);
  _spVertexAttachment_init();
  _spAttachment_init(uVar1,param_1,4,_spPathAttachment_dispose);
  return uVar1;
}

