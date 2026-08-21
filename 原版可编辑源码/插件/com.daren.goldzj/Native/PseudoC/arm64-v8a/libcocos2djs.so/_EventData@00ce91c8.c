
/* spine::EventData::~EventData() */

void __thiscall spine::EventData::~EventData(EventData *this)

{
  void *extraout_x1;
  
  ~EventData(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

