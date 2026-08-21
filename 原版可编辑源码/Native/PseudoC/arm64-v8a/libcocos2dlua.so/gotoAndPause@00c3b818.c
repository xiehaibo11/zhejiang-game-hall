
/* cocostudio::ArmatureAnimation::gotoAndPause(int) */

void cocostudio::ArmatureAnimation::gotoAndPause(int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  (**(code **)(*plVar1 + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x00c3b848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}

