
/* spine::Skin::~Skin() */

void __thiscall spine::Skin::~Skin(Skin *this)

{
  void *extraout_x1;
  
  ~Skin(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

