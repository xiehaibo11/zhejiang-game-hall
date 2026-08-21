
/* cocostudio::timeline::ColorFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::ColorFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)param_2;
  plVar1 = *(long **)(param_1 + 0x50);
  if ((plVar1 != (long *)0x0) &&
     ((**(code **)(*plVar1 + 0x4c0))(plVar1,param_1 + 0x59), param_1[0x28] != (Frame)0x0)) {
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(uVar2 + 0x59) - (uint)(byte)param_1[0x59];
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(uVar2 + 0x5a) - (uint)(byte)param_1[0x5a];
    *(uint *)(param_1 + 100) = (uint)*(byte *)(uVar2 + 0x5b) - (uint)(byte)param_1[0x5b];
  }
  return;
}

