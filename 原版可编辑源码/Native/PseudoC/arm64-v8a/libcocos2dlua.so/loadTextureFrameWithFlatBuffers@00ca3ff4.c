
/* cocostudio::timeline::ActionTimelineCache::loadTextureFrameWithFlatBuffers(flatbuffers::TextureFrame
   const*) */

Frame * __thiscall
cocostudio::timeline::ActionTimelineCache::loadTextureFrameWithFlatBuffers
          (ActionTimelineCache *this,TextureFrame *param_1)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  Frame *pFVar4;
  size_t sVar5;
  long *plVar6;
  ActionTimelineCache *this_00;
  undefined4 uVar7;
  ulong uVar8;
  TextureFrame *pTVar9;
  TextureFrame *pTVar10;
  TextureFrame *pTVar11;
  char *__dest;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  byte local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_70,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  pFVar4 = (Frame *)TextureFrame::create();
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) ||
     (uVar8 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8), uVar8 == 0)) {
    pTVar11 = (TextureFrame *)0x0;
  }
  else {
    pTVar11 = param_1 + uVar8 + *(uint *)(param_1 + uVar8);
  }
  pTVar9 = pTVar11 + -(long)*(int *)pTVar11;
  if (*(ushort *)pTVar9 < 9) {
    if (4 < *(ushort *)pTVar9) goto LAB_00ca4120;
    pTVar10 = (TextureFrame *)0x0;
LAB_00ca413c:
    sVar5 = strlen((char *)(pTVar10 + 4));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(&local_70,(char *)(pTVar10 + 4),sVar5);
    plVar6 = (long *)cocos2d::FileUtils::getInstance();
    uVar8 = (**(code **)(*plVar6 + 0x128))(plVar6,&local_70);
    if ((uVar8 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(&local_70,"",0);
    }
    else {
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar6 + 0x50))(local_a0,plVar6,&local_70);
      uVar8 = (ulong)(local_a0[0] >> 1);
      pcVar2 = (char *)((ulong)local_a0 | 1);
      if ((local_a0[0] & 1) != 0) {
        uVar8 = local_98;
        pcVar2 = local_90;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(&local_70,pcVar2,uVar8);
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
    }
  }
  else {
    if (((ulong)*(ushort *)(pTVar9 + 8) == 0) || (*(int *)(pTVar11 + *(ushort *)(pTVar9 + 8)) == 0))
    {
LAB_00ca4120:
      pTVar10 = (TextureFrame *)0x0;
      if ((ulong)*(ushort *)(pTVar9 + 4) != 0) {
        pTVar10 = pTVar11 + *(ushort *)(pTVar9 + 4) + *(uint *)(pTVar11 + *(ushort *)(pTVar9 + 4));
      }
      goto LAB_00ca413c;
    }
    if (*(int *)(pTVar11 + *(ushort *)(pTVar9 + 8)) == 1) {
      pTVar10 = (TextureFrame *)0x0;
      if ((ulong)*(ushort *)(pTVar9 + 6) != 0) {
        pTVar10 = pTVar11 + *(ushort *)(pTVar9 + 6) + *(uint *)(pTVar11 + *(ushort *)(pTVar9 + 6));
      }
      sVar5 = strlen((char *)(pTVar10 + 4));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(local_88,(char *)(pTVar10 + 4),sVar5);
      plVar6 = (long *)cocos2d::FileUtils::getInstance();
      uVar8 = (**(code **)(*plVar6 + 0x128))(plVar6,local_88);
      if ((uVar8 & 1) == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(&local_70,"",0);
      }
      else {
        if (*(ushort *)(pTVar11 + -(long)*(int *)pTVar11) < 5) {
          pTVar9 = (TextureFrame *)0x0;
        }
        else {
          uVar8 = (ulong)*(ushort *)(pTVar11 + -(long)*(int *)pTVar11 + 4);
          pTVar9 = (TextureFrame *)0x0;
          if (uVar8 != 0) {
            pTVar9 = pTVar11 + uVar8 + *(uint *)(pTVar11 + uVar8);
          }
        }
        sVar5 = strlen((char *)(pTVar9 + 4));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(&local_70,(char *)(pTVar9 + 4),sVar5);
      }
    }
  }
  pcVar2 = local_60;
  uStack_b8 = 0;
  local_b0 = (char *)0x0;
  local_c0 = 0;
  if (((byte)local_70 & 1) == 0) {
    local_c0 = CONCAT71(uStack_6f,local_70);
    uStack_b8 = uStack_68;
    local_b0 = local_60;
    goto LAB_00ca4260;
  }
  if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_68 < 0x17) {
    __dest = (char *)((ulong)&local_c0 | 1);
    local_c0 = (ulong)(byte)((int)uStack_68 << 1);
    if (uStack_68 != 0) goto LAB_00ca424c;
  }
  else {
    uVar8 = uStack_68 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_c0 = uVar8 | 1;
    uStack_b8 = uStack_68;
    local_b0 = __dest;
LAB_00ca424c:
    memcpy(__dest,pcVar2,uStack_68);
  }
  __dest[uStack_68] = '\0';
LAB_00ca4260:
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pFVar4 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_c0) {
    uVar8 = local_c0 >> 1 & 0x7f;
    pcVar2 = (char *)((ulong)&local_c0 | 1);
    if ((local_c0 & 1) != 0) {
      uVar8 = uStack_b8;
      pcVar2 = local_b0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pFVar4 + 0x60),pcVar2,uVar8);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar8 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar8 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + uVar8);
  }
  (**(code **)(*(long *)pFVar4 + 0x10))(pFVar4,uVar7);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
     (uVar8 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar8 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[uVar8] != (TextureFrame)0x0;
  }
  this_00 = (ActionTimelineCache *)(**(code **)(*(long *)pFVar4 + 0x40))(pFVar4,bVar3);
  if (((10 < *(ushort *)(param_1 + -(long)*(int *)param_1)) &&
      (uVar8 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 10), uVar8 != 0)) &&
     (pTVar11 = param_1 + uVar8, (EasingData *)(pTVar11 + *(uint *)pTVar11) != (EasingData *)0x0)) {
    loadEasingDataWithFlatBuffers(this_00,pFVar4,(EasingData *)(pTVar11 + *(uint *)pTVar11));
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
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

