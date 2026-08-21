
/* cocostudio::SpriteReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::SpriteReader::createOptionsWithFlatBuffers
          (SpriteReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  ulong __n;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  XMLNode *this_00;
  char *pcVar11;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  size_t sVar12;
  SpriteReader *pSVar13;
  char *__dest;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  int local_12c;
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
  uint local_b8;
  int iStack_b4;
  ulong local_b0;
  long *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar10 = (long *)NodeReader::getInstance();
  uVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  uVar7 = 1;
  local_12c = 0x303;
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar6 = 0;
  if (this_00 != (XMLNode *)0x0) {
    plVar10 = (long *)((ulong)&local_b8 | 1);
    pcVar14 = (char *)((ulong)local_d0 | 1);
    pcVar16 = (char *)((ulong)&local_100 | 1);
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,pcVar11);
      uVar15 = (ulong)((byte)local_b8._0_1_ >> 1);
      if ((local_b8 & 1) != 0) {
        uVar15 = local_b0;
      }
      if (uVar15 == 9) {
        plVar1 = plVar10;
        if ((local_b8 & 1) != 0) {
          plVar1 = local_a8;
        }
        iVar5 = memcmp(plVar1,"BlendFunc",9);
        if (iVar5 == 0) {
          lVar17 = *(long *)(this_00 + 0x60);
          while (lVar17 != 0) {
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
            sVar12 = strlen(pcVar11);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b8,pcVar11,sVar12);
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_d0,pcVar11);
            uVar15 = (ulong)((byte)local_b8._0_1_ >> 1);
            if ((local_b8 & 1) != 0) {
              uVar15 = local_b0;
            }
            if (uVar15 == 3) {
              plVar1 = plVar10;
              if ((local_b8 & 1) != 0) {
                plVar1 = local_a8;
              }
              iVar5 = memcmp(plVar1,"Src",3);
              if (iVar5 == 0) {
                pcVar11 = pcVar14;
                if (((byte)local_d0[0] & 1) != 0) {
                  pcVar11 = local_c0;
                }
                uVar7 = atoi(pcVar11);
              }
              else {
                iVar5 = memcmp(plVar1,"Dst",3);
                if (iVar5 == 0) {
                  pcVar11 = pcVar14;
                  if (((byte)local_d0[0] & 1) != 0) {
                    pcVar11 = local_c0;
                  }
                  local_12c = atoi(pcVar11);
                }
              }
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if (((byte)local_d0[0] & 1) != 0) {
              operator_delete(local_c0);
            }
          }
        }
      }
      else if (uVar15 == 8) {
        plVar1 = plVar10;
        if ((local_b8 & 1) != 0) {
          plVar1 = local_a8;
        }
        if (*plVar1 == 0x61746144656c6946) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_d0,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_e8,"");
          lVar17 = *(long *)(this_00 + 0x60);
          while (lVar17 != 0) {
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
            sVar12 = strlen(pcVar11);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b8,pcVar11,sVar12);
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
            pSVar13 = (SpriteReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_100,pcVar11);
            pcVar11 = local_f0;
            __n = uStack_f8;
            uVar15 = (ulong)((byte)local_b8._0_1_ >> 1);
            if ((local_b8 & 1) != 0) {
              uVar15 = local_b0;
            }
            if (uVar15 == 5) {
              plVar1 = plVar10;
              if ((local_b8 & 1) != 0) {
                plVar1 = local_a8;
              }
              iVar5 = memcmp(plVar1,"Plist",5);
              if (iVar5 == 0) {
                uVar15 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar11 = pcVar16;
                if ((local_100 & 1) != 0) {
                  uVar15 = uStack_f8;
                  pcVar11 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a0,pcVar11,uVar15);
                uVar15 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar11 = pcVar16;
                if ((local_100 & 1) != 0) {
                  uVar15 = uStack_f8;
                  pcVar11 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d0,pcVar11,uVar15);
              }
            }
            else if (uVar15 == 4) {
              plVar1 = plVar10;
              if ((local_b8 & 1) != 0) {
                plVar1 = local_a8;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar15 = (ulong)((byte)local_100._0_1_ >> 1);
                pcVar11 = pcVar16;
                if ((local_100 & 1) != 0) {
                  uVar15 = uStack_f8;
                  pcVar11 = local_f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_88,pcVar11,uVar15);
              }
              else if ((int)*plVar1 == 0x65707954) {
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
                    if (uStack_f8 != 0) goto LAB_00cd6f8c;
                  }
                  else {
                    uVar15 = uStack_f8 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar15);
                    local_120 = uVar15 | 1;
                    uStack_118 = __n;
                    local_110 = __dest;
LAB_00cd6f8c:
                    pSVar13 = memcpy(__dest,pcVar11,__n);
                  }
                  __dest[__n] = '\0';
                }
                iVar6 = getResourceType(pSVar13,&local_120);
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
          if (iVar6 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar11 = pcVar14;
            uVar15 = (ulong)((byte)local_d0[0] >> 1);
            if (((byte)local_d0[0] & 1) != 0) {
              pcVar11 = local_c0;
              uVar15 = local_c8;
            }
            local_100 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar15);
            puVar2 = *(uint **)(this_01 + 8);
            if (puVar2 < *(uint **)(this_01 + 0x10)) {
              *puVar2 = local_100;
              *(uint **)(this_01 + 8) = puVar2 + 1;
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
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  iStack_b4 = local_12c;
  uVar15 = (ulong)((byte)local_88[0] >> 1);
  pcVar14 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar15 = local_80;
    pcVar14 = local_78;
  }
  local_b8 = uVar7;
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar14,uVar15);
  uVar15 = (ulong)((byte)local_a0[0] >> 1);
  pcVar14 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar15 = local_98;
    pcVar14 = local_90;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar14,uVar15);
  uVar8 = flatbuffers::CreateResourceData(param_2,uVar8,uVar9,iVar6);
  uVar4 = flatbuffers::CreateSpriteOptions(param_2,uVar4,uVar8,&local_b8);
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

