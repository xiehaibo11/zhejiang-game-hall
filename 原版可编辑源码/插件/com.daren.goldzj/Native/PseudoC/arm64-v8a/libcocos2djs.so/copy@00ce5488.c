
/* spine::ClippingAttachment::copy() */

VertexAttachment * __thiscall spine::ClippingAttachment::copy(ClippingAttachment *this)

{
  VertexAttachment *this_00;
  String *pSVar1;
  
  this_00 = SpineObject::operator_new
                      (0x88,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/ClippingAttachment.cpp"
                       ,0x36);
  pSVar1 = (String *)Attachment::getName((Attachment *)this);
  VertexAttachment::VertexAttachment(this_00,pSVar1);
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined ***)this_00 = &PTR__VertexAttachment_01c8ead0;
  VertexAttachment::copyTo((VertexAttachment *)this,this_00);
  *(undefined8 *)(this_00 + 0x80) = *(undefined8 *)(this + 0x80);
  return this_00;
}

