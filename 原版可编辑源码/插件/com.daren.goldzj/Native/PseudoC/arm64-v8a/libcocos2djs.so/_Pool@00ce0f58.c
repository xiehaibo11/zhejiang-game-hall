
/* spine::Pool<spine::TrackEntry>::~Pool() */

void __thiscall spine::Pool<spine::TrackEntry>::~Pool(Pool<spine::TrackEntry> *this)

{
  void *extraout_x1;
  
  ~Pool(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

