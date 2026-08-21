
/* cocostudio::timeline::AlphaFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::AlphaFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) &&
     ((**(code **)(*plVar1 + 0x490))(plVar1,param_1[0x58]), param_1[0x28] != (Frame)0x0)) {
    *(uint *)(param_1 + 0x5c) =
         (uint)*(byte *)((ulong)(uint)param_2 + 0x58) - (uint)(byte)param_1[0x58];
  }
  return;
}

