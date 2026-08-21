
/* spine::AtlasAttachmentLoader::newPathAttachment(spine::Skin&, spine::String const&) */

PathAttachment * __thiscall
spine::AtlasAttachmentLoader::newPathAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2)

{
  PathAttachment *this_00;
  
  this_00 = SpineObject::operator_new
                      (0xa8,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                       ,0x6c);
  PathAttachment::PathAttachment(this_00,param_2);
  return this_00;
}

