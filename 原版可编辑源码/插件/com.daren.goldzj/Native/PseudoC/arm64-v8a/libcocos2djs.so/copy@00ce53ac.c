
/* spine::BoundingBoxAttachment::copy() */

VertexAttachment * __thiscall spine::BoundingBoxAttachment::copy(BoundingBoxAttachment *this)

{
  VertexAttachment *this_00;
  String *pSVar1;
  
  this_00 = SpineObject::operator_new
                      (0x80,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/BoundingBoxAttachment.cpp"
                       ,0x2c);
  pSVar1 = (String *)Attachment::getName((Attachment *)this);
  VertexAttachment::VertexAttachment(this_00,pSVar1);
  *(undefined ***)this_00 = &PTR__VertexAttachment_01c8ea88;
  VertexAttachment::copyTo((VertexAttachment *)this,this_00);
  return this_00;
}

