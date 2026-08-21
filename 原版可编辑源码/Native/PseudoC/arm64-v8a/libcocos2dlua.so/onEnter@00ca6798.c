
/* cocostudio::timeline::RotationFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::RotationFrame::onEnter(Frame *param_1,int param_2)

{
  if ((*(long **)(param_1 + 0x50) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_1 + 0x50) + 0x180))(*(undefined4 *)(param_1 + 0x58)),
     param_1[0x28] != (Frame)0x0)) {
    *(float *)(param_1 + 0x5c) =
         *(float *)((ulong)(uint)param_2 + 0x58) - *(float *)(param_1 + 0x58);
  }
  return;
}

