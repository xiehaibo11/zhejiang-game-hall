
/* cocostudio::timeline::AnchorPointFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::AnchorPointFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 != (long *)0x0) {
    if (param_1[0x28] != (Frame)0x0) {
      *(ulong *)(param_1 + 0x58) =
           CONCAT44((float)((ulong)*(undefined8 *)((ulong)(uint)param_2 + 0x60) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                    (float)*(undefined8 *)((ulong)(uint)param_2 + 0x60) -
                    (float)*(undefined8 *)(param_1 + 0x60));
    }
                    /* WARNING: Could not recover jumptable at 0x00ca73a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x148))(plVar1,param_1 + 0x60);
    return;
  }
  return;
}

