
/* cocostudio::timeline::ActionTimelineCache::loadVisibleFrameWithFlatBuffers(flatbuffers::BoolFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadVisibleFrameWithFlatBuffers
          (ActionTimelineCache *this,BoolFrame *param_1)

{
  ushort uVar1;
  Frame FVar2;
  bool bVar3;
  Frame *pFVar4;
  ActionTimelineCache *this_00;
  undefined4 uVar5;
  BoolFrame *pBVar6;
  ulong uVar7;
  
  pFVar4 = (Frame *)VisibleFrame::create();
  pBVar6 = param_1 + -(long)*(int *)param_1;
  uVar1 = *(ushort *)pBVar6;
  if (uVar1 < 9) {
    pFVar4[0x58] = (Frame)0x1;
    if (4 < uVar1) {
      uVar1 = *(ushort *)(pBVar6 + 4);
      goto joined_r0x00ca38c8;
    }
  }
  else {
    if ((ulong)*(ushort *)(pBVar6 + 8) == 0) {
      FVar2 = (Frame)0x1;
    }
    else {
      FVar2 = (Frame)(param_1[*(ushort *)(pBVar6 + 8)] != (BoolFrame)0x0);
    }
    pFVar4[0x58] = FVar2;
    uVar1 = *(ushort *)(pBVar6 + 4);
joined_r0x00ca38c8:
    if ((ulong)uVar1 != 0) {
      uVar5 = *(undefined4 *)(param_1 + uVar1);
      goto LAB_00ca38e8;
    }
  }
  uVar5 = 0;
LAB_00ca38e8:
  (**(code **)(*(long *)pFVar4 + 0x10))(pFVar4,uVar5);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar7 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[uVar7] != (BoolFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar4 + 0x40))(pFVar4,bVar3);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar7 != 0)) &&
     (pBVar6 = param_1 + uVar7, (EasingData *)(pBVar6 + *(uint *)pBVar6) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar4,(EasingData *)(pBVar6 + *(uint *)pBVar6));
  }
  return pFVar4;
}

