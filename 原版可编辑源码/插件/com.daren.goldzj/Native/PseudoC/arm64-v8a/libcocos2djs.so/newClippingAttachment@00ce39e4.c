
/* spine::AtlasAttachmentLoader::newClippingAttachment(spine::Skin&, spine::String const&) */

ClippingAttachment * __thiscall
spine::AtlasAttachmentLoader::newClippingAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2)

{
  ClippingAttachment *this_00;
  
  this_00 = SpineObject::operator_new
                      (0x88,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                       ,0x76);
  ClippingAttachment::ClippingAttachment(this_00,param_2);
  return this_00;
}

