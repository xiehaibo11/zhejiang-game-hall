
/* spine::trackEntryCallback(spine::AnimationState*, spine::EventType, spine::TrackEntry*,
   spine::Event*) */

void spine::trackEntryCallback(long param_1,int param_2,long param_3)

{
  _TrackEntryListeners *this;
  long *plVar1;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(*(long **)(param_1 + 0x10),param_3,param_2);
  if (param_2 == 4) {
    plVar1 = (long *)(param_3 + 0x10);
    this = (_TrackEntryListeners *)*plVar1;
    if (this != (_TrackEntryListeners *)0x0) {
      _TrackEntryListeners::~_TrackEntryListeners(this);
      operator_delete(this);
      if ((*(code **)(param_3 + 0x18) != (code *)0x0) && (*plVar1 != 0)) {
        (**(code **)(param_3 + 0x18))();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
    }
  }
  return;
}

