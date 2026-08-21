
/* cocostudio::LoadingBarReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::LoadingBarReader::createOptionsWithFlatBuffers
          (LoadingBarReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  ulong __n;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  char *pcVar13;
  XMLNode *this_00;
  char *pcVar14;
  size_t sVar15;
  LoadingBarReader *pLVar16;
  char *__dest;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  int local_128;
  ulong local_120;
  ulong uStack_118;
  char *local_110;
  uint local_100;
  undefined4 uStack_fc;
  ulong uStack_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [8];
  ulong local_c8;
  char *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  int *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  plVar12 = (long *)WidgetReader::getInstance();
  uVar7 = (**(code **)(*plVar12 + 0x28))(plVar12,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  lVar17 = *(long *)(param_1 + 0x60);
  if (lVar17 == 0) {
    local_128 = 0x50;
    bVar2 = 0;
  }
  else {
    local_128 = 0x50;
    bVar2 = 0;
    do {
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b8,pcVar13);
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_d0,pcVar13);
      bVar4 = local_b8[0];
      uVar18 = (ulong)((byte)local_b8[0] >> 1);
      if (((byte)local_b8[0] & 1) != 0) {
        uVar18 = local_b0;
      }
      if (uVar18 == 0xc) {
        piVar19 = (int *)((ulong)local_b8 | 1);
        if (((byte)local_b8[0] & 1) != 0) {
          piVar19 = local_a8;
        }
        iVar8 = memcmp(piVar19,"ProgressType",0xc);
        if (iVar8 == 0) {
          uVar18 = (ulong)((byte)local_d0[0] >> 1);
          if (((byte)local_d0[0] & 1) != 0) {
            uVar18 = local_c8;
          }
          if (uVar18 == 0xd) {
            pcVar13 = (char *)((ulong)local_d0 | 1);
            if (((byte)local_d0[0] & 1) != 0) {
              pcVar13 = local_c0;
            }
            iVar8 = memcmp(pcVar13,"Left_To_Right",0xd);
            bVar6 = iVar8 == 0;
          }
          else {
            bVar6 = false;
          }
          bVar2 = bVar6 ^ 1;
        }
        else {
          iVar8 = memcmp(piVar19,"ProgressInfo",0xc);
          if (iVar8 == 0) {
            pcVar13 = (char *)((ulong)local_d0 | 1);
            if (((byte)local_d0[0] & 1) != 0) {
              pcVar13 = local_c0;
            }
            local_128 = atoi(pcVar13);
          }
        }
      }
      lVar17 = *(long *)(lVar17 + 0x38);
      if (((byte)local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
        bVar4 = local_b8[0];
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_a8);
      }
    } while (lVar17 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar8 = 0;
  if (this_00 != (XMLNode *)0x0) {
    piVar19 = (int *)((ulong)local_b8 | 1);
    pcVar13 = (char *)((ulong)&local_100 | 1);
    do {
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b8,pcVar14);
      uVar18 = (ulong)((byte)local_b8[0] >> 1);
      if (((byte)local_b8[0] & 1) != 0) {
        uVar18 = local_b0;
      }
      if (uVar18 == 0xd) {
        piVar1 = piVar19;
        if (((byte)local_b8[0] & 1) != 0) {
          piVar1 = local_a8;
        }
        iVar9 = memcmp(piVar1,"ImageFileData",0xd);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_d0,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_e8,"");
          lVar17 = *(long *)(this_00 + 0x60);
          while (lVar17 != 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
            sVar15 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_b8,pcVar14,sVar15);
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
            pLVar16 = (LoadingBarReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_100,pcVar14);
            pcVar14 = local_f0;
            __n = uStack_f8;
            uVar18 = (ulong)((byte)local_b8[0] >> 1);
            if (((byte)local_b8[0] & 1) != 0) {
              uVar18 = local_b0;
            }
            if (uVar18 == 5) {
              piVar1 = piVar19;
              if (((byte)local_b8[0] & 1) != 0) {
                piVar1 = local_a8;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar18 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_100 & 1) != 0) {
                  uVar18 = uStack_f8;
                  pcVar14 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a0,pcVar14,uVar18);
                uVar18 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_100 & 1) != 0) {
                  uVar18 = uStack_f8;
                  pcVar14 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d0,pcVar14,uVar18);
              }
            }
            else if (uVar18 == 4) {
              piVar1 = piVar19;
              if (((byte)local_b8[0] & 1) != 0) {
                piVar1 = local_a8;
              }
              if (*piVar1 == 0x68746150) {
                uVar18 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_100 & 1) != 0) {
                  uVar18 = uStack_f8;
                  pcVar14 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_88,pcVar14,uVar18);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_118 = 0;
                local_110 = (char *)0x0;
                local_120 = 0;
                if ((local_100 & 1) == 0) {
                  local_120 = CONCAT44(uStack_fc,local_100);
                  uStack_118 = uStack_f8;
                  local_110 = local_f0;
                }
                else {
                  if (0xffffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_f8 < 0x17) {
                    local_120 = (ulong)(byte)((int)uStack_f8 << 1);
                    __dest = (char *)((ulong)&local_120 | 1);
                    if (uStack_f8 != 0) goto LAB_00c8871c;
                  }
                  else {
                    uVar18 = uStack_f8 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar18);
                    local_120 = uVar18 | 1;
                    uStack_118 = __n;
                    local_110 = __dest;
LAB_00c8871c:
                    pLVar16 = memcpy(__dest,pcVar14,__n);
                  }
                  __dest[__n] = '\0';
                }
                iVar8 = getResourceType(pLVar16,&local_120);
                if ((local_120 & 1) != 0) {
                  operator_delete(local_110);
                }
              }
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((local_100 & 1) != 0) {
              operator_delete(local_f0);
            }
          }
          if (iVar8 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar14 = (char *)((ulong)local_d0 | 1);
            uVar18 = (ulong)((byte)local_d0[0] >> 1);
            if (((byte)local_d0[0] & 1) != 0) {
              pcVar14 = local_c0;
              uVar18 = local_c8;
            }
            local_100 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar14,uVar18);
            puVar3 = *(uint **)(this_01 + 8);
            if (puVar3 < *(uint **)(this_01 + 0x10)) {
              *puVar3 = local_100;
              *(uint **)(this_01 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_100);
            }
          }
          if (((byte)local_e8[0] & 1) != 0) {
            operator_delete(local_d8);
          }
          if (((byte)local_d0[0] & 1) != 0) {
            operator_delete(local_c0);
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar18 = (ulong)((byte)local_88[0] >> 1);
  pcVar13 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar18 = local_80;
    pcVar13 = local_78;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar18);
  uVar18 = (ulong)((byte)local_a0[0] >> 1);
  pcVar13 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar18 = local_98;
    pcVar13 = local_90;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar18);
  uVar10 = flatbuffers::CreateResourceData(param_2,uVar10,uVar11,iVar8);
  uVar7 = flatbuffers::CreateLoadingBarOptions(param_2,uVar7,uVar10,local_128,bVar2);
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

