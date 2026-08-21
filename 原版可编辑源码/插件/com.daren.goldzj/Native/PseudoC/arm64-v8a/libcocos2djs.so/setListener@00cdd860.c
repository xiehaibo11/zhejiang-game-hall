
/* spine::TrackEntry::setListener(void (*)(spine::AnimationState*, spine::EventType,
   spine::TrackEntry*, spine::Event*)) */

void __thiscall
spine::TrackEntry::setListener
          (TrackEntry *this,
          _func_void_AnimationState_ptr_EventType_TrackEntry_ptr_Event_ptr *param_1)

{
  *(_func_void_AnimationState_ptr_EventType_TrackEntry_ptr_Event_ptr **)(this + 0xf8) = param_1;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}

