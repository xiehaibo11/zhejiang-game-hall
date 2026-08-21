
/* spine::HashMap<int, bool>::Entry::~Entry() */

void __thiscall spine::HashMap<int,bool>::Entry::~Entry(Entry *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

