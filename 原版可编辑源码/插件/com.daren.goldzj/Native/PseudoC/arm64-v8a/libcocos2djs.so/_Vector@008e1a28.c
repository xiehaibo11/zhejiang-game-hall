
/* spine::Vector<spine::String>::~Vector() */

void __thiscall spine::Vector<spine::String>::~Vector(Vector<spine::String> *this)

{
  void *extraout_x1;
  
  ~Vector(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

