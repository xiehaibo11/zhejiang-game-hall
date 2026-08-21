
/* cocostudio::timeline::ActionTimelineCache::loadBlendFrameWithFlatBuffers(flatbuffers::BlendFrame
   const*) */

long * __thiscall
cocostudio::timeline::ActionTimelineCache::loadBlendFrameWithFlatBuffers
          (ActionTimelineCache *this,BlendFrame *param_1)

{
  BlendFrame *pBVar1;
  bool bVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar3 = (long *)BlendFuncFrame::create();
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) {
    uVar5 = 0x30300000000;
    uVar6 = 1;
  }
  else {
    uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8);
    uVar5 = 0x30300000000;
    uVar6 = 1;
    if ((uVar7 != 0) && (pBVar1 = param_1 + uVar7, pBVar1 != (BlendFrame *)0x0)) {
      uVar6 = (ulong)*(uint *)pBVar1;
      uVar5 = (ulong)*(uint *)(pBVar1 + 4) << 0x20;
    }
  }
  plVar3[0xb] = uVar5 | uVar6;
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar6 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + uVar6);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar6 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = param_1[uVar6] != (BlendFrame)0x0;
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,bVar2);
  return plVar3;
}

