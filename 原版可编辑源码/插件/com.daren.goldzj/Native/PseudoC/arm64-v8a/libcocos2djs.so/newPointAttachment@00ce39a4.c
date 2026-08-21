
/* spine::AtlasAttachmentLoader::newPointAttachment(spine::Skin&, spine::String const&) */

PointAttachment * __thiscall
spine::AtlasAttachmentLoader::newPointAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2)

{
  PointAttachment *this_00;
  
  this_00 = SpineObject::operator_new
                      (0x30,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                       ,0x71);
  PointAttachment::PointAttachment(this_00,param_2);
  return this_00;
}

