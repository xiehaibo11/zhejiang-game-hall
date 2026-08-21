
/* spine::animationCallback(spAnimationState*, spEventType, spTrackEntry*, spEvent*) */

void spine::animationCallback(long param_1,undefined4 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d4ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x560))(*(long **)(param_1 + 0x30),param_3,param_2);
  return;
}

