
long Cocos2dAttachmentLoader_create(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _spCalloc(1,0x20,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Cocos2dAttachmentLoader.cpp"
                    ,0x66);
  _spAttachmentLoader_init
            (lVar1,_Cocos2dAttachmentLoader_dispose,_Cocos2dAttachmentLoader_createAttachment,
             _Cocos2dAttachmentLoader_configureAttachment,_Cocos2dAttachmentLoader_disposeAttachment
            );
  uVar2 = spAtlasAttachmentLoader_create(param_1);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return lVar1;
}

