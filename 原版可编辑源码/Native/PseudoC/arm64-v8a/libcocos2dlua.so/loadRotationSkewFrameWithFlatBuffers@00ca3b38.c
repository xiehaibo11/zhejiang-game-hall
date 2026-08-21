
/* cocostudio::timeline::ActionTimelineCache::loadRotationSkewFrameWithFlatBuffers(flatbuffers::ScaleFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadRotationSkewFrameWithFlatBuffers
          (ActionTimelineCache *this,ScaleFrame *param_1)

{
  ScaleFrame *pSVar1;
  int iVar2;
  bool bVar3;
  Frame *pFVar4;
  ActionTimelineCache *this_00;
  undefined4 uVar5;
  ulong uVar6;
  
  pFVar4 = (Frame *)RotationSkewFrame::create();
  iVar2 = *(int *)param_1;
  *(undefined8 *)(pFVar4 + 0x58) =
       *(undefined8 *)(param_1 + *(ushort *)(param_1 + (8 - (long)iVar2)));
  if ((ulong)*(ushort *)(param_1 + (4 - (long)iVar2)) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + *(ushort *)(param_1 + (4 - (long)iVar2)));
  }
  (**(code **)(*(long *)pFVar4 + 0x10))(pFVar4,uVar5);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[uVar6] != (ScaleFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar4 + 0x40))(pFVar4,bVar3);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar6 != 0)) &&
     (pSVar1 = param_1 + uVar6, (EasingData *)(pSVar1 + *(uint *)pSVar1) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar4,(EasingData *)(pSVar1 + *(uint *)pSVar1));
  }
  return pFVar4;
}

