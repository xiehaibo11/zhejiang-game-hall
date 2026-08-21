
/* cocostudio::timeline::ZOrderFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::ZOrderFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ca8358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}

