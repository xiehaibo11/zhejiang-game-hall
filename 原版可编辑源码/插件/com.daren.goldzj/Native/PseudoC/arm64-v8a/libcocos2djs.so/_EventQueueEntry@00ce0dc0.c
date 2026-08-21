
/* spine::EventQueueEntry::~EventQueueEntry() */

void __thiscall spine::EventQueueEntry::~EventQueueEntry(EventQueueEntry *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

