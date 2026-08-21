
/* spine::EventTimeline::~EventTimeline() */

void __thiscall spine::EventTimeline::~EventTimeline(EventTimeline *this)

{
  void *extraout_x1;
  
  ~EventTimeline(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

