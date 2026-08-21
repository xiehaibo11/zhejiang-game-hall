
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::CheckBoxReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::CheckBoxReader::createOptionsWithFlatBuffers
          (CheckBoxReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
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
  char *pcVar21;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  int *piVar22;
  uint *puVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  int local_294;
  undefined8 local_280;
  int local_26c;
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
  uVar8 = (**(code **)(*plVar17 + 0x28))(plVar17,param_1,param_2);
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
  lVar24 = *(long *)(param_1 + 0x60);
  if (lVar24 == 0) {
    bVar6 = false;
    bVar5 = true;
  }
  else {
    bVar6 = false;
    bVar5 = true;
    do {
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_180,pcVar18);
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_198,pcVar18);
      bVar2 = local_180[0];
      uVar26 = (ulong)((byte)local_180[0] >> 1);
      if (((byte)local_180[0] & 1) != 0) {
        uVar26 = local_178;
      }
      if (uVar26 == 0xc) {
        piVar22 = (int *)((ulong)local_180 | 1);
        if (((byte)local_180[0] & 1) != 0) {
          piVar22 = local_170;
        }
        iVar9 = memcmp(piVar22,"CheckedState",0xc);
        if (iVar9 == 0) {
          uVar26 = (ulong)((byte)local_198[0] >> 1);
          if (((byte)local_198[0] & 1) != 0) {
            uVar26 = local_190;
          }
          if (uVar26 == 4) {
            piVar22 = (int *)((ulong)local_198 | 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar22 = local_188;
            }
            bVar6 = *piVar22 == 0x65757254;
          }
          else {
            bVar6 = false;
          }
        }
        else {
          iVar9 = memcmp(piVar22,"DisplayState",0xc);
          if (iVar9 == 0) {
            uVar26 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              uVar26 = local_190;
            }
            if (uVar26 == 4) {
              piVar22 = (int *)((ulong)local_198 | 1);
              if (((byte)local_198[0] & 1) != 0) {
                piVar22 = local_188;
              }
              bVar5 = *piVar22 == 0x65757254;
            }
            else {
              bVar5 = false;
            }
          }
        }
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (((byte)local_198[0] & 1) != 0) {
        operator_delete(local_188);
        bVar2 = local_180[0];
      }
      if (((byte)bVar2 & 1) != 0) {
        operator_delete(local_170);
      }
    } while (lVar24 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    local_294 = 0;
    local_280 = 0;
    iVar9 = 0;
    local_26c = 0;
  }
  else {
    piVar25 = (int *)((ulong)local_180 | 1);
    piVar22 = (int *)((ulong)local_198 | 1);
    iVar9 = 0;
    pcVar18 = (char *)((ulong)&local_1c8 | 1);
    local_26c = 0;
    local_280 = 0;
    local_294 = 0;
    do {
      pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_180,pcVar19);
      uVar26 = (ulong)((byte)local_180[0] >> 1);
      if (((byte)local_180[0] & 1) != 0) {
        uVar26 = local_178;
      }
      if (uVar26 == 0x13) {
        piVar1 = piVar25;
        if (((byte)local_180[0] & 1) != 0) {
          piVar1 = local_170;
        }
        iVar10 = memcmp(piVar1,"PressedBackFileData",0x13);
        if (iVar10 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar24 = *(long *)(this_00 + 0x60);
          while (lVar24 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar26 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar26 = local_178;
            }
            if (uVar26 == 5) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar10 = memcmp(piVar1,"Plist",5);
              if (iVar10 == 0) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d8,pcVar19,uVar26);
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar26);
              }
            }
            else if (uVar26 == 4) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,pcVar19,uVar26);
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
                    pcVar21 = (char *)((ulong)&local_200 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c7922c;
                  }
                  else {
                    uVar26 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar21 = operator_new(uVar26);
                    local_200 = uVar26 | 1;
                    uStack_1f8 = uVar4;
                    local_1f0 = pcVar21;
LAB_00c7922c:
                    memcpy(pcVar21,pcVar19,uVar4);
                  }
                  pcVar21[uVar4] = '\0';
                }
                iVar9 = (**(code **)(*(long *)this + 0x40))(this,&local_200);
                if ((local_200 & 1) != 0) {
                  operator_delete(local_1f0);
                }
              }
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if (iVar9 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar22;
            uVar26 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar26 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar26);
            puVar23 = *(uint **)(this_01 + 8);
            if (puVar23 < *(uint **)(this_01 + 0x10)) {
LAB_00c795e8:
              *puVar23 = local_1c8;
              *(uint **)(this_01 + 8) = puVar23 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_1c8);
            }
          }
        }
        else {
          iVar10 = memcmp(piVar1,"DisableBackFileData",0x13);
          if (iVar10 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_198,"");
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_1b0,"");
            lVar24 = *(long *)(this_00 + 0x60);
            while (lVar24 != 0) {
              pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
              sVar20 = strlen(pcVar19);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_180,pcVar19,sVar20);
              pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1c8,pcVar19);
              pcVar19 = local_1b8;
              uVar4 = uStack_1c0;
              uVar26 = (ulong)((byte)local_180[0] >> 1);
              if (((byte)local_180[0] & 1) != 0) {
                uVar26 = local_178;
              }
              if (uVar26 == 5) {
                piVar1 = piVar25;
                if (((byte)local_180[0] & 1) != 0) {
                  piVar1 = local_170;
                }
                iVar10 = memcmp(piVar1,"Plist",5);
                if (iVar10 == 0) {
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_138,pcVar19,uVar26);
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_198,pcVar19,uVar26);
                }
              }
              else if (uVar26 == 4) {
                piVar1 = piVar25;
                if (((byte)local_180[0] & 1) != 0) {
                  piVar1 = local_170;
                }
                if (*piVar1 == 0x68746150) {
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_120,pcVar19,uVar26);
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
                      pcVar21 = (char *)((ulong)&local_240 | 1);
                      if (uStack_1c0 != 0) goto LAB_00c79490;
                    }
                    else {
                      uVar26 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                      pcVar21 = operator_new(uVar26);
                      local_240 = uVar26 | 1;
                      uStack_238 = uVar4;
                      local_230 = pcVar21;
LAB_00c79490:
                      memcpy(pcVar21,pcVar19,uVar4);
                    }
                    pcVar21[uVar4] = '\0';
                  }
                  uVar11 = (**(code **)(*(long *)this + 0x40))(this,&local_240);
                  local_280._4_4_ = (int)(local_280 >> 0x20);
                  local_280 = CONCAT44(local_280._4_4_,uVar11);
                  if ((local_240 & 1) != 0) {
                    operator_delete(local_230);
                  }
                }
              }
              lVar24 = *(long *)(lVar24 + 0x38);
              if ((local_1c8 & 1) != 0) {
                operator_delete(local_1b8);
              }
            }
            if ((int)local_280 == 1) {
              this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)FlatBuffersSerialize::getInstance();
              piVar1 = piVar22;
              uVar26 = (ulong)((byte)local_198[0] >> 1);
              if (((byte)local_198[0] & 1) != 0) {
                piVar1 = local_188;
                uVar26 = local_190;
              }
              local_1c8 = flatbuffers::FlatBufferBuilder::CreateString
                                    (param_2,(char *)piVar1,uVar26);
              puVar23 = *(uint **)(this_01 + 8);
              if (puVar23 < *(uint **)(this_01 + 0x10)) goto LAB_00c795e8;
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_1c8);
            }
          }
          else {
            iVar10 = memcmp(piVar1,"NodeDisableFileData",0x13);
            if (iVar10 != 0) goto LAB_00c79610;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_198,"");
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_1b0,"");
            lVar24 = *(long *)(this_00 + 0x60);
            while (lVar24 != 0) {
              pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
              sVar20 = strlen(pcVar19);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_180,pcVar19,sVar20);
              pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1c8,pcVar19);
              pcVar19 = local_1b8;
              uVar4 = uStack_1c0;
              uVar26 = (ulong)((byte)local_180[0] >> 1);
              if (((byte)local_180[0] & 1) != 0) {
                uVar26 = local_178;
              }
              if (uVar26 == 5) {
                piVar1 = piVar25;
                if (((byte)local_180[0] & 1) != 0) {
                  piVar1 = local_170;
                }
                iVar10 = memcmp(piVar1,"Plist",5);
                if (iVar10 == 0) {
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_168,pcVar19,uVar26);
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_198,pcVar19,uVar26);
                }
              }
              else if (uVar26 == 4) {
                piVar1 = piVar25;
                if (((byte)local_180[0] & 1) != 0) {
                  piVar1 = local_170;
                }
                if (*piVar1 == 0x68746150) {
                  uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                  pcVar19 = pcVar18;
                  if ((local_1c8 & 1) != 0) {
                    uVar26 = uStack_1c0;
                    pcVar19 = local_1b8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_150,pcVar19,uVar26);
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
                      pcVar21 = (char *)((ulong)&local_260 | 1);
                      if (uStack_1c0 != 0) goto LAB_00c78dcc;
                    }
                    else {
                      uVar26 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                      pcVar21 = operator_new(uVar26);
                      local_260 = uVar26 | 1;
                      uStack_258 = uVar4;
                      local_250 = pcVar21;
LAB_00c78dcc:
                      memcpy(pcVar21,pcVar19,uVar4);
                    }
                    pcVar21[uVar4] = '\0';
                  }
                  local_294 = (**(code **)(*(long *)this + 0x40))(this,&local_260);
                  if ((local_260 & 1) != 0) {
                    operator_delete(local_250);
                  }
                }
              }
              lVar24 = *(long *)(lVar24 + 0x38);
              if ((local_1c8 & 1) != 0) {
                operator_delete(local_1b8);
              }
            }
            if (local_294 == 1) {
              this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)FlatBuffersSerialize::getInstance();
              piVar1 = piVar22;
              uVar26 = (ulong)((byte)local_198[0] >> 1);
              if (((byte)local_198[0] & 1) != 0) {
                piVar1 = local_188;
                uVar26 = local_190;
              }
              local_1c8 = flatbuffers::FlatBufferBuilder::CreateString
                                    (param_2,(char *)piVar1,uVar26);
              puVar23 = *(uint **)(this_01 + 8);
              if (puVar23 < *(uint **)(this_01 + 0x10)) goto LAB_00c795e8;
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_1c8);
            }
          }
        }
