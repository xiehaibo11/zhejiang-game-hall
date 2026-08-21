
/* spine::animationCallback(spine::AnimationState*, spine::EventType, spine::TrackEntry*,
   spine::Event*) */

void spine::animationCallback(long param_1,undefined4 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d0e140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),param_3,param_2);
  return;
}

