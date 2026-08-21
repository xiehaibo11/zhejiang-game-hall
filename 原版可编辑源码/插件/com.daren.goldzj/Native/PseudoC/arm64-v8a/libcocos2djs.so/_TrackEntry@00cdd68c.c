
/* non-virtual thunk to spine::TrackEntry::~TrackEntry() */

void __thiscall spine::TrackEntry::~TrackEntry(TrackEntry *this)

{
  void *extraout_x1;
  
  ~TrackEntry(this + -8);
  SpineObject::operator_delete((SpineObject *)(this + -8),extraout_x1);
  return;
}

