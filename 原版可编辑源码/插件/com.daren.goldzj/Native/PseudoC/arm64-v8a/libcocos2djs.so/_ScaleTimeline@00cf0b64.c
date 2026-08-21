
/* spine::ScaleTimeline::~ScaleTimeline() */

void __thiscall spine::ScaleTimeline::~ScaleTimeline(ScaleTimeline *this)

{
  void *extraout_x1;
  
  TranslateTimeline::~TranslateTimeline((TranslateTimeline *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

