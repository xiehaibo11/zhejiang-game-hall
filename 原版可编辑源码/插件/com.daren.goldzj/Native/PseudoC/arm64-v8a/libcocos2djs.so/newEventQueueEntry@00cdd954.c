
/* spine::EventQueue::newEventQueueEntry(spine::EventType, spine::TrackEntry*, spine::Event*) */

void __thiscall
spine::EventQueue::newEventQueueEntry
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR__SpineObject_01c8e3c0;
  return;
}

