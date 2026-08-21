
/* spine::RTTI::~RTTI() */

void __thiscall spine::RTTI::~RTTI(RTTI *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

