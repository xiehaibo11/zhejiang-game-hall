
/* spine::trackEntryCallback(spAnimationState*, spEventType, spTrackEntry*, spEvent*) */

void spine::trackEntryCallback(long param_1,int param_2,long param_3)

{
  _TrackEntryListeners *this;
  
                    /* try { // try from 00d4eea0 to 00e4eea7 has its CatchHandler @ 00d4efa8 */
                    /* try { // try from 00d4eea8 to 00e4efc3 has its CatchHandler @ 00d4ee5c */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x568))(*(long **)(param_1 + 0x30),param_3,param_2);
  if ((param_2 == 4) &&
     (this = *(_TrackEntryListeners **)(param_3 + 0x90), this != (_TrackEntryListeners *)0x0)) {
    _TrackEntryListeners::~_TrackEntryListeners(this);
    operator_delete(this);
    return;
  }
  return;
}

