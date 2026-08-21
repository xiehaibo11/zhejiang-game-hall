
/* cocostudio::timeline::RotationSkewFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::RotationSkewFrame::onEnter(Frame *param_1,int param_2)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x1b0))(*(undefined4 *)(param_1 + 0x58));
    (**(code **)(**(long **)(param_1 + 0x50) + 0x1d0))(*(undefined4 *)(param_1 + 0x5c));
    if (param_1[0x28] != (Frame)0x0) {
      *(ulong *)(param_1 + 0x60) =
           CONCAT44((float)((ulong)*(undefined8 *)((ulong)(uint)param_2 + 0x58) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                    (float)*(undefined8 *)((ulong)(uint)param_2 + 0x58) -
                    (float)*(undefined8 *)(param_1 + 0x58));
    }
  }
  return;
}

