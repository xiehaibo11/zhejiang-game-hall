
/* cocostudio::timeline::ActionTimelineCache::loadAnchorPointFrameWithFlatBuffers(flatbuffers::ScaleFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadAnchorPointFrameWithFlatBuffers
          (ActionTimelineCache *this,ScaleFrame *param_1)

{
  ScaleFrame *pSVar1;
  bool bVar2;
  Frame *pFVar3;
  ActionTimelineCache *this_00;
  undefined4 uVar4;
  ulong uVar5;
  
  pFVar3 = (Frame *)AnchorPointFrame::create();
  *(undefined8 *)(pFVar3 + 0x60) =
       *(undefined8 *)(param_1 + *(ushort *)(param_1 + (8 - (long)*(int *)param_1)));
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + uVar5);
  }
  (**(code **)(*(long *)pFVar3 + 0x10))(pFVar3,uVar4);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar5 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = param_1[uVar5] != (ScaleFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar3 + 0x40))(pFVar3,bVar2);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar5 != 0)) &&
     (pSVar1 = param_1 + uVar5, (EasingData *)(pSVar1 + *(uint *)pSVar1) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar3,(EasingData *)(pSVar1 + *(uint *)pSVar1));
  }
  return pFVar3;
}

