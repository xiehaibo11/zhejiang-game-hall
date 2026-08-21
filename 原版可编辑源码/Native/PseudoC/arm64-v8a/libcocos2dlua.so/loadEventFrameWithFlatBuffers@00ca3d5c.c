
/* cocostudio::timeline::ActionTimelineCache::loadEventFrameWithFlatBuffers(flatbuffers::EventFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadEventFrameWithFlatBuffers
          (ActionTimelineCache *this,EventFrame *param_1)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  Frame *pFVar4;
  ActionTimelineCache *this_00;
  undefined4 uVar5;
  ulong uVar6;
  EventFrame *pEVar7;
  char *__dest;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pFVar4 = (Frame *)EventFrame::create();
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) {
    pEVar7 = (EventFrame *)0x0;
  }
  else {
    uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8);
    pEVar7 = (EventFrame *)0x0;
    if (uVar6 != 0) {
      pEVar7 = param_1 + uVar6 + *(uint *)(param_1 + uVar6);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_70,(char *)(pEVar7 + 4));
  pcVar2 = local_60;
  uVar6 = (ulong)((byte)local_70 >> 1);
  if (((byte)local_70 & 1) != 0) {
    uVar6 = uStack_68;
  }
  if (uVar6 == 0) goto LAB_00ca3ea4;
  uStack_88 = 0;
  local_80 = (char *)0x0;
  local_90 = 0;
  if (((byte)local_70 & 1) == 0) {
    local_90 = CONCAT71(uStack_6f,local_70);
    uStack_88 = uStack_68;
    local_80 = local_60;
  }
  else {
    if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_68 < 0x17) {
      __dest = (char *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uStack_68 << 1);
      if (uStack_68 != 0) goto LAB_00ca3e50;
    }
    else {
      uVar6 = uStack_68 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      local_90 = uVar6 | 1;
      uStack_88 = uStack_68;
      local_80 = __dest;
LAB_00ca3e50:
      memcpy(__dest,pcVar2,uStack_68);
    }
    __dest[uStack_68] = '\0';
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pFVar4 + 0x58) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_90) {
    uVar6 = local_90 >> 1 & 0x7f;
    pcVar2 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      uVar6 = uStack_88;
      pcVar2 = local_80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pFVar4 + 0x58),pcVar2,uVar6);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_00ca3ea4:
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + uVar6);
  }
  (**(code **)(*(long *)pFVar4 + 0x10))(pFVar4,uVar5);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[uVar6] != (EventFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar4 + 0x40))(pFVar4,bVar3);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar6 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar6 != 0)) &&
     (pEVar7 = param_1 + uVar6, (EasingData *)(pEVar7 + *(uint *)pEVar7) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar4,(EasingData *)(pEVar7 + *(uint *)pEVar7));
  }
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pFVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

