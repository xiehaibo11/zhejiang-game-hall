
/* cocostudio::timeline::ActionTimelineCache::loadColorFrameWithFlatBuffers(flatbuffers::ColorFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadColorFrameWithFlatBuffers
          (ActionTimelineCache *this,ColorFrame *param_1)

{
  long lVar1;
  bool bVar2;
  Frame *pFVar3;
  ActionTimelineCache *this_00;
  undefined4 uVar4;
  ulong uVar5;
  ColorFrame *pCVar6;
  undefined2 local_40;
  Frame local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pFVar3 = (Frame *)ColorFrame::create();
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) ||
     (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8), uVar5 == 0)) {
    pCVar6 = (ColorFrame *)0x0;
  }
  else {
    pCVar6 = param_1 + uVar5;
  }
  cocos2d::Color3B::Color3B((Color3B *)&local_40,(uchar)pCVar6[1],(uchar)pCVar6[2],(uchar)pCVar6[3])
  ;
  pFVar3[0x5b] = local_3e;
  *(undefined2 *)(pFVar3 + 0x59) = local_40;
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
    bVar2 = param_1[uVar5] != (ColorFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar3 + 0x40))(pFVar3,bVar2);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar5 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar5 != 0)) &&
     (pCVar6 = param_1 + uVar5, (EasingData *)(pCVar6 + *(uint *)pCVar6) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar3,(EasingData *)(pCVar6 + *(uint *)pCVar6));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pFVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

