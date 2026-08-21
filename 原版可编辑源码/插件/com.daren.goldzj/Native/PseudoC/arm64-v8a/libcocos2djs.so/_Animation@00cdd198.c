
/* spine::Animation::~Animation() */

void __thiscall spine::Animation::~Animation(Animation *this)

{
  void *extraout_x1;
  
  ~Animation(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

