
/* spine::EventQueueEntry::EventQueueEntry(spine::EventType, spine::TrackEntry*, spine::Event*) */

void __thiscall
spine::EventQueueEntry::EventQueueEntry
          (EventQueueEntry *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined ***)this = &PTR__SpineObject_01c8e3c0;
  return;
}

