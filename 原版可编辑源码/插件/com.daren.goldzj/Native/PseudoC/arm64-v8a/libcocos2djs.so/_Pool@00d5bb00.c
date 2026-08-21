
/* spine::Pool<spine::Vector<float> >::~Pool() */

void __thiscall spine::Pool<spine::Vector<float>>::~Pool(Pool<spine::Vector<float>> *this)

{
  void *extraout_x1;
  
  ~Pool(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

