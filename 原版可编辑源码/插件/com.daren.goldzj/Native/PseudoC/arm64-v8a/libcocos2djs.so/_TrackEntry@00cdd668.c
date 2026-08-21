
/* spine::TrackEntry::~TrackEntry() */

void __thiscall spine::TrackEntry::~TrackEntry(TrackEntry *this)

{
  void *extraout_x1;
  
  ~TrackEntry(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

