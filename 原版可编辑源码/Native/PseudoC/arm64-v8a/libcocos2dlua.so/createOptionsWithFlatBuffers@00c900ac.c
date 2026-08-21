
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::SliderReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::SliderReader::createOptionsWithFlatBuffers
          (SliderReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long *plVar17;
  char *pcVar18;
  XMLNode *this_00;
  char *pcVar19;
  size_t sVar20;
  SliderReader *pSVar21;
  char *pcVar22;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *pvVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  int local_288;
  undefined8 local_278;
  int local_264;
  ulong local_260;
  ulong uStack_258;
  char *local_250;
  ulong local_240;
  ulong uStack_238;
  char *local_230;
  ulong local_220;
  ulong uStack_218;
  char *local_210;
  ulong local_200;
  ulong uStack_1f8;
  char *local_1f0;
  ulong local_1e0;
  ulong uStack_1d8;
  char *local_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  ulong uStack_1c0;
  char *local_1b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1b0 [16];
  void *local_1a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_198 [8];
  ulong local_190;
  int *local_188;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_180 [8];
  ulong local_178;
  int *local_170;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_168 [8];
  ulong local_160;
  char *local_158;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_150 [8];
  ulong local_148;
  char *local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138 [8];
  ulong local_130;
  char *local_128;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_120 [8];
  ulong local_118;
  char *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [8];
  ulong local_100;
  char *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [8];
  ulong local_e8;
  char *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  char *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  char *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar17 = (long *)WidgetReader::getInstance();
  uVar7 = (**(code **)(*plVar17 + 0x28))(plVar17,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_120,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_138,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_150,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_168,"");
  lVar26 = *(long *)(param_1 + 0x60);
  if (lVar26 == 0) {
    local_288 = 0;
    bVar5 = true;
  }
  else {
    local_288 = 0;
    bVar5 = true;
    do {
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_180,pcVar18);
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_198,pcVar18);
      bVar2 = local_180[0];
      uVar28 = (ulong)((byte)local_180[0] >> 1);
      if (((byte)local_180[0] & 1) != 0) {
        uVar28 = local_178;
      }
      if (uVar28 == 0xc) {
        piVar24 = (int *)((ulong)local_180 | 1);
        if (((byte)local_180[0] & 1) != 0) {
          piVar24 = local_170;
        }
        iVar8 = memcmp(piVar24,"DisplayState",0xc);
        if (iVar8 == 0) {
          uVar28 = (ulong)((byte)local_198[0] >> 1);
          if (((byte)local_198[0] & 1) != 0) {
            uVar28 = local_190;
          }
          if (uVar28 == 4) {
            piVar24 = (int *)((ulong)local_198 | 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar24 = local_188;
            }
            bVar5 = *piVar24 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
      }
      else if (uVar28 == 0xb) {
        piVar24 = (int *)((ulong)local_180 | 1);
        if (((byte)local_180[0] & 1) != 0) {
          piVar24 = local_170;
        }
        iVar8 = memcmp(piVar24,"PercentInfo",0xb);
        if (iVar8 == 0) {
          piVar24 = (int *)((ulong)local_198 | 1);
          if (((byte)local_198[0] & 1) != 0) {
            piVar24 = local_188;
          }
          local_288 = atoi((char *)piVar24);
        }
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (((byte)local_198[0] & 1) != 0) {
        operator_delete(local_188);
        bVar2 = local_180[0];
      }
      if (((byte)bVar2 & 1) != 0) {
        operator_delete(local_170);
      }
    } while (lVar26 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    local_278 = 0;
    local_264 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    piVar27 = (int *)((ulong)local_180 | 1);
    piVar24 = (int *)((ulong)local_198 | 1);
    local_278 = 0;
    iVar10 = 0;
    iVar8 = 0;
    pcVar18 = (char *)((ulong)&local_1c8 | 1);
    local_264 = 0;
    do {
      pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_180,pcVar19);
      uVar28 = (ulong)((byte)local_180[0] >> 1);
      if (((byte)local_180[0] & 1) != 0) {
        uVar28 = local_178;
      }
      if (uVar28 == 0x10) {
        piVar1 = piVar27;
        if (((byte)local_180[0] & 1) != 0) {
          piVar1 = local_170;
        }
        iVar9 = memcmp(piVar1,"BallDisabledData",0x10);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar21 = (SliderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar28 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar28 = local_178;
            }
            if (uVar28 == 5) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_138,pcVar19,uVar28);
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar28);
              }
            }
            else if (uVar28 == 4) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_120,pcVar19,uVar28);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_238 = 0;
                local_230 = (char *)0x0;
                local_240 = 0;
                if ((local_1c8 & 1) == 0) {
                  local_240 = CONCAT44(uStack_1c4,local_1c8);
                  uStack_238 = uStack_1c0;
                  local_230 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_240 = (ulong)(byte)((int)uStack_1c0 << 1);
                    pcVar22 = (char *)((ulong)&local_240 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c9081c;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar22 = operator_new(uVar28);
                    local_240 = uVar28 | 1;
                    uStack_238 = uVar4;
                    local_230 = pcVar22;
LAB_00c9081c:
                    pSVar21 = memcpy(pcVar22,pcVar19,uVar4);
                  }
                  pcVar22[uVar4] = '\0';
                }
                local_264 = getResourceType(pSVar21,&local_240);
                if ((local_240 & 1) != 0) {
                  operator_delete(local_230);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if (local_264 == 1) {
            pvVar23 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar24;
            uVar28 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar28 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            puVar25 = *(uint **)(pvVar23 + 8);
            if (puVar25 < *(uint **)(pvVar23 + 0x10)) {
LAB_00c90fb4:
              *puVar25 = local_1c8;
              *(uint **)(pvVar23 + 8) = puVar25 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar23,(Offset *)&local_1c8);
            }
          }