LAB_00c795f0:
        if (((byte)local_1b0[0] & 1) != 0) {
          operator_delete(local_1a0);
        }
        if (((byte)local_198[0] & 1) != 0) {
          operator_delete(local_188);
        }
      }
      else if (uVar26 == 0x12) {
        piVar1 = piVar25;
        if (((byte)local_180[0] & 1) != 0) {
          piVar1 = local_170;
        }
        iVar10 = memcmp(piVar1,"NormalBackFileData",0x12);
        if (iVar10 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar24 = *(long *)(this_00 + 0x60);
          while (lVar24 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar26 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar26 = local_178;
            }
            if (uVar26 == 5) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar10 = memcmp(piVar1,"Plist",5);
              if (iVar10 == 0) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a8,pcVar19,uVar26);
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar26);
              }
            }
            else if (uVar26 == 4) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_90,pcVar19,uVar26);
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
                    pcVar21 = (char *)((ulong)&local_1e0 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c78fd4;
                  }
                  else {
                    uVar26 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar21 = operator_new(uVar26);
                    local_1e0 = uVar26 | 1;
                    uStack_1d8 = uVar4;
                    local_1d0 = pcVar21;
LAB_00c78fd4:
                    memcpy(pcVar21,pcVar19,uVar4);
                  }
                  pcVar21[uVar4] = '\0';
                }
                local_26c = (**(code **)(*(long *)this + 0x40))(this,&local_1e0);
                if ((local_1e0 & 1) != 0) {
                  operator_delete(local_1d0);
                }
              }
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          if (local_26c == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar22;
            uVar26 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar26 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar26);
            puVar23 = *(uint **)(this_01 + 8);
            if (puVar23 < *(uint **)(this_01 + 0x10)) goto LAB_00c795e8;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (this_01,(Offset *)&local_1c8);
          }
        }
        else {
          iVar10 = memcmp(piVar1,"NodeNormalFileData",0x12);
          if (iVar10 != 0) goto LAB_00c79610;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_198,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_1b0,"");
          lVar24 = *(long *)(this_00 + 0x60);
          while (lVar24 != 0) {
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 8));
            sVar20 = strlen(pcVar19);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_180,pcVar19,sVar20);
            pcVar19 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar24 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar19);
            pcVar19 = local_1b8;
            uVar4 = uStack_1c0;
            uVar26 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              uVar26 = local_178;
            }
            if (uVar26 == 5) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              iVar10 = memcmp(piVar1,"Plist",5);
              if (iVar10 == 0) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_108,pcVar19,uVar26);
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar19,uVar26);
              }
            }
            else if (uVar26 == 4) {
              piVar1 = piVar25;
              if (((byte)local_180[0] & 1) != 0) {
                piVar1 = local_170;
              }
              if (*piVar1 == 0x68746150) {
                uVar26 = (ulong)((byte)local_1c8._0_1_ >> 1);
                pcVar19 = pcVar18;
                if ((local_1c8 & 1) != 0) {
                  uVar26 = uStack_1c0;
                  pcVar19 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_f0,pcVar19,uVar26);
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
                    pcVar21 = (char *)((ulong)&local_220 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c78b6c;
                  }
                  else {
                    uVar26 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    pcVar21 = operator_new(uVar26);
                    local_220 = uVar26 | 1;
                    uStack_218 = uVar4;
                    local_210 = pcVar21;
LAB_00c78b6c:
                    memcpy(pcVar21,pcVar19,uVar4);
                  }
                  pcVar21[uVar4] = '\0';
                }
                uVar11 = (**(code **)(*(long *)this + 0x40))(this,&local_220);
                local_280 = CONCAT44(uVar11,(int)local_280);
                if ((local_220 & 1) != 0) {
                  operator_delete(local_210);
                }
              }
            }
            lVar24 = *(long *)(lVar24 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
          local_280._4_4_ = (int)(local_280 >> 0x20);
          bVar7 = local_280._4_4_ == 1;
          if (bVar7) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            piVar1 = piVar22;
            uVar26 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              piVar1 = local_188;
              uVar26 = local_190;
            }
            local_1c8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar26);
            puVar23 = *(uint **)(this_01 + 8);
            if (puVar23 < *(uint **)(this_01 + 0x10)) goto LAB_00c795e8;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (this_01,(Offset *)&local_1c8);
          }
        }
        goto LAB_00c795f0;
      }
