
/* spine::Color::~Color() */

void __thiscall spine::Color::~Color(Color *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

