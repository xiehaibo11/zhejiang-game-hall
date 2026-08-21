
/* spine::AtlasAttachmentLoader::newBoundingBoxAttachment(spine::Skin&, spine::String const&) */

BoundingBoxAttachment * __thiscall
spine::AtlasAttachmentLoader::newBoundingBoxAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2)

{
  BoundingBoxAttachment *this_00;
  
  this_00 = SpineObject::operator_new
                      (0x80,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                       ,0x67);
  BoundingBoxAttachment::BoundingBoxAttachment(this_00,param_2);
  return this_00;
}