LAB_00c79610:
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_180[0] & 1) != 0) {
        operator_delete(local_170);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar26 = (ulong)((byte)local_90[0] >> 1);
  pcVar18 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar26 = local_88;
    pcVar18 = local_80;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar26 = (ulong)((byte)local_a8[0] >> 1);
  pcVar18 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar26 = local_a0;
    pcVar18 = local_98;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar11 = flatbuffers::CreateResourceData(param_2,uVar11,uVar12,local_26c);
  uVar26 = (ulong)((byte)local_c0[0] >> 1);
  pcVar18 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar26 = local_b8;
    pcVar18 = local_b0;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar26 = (ulong)((byte)local_d8[0] >> 1);
  pcVar18 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar26 = local_d0;
    pcVar18 = local_c8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar12 = flatbuffers::CreateResourceData(param_2,uVar12,uVar13,iVar9);
  uVar26 = (ulong)((byte)local_f0[0] >> 1);
  pcVar18 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar26 = local_e8;
    pcVar18 = local_e0;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar26 = (ulong)((byte)local_108[0] >> 1);
  pcVar18 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar26 = local_100;
    pcVar18 = local_f8;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar13 = flatbuffers::CreateResourceData(param_2,uVar13,uVar14,local_280._4_4_);
  uVar26 = (ulong)((byte)local_120[0] >> 1);
  pcVar18 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar26 = local_118;
    pcVar18 = local_110;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar26 = (ulong)((byte)local_138[0] >> 1);
  pcVar18 = (char *)((ulong)local_138 | 1);
  if (((byte)local_138[0] & 1) != 0) {
    uVar26 = local_130;
    pcVar18 = local_128;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar14 = flatbuffers::CreateResourceData(param_2,uVar14,uVar15,local_280 & 0xffffffff);
  uVar26 = (ulong)((byte)local_150[0] >> 1);
  pcVar18 = (char *)((ulong)local_150 | 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar26 = local_148;
    pcVar18 = local_140;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar26 = (ulong)((byte)local_168[0] >> 1);
  pcVar18 = (char *)((ulong)local_168 | 1);
  if (((byte)local_168[0] & 1) != 0) {
    uVar26 = local_160;
    pcVar18 = local_158;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar18,uVar26);
  uVar15 = flatbuffers::CreateResourceData(param_2,uVar15,uVar16,local_294);
  uVar8 = flatbuffers::CreateCheckBoxOptions
                    (param_2,uVar8,uVar11,uVar12,uVar13,uVar14,uVar15,bVar6,bVar5);
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
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

