
/* spine::PointAttachment::~PointAttachment() */

void __thiscall spine::PointAttachment::~PointAttachment(PointAttachment *this)

{
  void *extraout_x1;
  
  Attachment::~Attachment((Attachment *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

