
/* cocostudio::timeline::ActionTimeline::clearLastFrameCallFunc() */

void __thiscall cocostudio::timeline::ActionTimeline::clearLastFrameCallFunc(ActionTimeline *this)

{
  ActionTimeline *pAVar1;
  
  pAVar1 = *(ActionTimeline **)(this + 0x110);
  *(undefined8 *)(this + 0x110) = 0;
  if (this + 0xf0 == pAVar1) {
                    /* WARNING: Could not recover jumptable at 0x00cab5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pAVar1 + 0x20))();
    return;
  }
  if (pAVar1 != (ActionTimeline *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cab5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pAVar1 + 0x28))();
    return;
  }
  return;
}

