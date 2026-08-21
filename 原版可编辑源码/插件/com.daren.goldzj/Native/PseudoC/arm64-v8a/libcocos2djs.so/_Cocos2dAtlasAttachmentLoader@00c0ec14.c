
/* spine::Cocos2dAtlasAttachmentLoader::~Cocos2dAtlasAttachmentLoader() */

void __thiscall
spine::Cocos2dAtlasAttachmentLoader::~Cocos2dAtlasAttachmentLoader
          (Cocos2dAtlasAttachmentLoader *this)

{
  void *extraout_x1;
  
  AttachmentLoader::~AttachmentLoader((AttachmentLoader *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

