
/* cocostudio::timeline::ActionTimeline::clearFrameEventCallFunc() */

void __thiscall cocostudio::timeline::ActionTimeline::clearFrameEventCallFunc(ActionTimeline *this)

{
  ActionTimeline *pAVar1;
  
  pAVar1 = *(ActionTimeline **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (this + 0xc0 == pAVar1) {
                    /* WARNING: Could not recover jumptable at 0x00cab4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pAVar1 + 0x20))();
    return;
  }
  if (pAVar1 != (ActionTimeline *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cab4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pAVar1 + 0x28))();
    return;
  }
  return;
}

