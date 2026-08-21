
long spAtlasAttachmentLoader_create(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _spCalloc(1,0x20,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.c"
                    ,0x60);
                    /* try { // try from 00d6d6e0 to 00e6d6e3 has its CatchHandler @ 00d6d71c */
  _spAttachmentLoader_init
            (lVar1,_spAttachmentLoader_deinit,_spAtlasAttachmentLoader_createAttachment,0,0);
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}