joined_r0x00c90fc0:
          if (((byte)local_1b0[0] & 1) != 0) {
            operator_delete(local_1a0);
          }
joined_r0x00c91084:
          if (((byte)local_198[0] & 1) != 0) {
            operator_delete(local_188);
          }
        }
      }
      else if (uVar28 == 0xf) {
        piVar1 = piVar27;
        if (((byte)local_180[0] & 1) != 0) {
          piVar1 = local_170;
        }
        iVar9 = memcmp(piVar1,"BallPressedData",0xf);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar21 = (SliderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar28 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar28 = local_178;
            }
            if (uVar28 == 5) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_108,pcVar19,uVar28);
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar28);
              }
            }
            else if (uVar28 == 4) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_f0,pcVar19,uVar28);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_218 = 0;
                local_210 = (char *)0x0;
                local_220 = 0;
                if ((local_1c8 & 1) == 0) {
                  local_220 = CONCAT44(uStack_1c4,local_1c8);
                  uStack_218 = uStack_1c0;
                  local_210 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_220 = (ulong)(byte)((int)uStack_1c0 << 1);
                    pcVar22 = (char *)((ulong)&local_220 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c90a6c;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar22 = operator_new(uVar28);
                    local_220 = uVar28 | 1;
                    uStack_218 = uVar4;
                    local_210 = pcVar22;
LAB_00c90a6c:
                    pSVar21 = memcpy(pcVar22,pcVar19,uVar4);
                  }
                  pcVar22[uVar4] = '\0';
                }
                iVar8 = getResourceType(pSVar21,&local_220);
                if ((local_220 & 1) != 0) {
                  operator_delete(local_210);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if (iVar8 == 1) {
            pvVar23 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar24;
            uVar28 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar28 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            puVar25 = *(uint **)(pvVar23 + 8);
            if (puVar25 < *(uint **)(pvVar23 + 0x10)) goto LAB_00c91010;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (pvVar23,(Offset *)&local_1c8);
          }
          goto LAB_00c91018;
        }
        iVar9 = memcmp(piVar1,"ProgressBarData",0xf);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar21 = (SliderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar28 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar28 = local_178;
            }
            if (uVar28 == 5) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_168,pcVar19,uVar28);
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar28);
              }
            }
            else if (uVar28 == 4) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_150,pcVar19,uVar28);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_258 = 0;
                local_250 = (char *)0x0;
                local_260 = 0;
                if ((local_1c8 & 1) == 0) {
                  local_260 = CONCAT44(uStack_1c4,local_1c8);
                  uStack_258 = uStack_1c0;
                  local_250 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_260 = (ulong)(byte)((int)uStack_1c0 << 1);
                    pcVar22 = (char *)((ulong)&local_260 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c90f1c;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar22 = operator_new(uVar28);
                    local_260 = uVar28 | 1;
                    uStack_258 = uVar4;
                    local_250 = pcVar22;
LAB_00c90f1c:
                    pSVar21 = memcpy(pcVar22,pcVar19,uVar4);
                  }
                  pcVar22[uVar4] = '\0';
                }
                uVar11 = getResourceType(pSVar21,&local_260);
                local_278._4_4_ = (int)(local_278 >> 0x20);
                local_278 = CONCAT44(local_278._4_4_,uVar11);
                if ((local_260 & 1) != 0) {
                  operator_delete(local_250);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if ((int)local_278 == 1) {
            pvVar23 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar24;
            uVar28 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar28 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            puVar25 = *(uint **)(pvVar23 + 8);
            if (puVar25 < *(uint **)(pvVar23 + 0x10)) goto LAB_00c90fb4;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (pvVar23,(Offset *)&local_1c8);
          }
          goto joined_r0x00c90fc0;
        }
      }
      else if (uVar28 == 0xe) {
        piVar1 = piVar27;
        if (((byte)local_180[0] & 1) != 0) {
          piVar1 = local_170;
        }
        iVar9 = memcmp(piVar1,"BackGroundData",0xe);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar21 = (SliderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar28 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar28 = local_178;
            }
            if (uVar28 == 5) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a8,pcVar19,uVar28);
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar28);
              }
            }
            else if (uVar28 == 4) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_90,pcVar19,uVar28);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_1d8 = 0;
                local_1d0 = (char *)0x0;
                local_1e0 = 0;
                if ((local_1c8 & 1) == 0) {
                  local_1e0 = CONCAT44(uStack_1c4,local_1c8);
                  uStack_1d8 = uStack_1c0;
                  local_1d0 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_1e0 = (ulong)(byte)((int)uStack_1c0 << 1);
                    pcVar22 = (char *)((ulong)&local_1e0 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c90cbc;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar22 = operator_new(uVar28);
                    local_1e0 = uVar28 | 1;
                    uStack_1d8 = uVar4;
                    local_1d0 = pcVar22;
LAB_00c90cbc:
                    pSVar21 = memcpy(pcVar22,pcVar19,uVar4);
                  }
                  pcVar22[uVar4] = '\0';
                }
                iVar10 = getResourceType(pSVar21,&local_1e0);
                if ((local_1e0 & 1) != 0) {
                  operator_delete(local_1d0);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if (iVar10 == 1) {
            pvVar23 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar24;
            uVar28 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar28 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            puVar25 = *(uint **)(pvVar23 + 8);
            if (puVar25 < *(uint **)(pvVar23 + 0x10)) {
LAB_00c91010:
              *puVar25 = local_1c8;
              *(uint **)(pvVar23 + 8) = puVar25 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar23,(Offset *)&local_1c8);
            }
          }
        }
        else {
          iVar9 = memcmp(piVar1,"BallNormalData",0xe);
          if (iVar9 != 0) goto LAB_00c91040;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar21 = (SliderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar28 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar28 = local_178;
            }
            if (uVar28 == 5) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d8,pcVar19,uVar28);
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar28);
              }
            }
            else if (uVar28 == 4) {
              piVar1 = piVar27;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar28 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,pcVar19,uVar28);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_1f8 = 0;
                local_1f0 = (char *)0x0;
                local_200 = 0;
                if ((local_1c8 & 1) == 0) {
                  local_200 = CONCAT44(uStack_1c4,local_1c8);
                  uStack_1f8 = uStack_1c0;
                  local_1f0 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_200 = (ulong)(byte)((int)uStack_1c0 << 1);
                    pcVar22 = (char *)((ulong)&local_200 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c905bc;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar22 = operator_new(uVar28);
                    local_200 = uVar28 | 1;
                    uStack_1f8 = uVar4;
                    local_1f0 = pcVar22;
LAB_00c905bc:
                    pSVar21 = memcpy(pcVar22,pcVar19,uVar4);
                  }
                  pcVar22[uVar4] = '\0';
                }
                uVar11 = getResourceType(pSVar21,&local_200);
                local_278 = CONCAT44(uVar11,(int)local_278);
                if ((local_200 & 1) != 0) {
                  operator_delete(local_1f0);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          local_278._4_4_ = (int)(local_278 >> 0x20);
          bVar6 = local_278._4_4_ == 1;
          if (bVar6) {
            pvVar23 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar24;
            uVar28 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar28 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            puVar25 = *(uint **)(pvVar23 + 8);
            if (puVar25 < *(uint **)(pvVar23 + 0x10)) goto LAB_00c91010;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (pvVar23,(Offset *)&local_1c8);
          }
        }
