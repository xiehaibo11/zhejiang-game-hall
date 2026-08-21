
/* spine::Vector<spine::Skin::AttachmentMap::Entry>::~Vector() */

void __thiscall
spine::Vector<spine::Skin::AttachmentMap::Entry>::~Vector
          (Vector<spine::Skin::AttachmentMap::Entry> *this)

{
  void *extraout_x1;
  
  ~Vector(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

