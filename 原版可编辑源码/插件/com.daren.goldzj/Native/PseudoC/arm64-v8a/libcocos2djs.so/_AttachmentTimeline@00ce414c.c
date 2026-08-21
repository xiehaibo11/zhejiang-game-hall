
/* spine::AttachmentTimeline::~AttachmentTimeline() */

void __thiscall spine::AttachmentTimeline::~AttachmentTimeline(AttachmentTimeline *this)

{
  void *extraout_x1;
  
  ~AttachmentTimeline(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

