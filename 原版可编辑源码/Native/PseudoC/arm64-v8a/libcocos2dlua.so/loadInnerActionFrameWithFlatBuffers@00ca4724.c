
/* cocostudio::timeline::ActionTimelineCache::loadInnerActionFrameWithFlatBuffers(flatbuffers::InnerActionFrame
   const*) */

InnerActionFrame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadInnerActionFrameWithFlatBuffers
          (ActionTimelineCache *this,InnerActionFrame *param_1)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  InnerActionFrame *this_00;
  ActionTimelineCache *this_01;
  undefined4 uVar4;
  InnerActionFrame *pIVar5;
  InnerActionFrame *pIVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (InnerActionFrame *)InnerActionFrame::create();
  pIVar5 = param_1 + -(long)*(int *)param_1;
  if (*(ushort *)pIVar5 < 9) {
    uVar8 = 0;
LAB_00ca4798:
    pIVar6 = (InnerActionFrame *)0x0;
  }
  else {
    if ((ulong)*(ushort *)(pIVar5 + 8) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + *(ushort *)(pIVar5 + 8));
    }
    if (*(ushort *)pIVar5 < 0xb) goto LAB_00ca4798;
    pIVar6 = (InnerActionFrame *)0x0;
    if ((ulong)*(ushort *)(pIVar5 + 10) != 0) {
      pIVar6 = param_1 + *(ushort *)(pIVar5 + 10) + *(uint *)(param_1 + *(ushort *)(pIVar5 + 10));
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,(char *)(pIVar6 + 4));
  pIVar5 = param_1 + -(long)*(int *)param_1;
  if (*(ushort *)pIVar5 < 0xd) {
    uVar9 = 0;
    uVar4 = 0;
    if (*(ushort *)pIVar5 < 5) goto LAB_00ca47f4;
    uVar1 = *(ushort *)(pIVar5 + 4);
  }
  else if ((ulong)*(ushort *)(pIVar5 + 0xc) == 0) {
    uVar9 = 0;
    uVar1 = *(ushort *)(pIVar5 + 4);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + *(ushort *)(pIVar5 + 0xc));
    uVar1 = *(ushort *)(pIVar5 + 4);
  }
  if ((ulong)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + uVar1);
  }
LAB_00ca47f4:
  (**(code **)(*(long *)this_00 + 0x10))(this_00,uVar4);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar7 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[uVar7] != (InnerActionFrame)0x0;
  }
  (**(code **)(*(long *)this_00 + 0x40))(this_00,bVar3);
  *(undefined4 *)(this_00 + 0x58) = uVar8;
  *(undefined4 *)(this_00 + 100) = uVar9;
  this_00[0x80] = (InnerActionFrame)0x1;
  this_01 = (ActionTimelineCache *)
            InnerActionFrame::setAnimationName(this_00,(basic_string *)local_60);
  if (((0xe < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar7 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 0xe), uVar7 != 0)) &&
     (pIVar5 = param_1 + uVar7, (EasingData *)(pIVar5 + *(uint *)pIVar5) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_01,(Frame *)this_00,(EasingData *)(pIVar5 + *(uint *)pIVar5))
    ;
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

