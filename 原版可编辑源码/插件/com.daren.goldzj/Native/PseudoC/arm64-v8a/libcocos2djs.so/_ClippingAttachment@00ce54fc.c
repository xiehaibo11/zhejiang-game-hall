
/* spine::ClippingAttachment::~ClippingAttachment() */

void __thiscall spine::ClippingAttachment::~ClippingAttachment(ClippingAttachment *this)

{
  void *extraout_x1;
  
  VertexAttachment::~VertexAttachment((VertexAttachment *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

