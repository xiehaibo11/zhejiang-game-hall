
/* cocostudio::timeline::ActionTimelineCache::loadPositionFrameWithFlatBuffers(flatbuffers::PointFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadPositionFrameWithFlatBuffers
          (ActionTimelineCache *this,PointFrame *param_1)

{
  PointFrame *pPVar1;
  bool bVar2;
  Frame *pFVar3;
  ActionTimelineCache *this_00;
  undefined4 uVar4;
  ulong uVar5;
  
  pFVar3 = (Frame *)PositionFrame::create();
  *(undefined8 *)(pFVar3 + 0x58) =
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
    bVar2 = param_1[uVar5] != (PointFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar3 + 0x40))(pFVar3,bVar2);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar5 != 0)) &&
     (pPVar1 = param_1 + uVar5, (EasingData *)(pPVar1 + *(uint *)pPVar1) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar3,(EasingData *)(pPVar1 + *(uint *)pPVar1));
  }
  return pFVar3;
}

