
/* cocostudio::timeline::PositionFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::PositionFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) &&
     ((**(code **)(*plVar1 + 0x98))(plVar1,param_1 + 0x58), param_1[0x28] != (Frame)0x0)) {
    *(ulong *)(param_1 + 0x60) =
         CONCAT44((float)((ulong)*(undefined8 *)((ulong)(uint)param_2 + 0x58) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20),
                  (float)*(undefined8 *)((ulong)(uint)param_2 + 0x58) -
                  (float)*(undefined8 *)(param_1 + 0x58));
  }
  return;
}

