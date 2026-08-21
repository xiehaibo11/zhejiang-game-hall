
/* spine::AtlasAttachmentLoader::~AtlasAttachmentLoader() */

void __thiscall spine::AtlasAttachmentLoader::~AtlasAttachmentLoader(AtlasAttachmentLoader *this)

{
  void *extraout_x1;
  
  AttachmentLoader::~AttachmentLoader((AttachmentLoader *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

