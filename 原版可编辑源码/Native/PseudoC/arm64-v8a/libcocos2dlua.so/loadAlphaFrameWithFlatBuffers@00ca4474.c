
/* cocostudio::timeline::ActionTimelineCache::loadAlphaFrameWithFlatBuffers(flatbuffers::IntFrame
   const*) */

long * __thiscall
cocostudio::timeline::ActionTimelineCache::loadAlphaFrameWithFlatBuffers
          (ActionTimelineCache *this,IntFrame *param_1)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  undefined4 uVar4;
  IntFrame *pIVar5;
  ulong uVar6;
  undefined1 uVar7;
  
  plVar3 = (long *)AlphaFrame::create();
  pIVar5 = param_1 + -(long)*(int *)param_1;
  uVar1 = *(ushort *)pIVar5;
  if (uVar1 < 9) {
    uVar4 = 0;
    *(undefined1 *)(plVar3 + 0xb) = 0;
    if (uVar1 < 5) goto LAB_00ca44dc;
    uVar1 = *(ushort *)(pIVar5 + 4);
  }
  else {
    uVar7 = 0;
    if ((ulong)*(ushort *)(pIVar5 + 8) != 0) {
      uVar7 = (undefined1)*(undefined4 *)(param_1 + *(ushort *)(pIVar5 + 8));
    }
    *(undefined1 *)(plVar3 + 0xb) = uVar7;
    uVar1 = *(ushort *)(pIVar5 + 4);
  }
  if ((ulong)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + uVar1);
  }
LAB_00ca44dc:
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar6 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = param_1[uVar6] != (IntFrame)0x0;
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,bVar2);
  return plVar3;
}

