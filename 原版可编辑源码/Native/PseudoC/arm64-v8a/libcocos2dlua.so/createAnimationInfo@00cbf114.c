
/* cocostudio::FlatBuffersSerialize::createAnimationInfo(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createAnimationInfo
          (FlatBuffersSerialize *this,XMLElement *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  FlatBufferBuilder *this_00;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  long *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 == 0) {
    iVar4 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar4 = 0;
    plVar10 = (long *)((ulong)local_98 | 1);
    pcVar11 = (char *)((ulong)local_b0 | 1);
    do {
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar9 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar8);
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar9 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar8);
      uVar2 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar2 = local_90;
      }
      if (uVar2 == 10) {
        plVar1 = plVar10;
        if (((byte)local_98[0] & 1) != 0) {
          plVar1 = local_88;
        }
        iVar5 = memcmp(plVar1,"StartIndex",10);
        if (iVar5 == 0) {
          pcVar8 = pcVar11;
          if (((byte)local_b0[0] & 1) != 0) {
            pcVar8 = local_a0;
          }
          iVar6 = atoi(pcVar8);
        }
      }
      else if (uVar2 == 8) {
        plVar1 = plVar10;
        if (((byte)local_98[0] & 1) != 0) {
          plVar1 = local_88;
        }
        if (*plVar1 == 0x7865646e49646e45) {
          pcVar8 = pcVar11;
          if (((byte)local_b0[0] & 1) != 0) {
            pcVar8 = local_a0;
          }
          iVar4 = atoi(pcVar8);
        }
      }
      else if (uVar2 == 4) {
        plVar1 = plVar10;
        if (((byte)local_98[0] & 1) != 0) {
          plVar1 = local_88;
        }
        if ((int)*plVar1 == 0x656d614e) {
          uVar2 = (ulong)((byte)local_b0[0] >> 1);
          pcVar8 = pcVar11;
          if (((byte)local_b0[0] & 1) != 0) {
            uVar2 = local_a8;
            pcVar8 = local_a0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_80,pcVar8,uVar2);
        }
      }
      lVar9 = *(long *)(lVar9 + 0x38);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    } while (lVar9 != 0);
  }
  this_00 = *(FlatBufferBuilder **)(this + 0x38);
  uVar2 = (ulong)((byte)local_80[0] >> 1);
  pcVar11 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar2 = local_78;
    pcVar11 = local_70;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(this_00,pcVar11,uVar2);
  uVar7 = flatbuffers::CreateAnimationInfo(this_00,uVar7,iVar6,iVar4);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

