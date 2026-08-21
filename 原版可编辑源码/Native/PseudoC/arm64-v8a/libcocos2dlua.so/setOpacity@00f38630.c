
/* cocos2d::ProgressTimer::setOpacity(unsigned char) */

void cocos2d::ProgressTimer::setOpacity(uchar param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(ulong)param_1;
  (**(code **)(*(long *)plVar1[0x62] + 0x490))();
                    /* WARNING: Could not recover jumptable at 0x00f38664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x528))(plVar1);
  return;
}

