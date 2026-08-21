
/* spine::PointAttachment::copy() */

Attachment * __thiscall spine::PointAttachment::copy(PointAttachment *this)

{
  Attachment *this_00;
  String *pSVar1;
  
  this_00 = SpineObject::operator_new
                      (0x30,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/PointAttachment.cpp"
                       ,0x55);
  pSVar1 = (String *)Attachment::getName((Attachment *)this);
  Attachment::Attachment(this_00,pSVar1);
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined ***)this_00 = &PTR__Attachment_01c8f138;
  *(undefined8 *)(this_00 + 0x24) = *(undefined8 *)(this + 0x24);
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
  return this_00;
}

