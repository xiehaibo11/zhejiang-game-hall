
/* spine::Pool<spine::Vector<int> >::~Pool() */

void __thiscall spine::Pool<spine::Vector<int>>::~Pool(Pool<spine::Vector<int>> *this)

{
  void *extraout_x1;
  
  ~Pool(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

