
/* spine::BoundingBoxAttachment::~BoundingBoxAttachment() */

void __thiscall spine::BoundingBoxAttachment::~BoundingBoxAttachment(BoundingBoxAttachment *this)

{
  void *extraout_x1;
  
  VertexAttachment::~VertexAttachment((VertexAttachment *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

