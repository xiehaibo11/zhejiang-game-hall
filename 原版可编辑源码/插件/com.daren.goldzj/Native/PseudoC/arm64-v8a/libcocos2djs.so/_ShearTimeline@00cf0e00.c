
/* spine::ShearTimeline::~ShearTimeline() */

void __thiscall spine::ShearTimeline::~ShearTimeline(ShearTimeline *this)

{
  void *extraout_x1;
  
  TranslateTimeline::~TranslateTimeline((TranslateTimeline *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

