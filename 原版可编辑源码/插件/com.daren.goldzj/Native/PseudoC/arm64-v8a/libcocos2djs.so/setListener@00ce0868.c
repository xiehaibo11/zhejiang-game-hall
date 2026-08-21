
/* spine::AnimationState::setListener(void (*)(spine::AnimationState*, spine::EventType,
   spine::TrackEntry*, spine::Event*)) */

void __thiscall
spine::AnimationState::setListener
          (AnimationState *this,
          _func_void_AnimationState_ptr_EventType_TrackEntry_ptr_Event_ptr *param_1)

{
  *(_func_void_AnimationState_ptr_EventType_TrackEntry_ptr_Event_ptr **)(this + 0xb8) = param_1;
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}