LAB_00c91018:
        if (((byte)local_1b0[0] & 1) != 0) {
          operator_delete(local_1a0);
        }
        goto joined_r0x00c91084;
      }
LAB_00c91040:
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_180[0] & 1) != 0) {
        operator_delete(local_170);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar28 = (ulong)((byte)local_90[0] >> 1);
  pcVar18 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar28 = local_88;
    pcVar18 = local_80;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar28 = (ulong)((byte)local_a8[0] >> 1);
  pcVar18 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar28 = local_a0;
    pcVar18 = local_98;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar11 = flatbuffers::CreateResourceData(param_2,uVar11,uVar12,iVar10);
  uVar28 = (ulong)((byte)local_c0[0] >> 1);
  pcVar18 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar28 = local_b8;
    pcVar18 = local_b0;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar28 = (ulong)((byte)local_d8[0] >> 1);
  pcVar18 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar28 = local_d0;
    pcVar18 = local_c8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar12 = flatbuffers::CreateResourceData(param_2,uVar12,uVar13,local_278._4_4_);
  uVar28 = (ulong)((byte)local_f0[0] >> 1);
  pcVar18 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar28 = local_e8;
    pcVar18 = local_e0;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar28 = (ulong)((byte)local_108[0] >> 1);
  pcVar18 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar28 = local_100;
    pcVar18 = local_f8;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar13 = flatbuffers::CreateResourceData(param_2,uVar13,uVar14,iVar8);
  uVar28 = (ulong)((byte)local_120[0] >> 1);
  pcVar18 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar28 = local_118;
    pcVar18 = local_110;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar28 = (ulong)((byte)local_138[0] >> 1);
  pcVar18 = (char *)((ulong)local_138 | 1);
  if (((byte)local_138[0] & 1) != 0) {
    uVar28 = local_130;
    pcVar18 = local_128;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar14 = flatbuffers::CreateResourceData(param_2,uVar14,uVar15,local_264);
  uVar28 = (ulong)((byte)local_150[0] >> 1);
  pcVar18 = (char *)((ulong)local_150 | 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar28 = local_148;
    pcVar18 = local_140;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar28 = (ulong)((byte)local_168[0] >> 1);
  pcVar18 = (char *)((ulong)local_168 | 1);
  if (((byte)local_168[0] & 1) != 0) {
    uVar28 = local_160;
    pcVar18 = local_158;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar28);
  uVar15 = flatbuffers::CreateResourceData(param_2,uVar15,uVar16,local_278 & 0xffffffff);
  uVar7 = flatbuffers::CreateSliderOptions
                    (param_2,uVar7,uVar11,uVar12,uVar13,uVar14,uVar15,local_288,bVar5);
  if (((byte)local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (((byte)local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (((byte)local_138[0] & 1) != 0) {
    operator_delete(local_128);
  }
  if (((byte)local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

