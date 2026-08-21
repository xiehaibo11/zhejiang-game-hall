
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::GameNode3DReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::GameNode3DReader::createOptionsWithFlatBuffers
          (GameNode3DReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  XMLNode *this_00;
  char *pcVar24;
  GameNode3DReader *pGVar25;
  char *pcVar26;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *pvVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  long *plVar31;
  int local_304;
  undefined8 local_300;
  undefined8 local_2f0;
  ulong local_2e0;
  ulong uStack_2d8;
  char *local_2d0;
  ulong local_2c0;
  ulong uStack_2b8;
  char *local_2b0;
  ulong local_2a0;
  ulong uStack_298;
  char *local_290;
  ulong local_280;
  ulong uStack_278;
  char *local_270;
  ulong local_260;
  ulong uStack_258;
  char *local_250;
  ulong local_240;
  ulong uStack_238;
  char *local_230;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_228;
  undefined7 uStack_227;
  ulong uStack_220;
  char *local_218;
  uint local_210 [2];
  ulong local_208;
  int *local_200;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1f8 [8];
  ulong local_1f0;
  long *local_1e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e0 [8];
  ulong local_1d8;
  char *local_1d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1c8 [8];
  ulong local_1c0;
  char *local_1b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1b0 [8];
  ulong local_1a8;
  char *local_1a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_198 [8];
  ulong local_190;
  char *local_188;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_180 [8];
  ulong local_178;
  char *local_170;
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
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
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
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_180,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_198,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1b0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1c8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1e0,"");
  lVar28 = *(long *)(param_1 + 0x60);
  if (lVar28 == 0) {
    bVar9 = true;
    bVar10 = false;
    bVar8 = false;
    local_304 = 1;
  }
  else {
    plVar31 = (long *)((ulong)local_1f8 | 1);
    piVar29 = (int *)((ulong)local_210 | 1);
    bVar10 = false;
    bVar8 = false;
    local_304 = 1;
    bVar9 = true;
    do {
      pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_1f8,pcVar23);
      pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_210,pcVar23);
      uVar30 = (ulong)((byte)local_1f8[0] >> 1);
      if (((byte)local_1f8[0] & 1) != 0) {
        uVar30 = local_1f0;
      }
      switch(uVar30) {
      case 4:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        if ((int)*plVar2 == 0x656d614e) {
          uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
          piVar1 = piVar29;
          if ((local_210[0] & 1) != 0) {
            uVar30 = local_208;
            piVar1 = local_200;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_90,(char *)piVar1,uVar30);
        }
        break;
      case 8:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        if (*plVar2 == 0x6174614472657355) {
          uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
          piVar1 = piVar29;
          if ((local_210[0] & 1) != 0) {
            uVar30 = local_208;
            piVar1 = local_200;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_1e0,(char *)piVar1,uVar30);
        }
        break;
      case 10:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar11 = memcmp(plVar2,"skyBoxMask",10);
        if (iVar11 == 0) {
          piVar1 = piVar29;
          if ((local_210[0] & 1) != 0) {
            piVar1 = local_200;
          }
          local_304 = atoi((char *)piVar1);
        }
        else {
          iVar11 = memcmp(plVar2,"FrameEvent",10);
          if (iVar11 == 0) {
            uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
            piVar1 = piVar29;
            if ((local_210[0] & 1) != 0) {
              uVar30 = local_208;
              piVar1 = local_200;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_1c8,(char *)piVar1,uVar30);
          }
        }
        break;
      case 0xb:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar11 = memcmp(plVar2,"SkyBoxValid",0xb);
        if (iVar11 == 0) {
          uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
          if ((local_210[0] & 1) != 0) {
            uVar30 = local_208;
          }
          if (uVar30 == 4) {
            piVar1 = piVar29;
            if ((local_210[0] & 1) != 0) {
              piVar1 = local_200;
            }
            bVar9 = *piVar1 == 0x65757254;
          }
          else {
            bVar9 = false;
          }
        }
        break;
      case 0xd:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar11 = memcmp(plVar2,"SkyBoxEnabled",0xd);
        if (iVar11 == 0) {
          uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
          if ((local_210[0] & 1) != 0) {
            uVar30 = local_208;
          }
          if (uVar30 == 4) {
            piVar1 = piVar29;
            if ((local_210[0] & 1) != 0) {
              piVar1 = local_200;
            }
            bVar10 = *piVar1 == 0x65757254;
          }
          else {
            bVar10 = false;
          }
        }
        break;
      case 0xf:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar11 = memcmp(plVar2,"UseDefaultLight",0xf);
        if (iVar11 == 0) {
          uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
          if ((local_210[0] & 1) != 0) {
            uVar30 = local_208;
          }
          if (uVar30 == 4) {
            piVar1 = piVar29;
            if ((local_210[0] & 1) != 0) {
              piVar1 = local_200;
            }
            bVar8 = *piVar1 == 0x65757254;
          }
          else {
            bVar8 = false;
          }
        }
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if ((local_210[0] & 1) != 0) {
        operator_delete(local_200);
      }
      if (((byte)local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8);
      }
    } while (lVar28 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    local_300 = 0;
    local_2f0 = 0;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    plVar31 = (long *)((ulong)local_1f8 | 1);
    local_2f0 = 0;
    iVar11 = 0;
    iVar12 = 0;
    piVar29 = (int *)((ulong)local_210 | 1);
    pcVar23 = (char *)((ulong)&local_228 | 1);
    local_300 = 0;
    do {
      pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_1f8,pcVar24);
      uVar30 = (ulong)((byte)local_1f8[0] >> 1);
      if (((byte)local_1f8[0] & 1) != 0) {
        uVar30 = local_1f0;
      }
      uVar6 = local_300;
      uVar7 = local_2f0;
      switch(uVar30) {
      case 7:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar13 = memcmp(plVar2,"UpImage",7);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this_00 + 0x60);
          while (lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_210,pcVar24);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pGVar25 = (GameNode3DReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
            pcVar24 = local_218;
            uVar5 = uStack_220;
            uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
            if ((local_210[0] & 1) != 0) {
              uVar30 = local_208;
            }
            if (uVar30 == 5) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              iVar13 = memcmp(piVar1,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_120,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              if (*piVar1 == 0x68746150) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_108,pcVar24,uVar30);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_278 = 0;
                local_270 = (char *)0x0;
                local_280 = 0;
                if (((byte)local_228 & 1) == 0) {
                  local_280 = CONCAT71(uStack_227,local_228);
                  uStack_278 = uStack_220;
                  local_270 = local_218;
                }
                else {
                  if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_220 < 0x17) {
                    local_280 = (ulong)(byte)((int)uStack_220 << 1);
                    pcVar26 = (char *)((ulong)&local_280 | 1);
                    if (uStack_220 != 0) goto LAB_00ce78bc;
                  }
                  else {
                    uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_280 = uVar30 | 1;
                    uStack_278 = uVar5;
                    local_270 = pcVar26;
LAB_00ce78bc:
                    pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                iVar12 = getResourceType(pGVar25,&local_280);
                if ((local_280 & 1) != 0) {
                  operator_delete(local_270);
                }
              }
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if (((byte)local_228 & 1) != 0) {
              operator_delete(local_218);
            }
            if ((local_210[0] & 1) != 0) {
              operator_delete(local_200);
            }
          }
          if (iVar12 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_120 | 1);
            uVar30 = (ulong)((byte)local_120[0] >> 1);
            if (((byte)local_120[0] & 1) != 0) {
              pcVar24 = local_110;
              uVar30 = local_118;
            }
            local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_210[0];
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
              iVar12 = 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)local_210);
              iVar12 = 1;
            }
          }
        }
        break;
      case 9:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar13 = memcmp(plVar2,"LeftImage",9);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this_00 + 0x60);
          while (lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_210,pcVar24);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pGVar25 = (GameNode3DReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
            pcVar24 = local_218;
            uVar5 = uStack_220;
            uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
            if ((local_210[0] & 1) != 0) {
              uVar30 = local_208;
            }
            if (uVar30 == 5) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              iVar13 = memcmp(piVar1,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              if (*piVar1 == 0x68746150) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a8,pcVar24,uVar30);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_238 = 0;
                local_230 = (char *)0x0;
                local_240 = 0;
                if (((byte)local_228 & 1) == 0) {
                  local_240 = CONCAT71(uStack_227,local_228);
                  uStack_238 = uStack_220;
                  local_230 = local_218;
                }
                else {
                  if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_220 < 0x17) {
                    local_240 = (ulong)(byte)((int)uStack_220 << 1);
                    pcVar26 = (char *)((ulong)&local_240 | 1);
                    if (uStack_220 != 0) goto LAB_00ce80f4;
                  }
                  else {
                    uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_240 = uVar30 | 1;
                    uStack_238 = uVar5;
                    local_230 = pcVar26;
LAB_00ce80f4:
                    pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                iVar11 = getResourceType(pGVar25,&local_240);
                if ((local_240 & 1) != 0) {
                  operator_delete(local_230);
                }
              }
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if (((byte)local_228 & 1) != 0) {
              operator_delete(local_218);
            }
            if ((local_210[0] & 1) != 0) {
              operator_delete(local_200);
            }
          }
          if (iVar11 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_c0 | 1);
            uVar30 = (ulong)((byte)local_c0[0] >> 1);
            if (((byte)local_c0[0] & 1) != 0) {
              pcVar24 = local_b0;
              uVar30 = local_b8;
            }
            local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_210[0];
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
              iVar11 = 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)local_210);
              iVar11 = 1;
            }
          }
        }
        else {
          iVar13 = memcmp(plVar2,"DownImage",9);
          if (iVar13 == 0) {
            lVar28 = *(long *)(this_00 + 0x60);
            while (local_300._0_4_ = (int)uVar6, lVar28 != 0) {
              pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)local_210,pcVar24);
              pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
              pGVar25 = (GameNode3DReader *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
              pcVar24 = local_218;
              uVar5 = uStack_220;
              uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
              if ((local_210[0] & 1) != 0) {
                uVar30 = local_208;
              }
              if (uVar30 == 5) {
                piVar1 = piVar29;
                if ((local_210[0] & 1) != 0) {
                  piVar1 = local_200;
                }
                iVar13 = memcmp(piVar1,"Plist",5);
                if (iVar13 == 0) {
                  uVar30 = (ulong)((byte)local_228 >> 1);
                  pcVar24 = pcVar23;
                  if (((byte)local_228 & 1) != 0) {
                    uVar30 = uStack_220;
                    pcVar24 = local_218;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_150,pcVar24,uVar30);
                }
              }
              else if (uVar30 == 4) {
                piVar1 = piVar29;
                if ((local_210[0] & 1) != 0) {
                  piVar1 = local_200;
                }
                if (*piVar1 == 0x68746150) {
                  uVar30 = (ulong)((byte)local_228 >> 1);
                  pcVar24 = pcVar23;
                  if (((byte)local_228 & 1) != 0) {
                    uVar30 = uStack_220;
                    pcVar24 = local_218;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_138,pcVar24,uVar30);
                }
                else if (*piVar1 == 0x65707954) {
                  uStack_298 = 0;
                  local_290 = (char *)0x0;
                  local_2a0 = 0;
                  if (((byte)local_228 & 1) == 0) {
                    local_2a0 = CONCAT71(uStack_227,local_228);
                    uStack_298 = uStack_220;
                    local_290 = local_218;
                  }
                  else {
                    if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_220 < 0x17) {
                      local_2a0 = (ulong)(byte)((int)uStack_220 << 1);
                      pcVar26 = (char *)((ulong)&local_2a0 | 1);
                      if (uStack_220 != 0) goto LAB_00ce8378;
                    }
                    else {
                      uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                      pcVar26 = operator_new(uVar30);
                      local_2a0 = uVar30 | 1;
                      uStack_298 = uVar5;
                      local_290 = pcVar26;
LAB_00ce8378:
                      pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                    }
                    pcVar26[uVar5] = '\0';
                  }
                  uVar14 = getResourceType(pGVar25,&local_2a0);
                  local_300 = CONCAT44(uVar14,(int)local_300);
                  uVar6 = local_300;
                  if ((local_2a0 & 1) != 0) {
                    operator_delete(local_290);
                  }
                }
              }
              local_300 = uVar6;
              lVar28 = *(long *)(lVar28 + 0x38);
              if (((byte)local_228 & 1) != 0) {
                operator_delete(local_218);
              }
              uVar6 = local_300;
              if ((local_210[0] & 1) != 0) {
                operator_delete(local_200);
              }
            }
            local_300._4_4_ = (int)(uVar6 >> 0x20);
            if (local_300._4_4_ == 1) {
              pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)FlatBuffersSerialize::getInstance();
              pcVar24 = (char *)((ulong)local_150 | 1);
              uVar30 = (ulong)((byte)local_150[0] >> 1);
              if (((byte)local_150[0] & 1) != 0) {
                pcVar24 = local_140;
                uVar30 = local_148;
              }
              local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
              puVar3 = *(uint **)(pvVar27 + 8);
              if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
                *puVar3 = local_210[0];
                *(uint **)(pvVar27 + 8) = puVar3 + 1;
              }
              else {
                std::__ndk1::
                vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                          (pvVar27,(Offset *)local_210);
              }
              local_300 = CONCAT44(1,(int)local_300);
              uVar6 = local_300;
            }
          }
          else {
            iVar13 = memcmp(plVar2,"BackImage",9);
            if (iVar13 == 0) {
              lVar28 = *(long *)(this_00 + 0x60);
              while (local_300._4_4_ = (int)(uVar6 >> 0x20), lVar28 != 0) {
                pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)local_210,pcVar24);
                pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
                pGVar25 = (GameNode3DReader *)
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
                pcVar24 = local_218;
                uVar5 = uStack_220;
                uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
                if ((local_210[0] & 1) != 0) {
                  uVar30 = local_208;
                }
                if (uVar30 == 5) {
                  piVar1 = piVar29;
                  if ((local_210[0] & 1) != 0) {
                    piVar1 = local_200;
                  }
                  iVar13 = memcmp(piVar1,"Plist",5);
                  if (iVar13 == 0) {
                    uVar30 = (ulong)((byte)local_228 >> 1);
                    pcVar24 = pcVar23;
                    if (((byte)local_228 & 1) != 0) {
                      uVar30 = uStack_220;
                      pcVar24 = local_218;
                    }
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign(local_1b0,pcVar24,uVar30);
                  }
                }
                else if (uVar30 == 4) {
                  piVar1 = piVar29;
                  if ((local_210[0] & 1) != 0) {
                    piVar1 = local_200;
                  }
                  if (*piVar1 == 0x68746150) {
                    uVar30 = (ulong)((byte)local_228 >> 1);
                    pcVar24 = pcVar23;
                    if (((byte)local_228 & 1) != 0) {
                      uVar30 = uStack_220;
                      pcVar24 = local_218;
                    }
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign(local_198,pcVar24,uVar30);
                  }
                  else if (*piVar1 == 0x65707954) {
                    uStack_2d8 = 0;
                    local_2d0 = (char *)0x0;
                    local_2e0 = 0;
                    if (((byte)local_228 & 1) == 0) {
                      local_2e0 = CONCAT71(uStack_227,local_228);
                      uStack_2d8 = uStack_220;
                      local_2d0 = local_218;
                    }
                    else {
                      if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (uStack_220 < 0x17) {
                        local_2e0 = (ulong)(byte)((int)uStack_220 << 1);
                        pcVar26 = (char *)((ulong)&local_2e0 | 1);
                        if (uStack_220 != 0) goto LAB_00ce7cdc;
                      }
                      else {
                        uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                        pcVar26 = operator_new(uVar30);
                        local_2e0 = uVar30 | 1;
                        uStack_2d8 = uVar5;
                        local_2d0 = pcVar26;
LAB_00ce7cdc:
                        pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                      }
                      pcVar26[uVar5] = '\0';
                    }
                    uVar14 = getResourceType(pGVar25,&local_2e0);
                    local_300 = CONCAT44(local_300._4_4_,uVar14);
                    uVar6 = local_300;
                    if ((local_2e0 & 1) != 0) {
                      operator_delete(local_2d0);
                    }
                  }
                }
                local_300 = uVar6;
                lVar28 = *(long *)(lVar28 + 0x38);
                if (((byte)local_228 & 1) != 0) {
                  operator_delete(local_218);
                }
                uVar6 = local_300;
                if ((local_210[0] & 1) != 0) {
                  operator_delete(local_200);
                }
              }
              local_300._0_4_ = (int)uVar6;
              if ((int)local_300 == 1) {
                pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                           *)FlatBuffersSerialize::getInstance();
                pcVar24 = (char *)((ulong)local_1b0 | 1);
                uVar30 = (ulong)((byte)local_1b0[0] >> 1);
                if (((byte)local_1b0[0] & 1) != 0) {
                  pcVar24 = local_1a0;
                  uVar30 = local_1a8;
                }
                local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
                puVar3 = *(uint **)(pvVar27 + 8);
                if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
                  *puVar3 = local_210[0];
                  *(uint **)(pvVar27 + 8) = puVar3 + 1;
                }
                else {
                  std::__ndk1::
                  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                  ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                            (pvVar27,(Offset *)local_210);
                }
                local_300 = CONCAT44(local_300._4_4_,1);
                uVar6 = local_300;
              }
            }
          }
        }
        break;
      case 10:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar13 = memcmp(plVar2,"RightImage",10);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this_00 + 0x60);
          while (local_2f0._0_4_ = (int)uVar7, lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_210,pcVar24);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pGVar25 = (GameNode3DReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
            pcVar24 = local_218;
            uVar5 = uStack_220;
            uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
            if ((local_210[0] & 1) != 0) {
              uVar30 = local_208;
            }
            if (uVar30 == 5) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              iVar13 = memcmp(piVar1,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_f0,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              if (*piVar1 == 0x68746150) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d8,pcVar24,uVar30);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_258 = 0;
                local_250 = (char *)0x0;
                local_260 = 0;
                if (((byte)local_228 & 1) == 0) {
                  local_260 = CONCAT71(uStack_227,local_228);
                  uStack_258 = uStack_220;
                  local_250 = local_218;
                }
                else {
                  if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_220 < 0x17) {
                    local_260 = (ulong)(byte)((int)uStack_220 << 1);
                    pcVar26 = (char *)((ulong)&local_260 | 1);
                    if (uStack_220 != 0) goto LAB_00ce7ab0;
                  }
                  else {
                    uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_260 = uVar30 | 1;
                    uStack_258 = uVar5;
                    local_250 = pcVar26;
LAB_00ce7ab0:
                    pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                uVar14 = getResourceType(pGVar25,&local_260);
                local_2f0 = CONCAT44(uVar14,(int)local_2f0);
                uVar7 = local_2f0;
                if ((local_260 & 1) != 0) {
                  operator_delete(local_250);
                }
              }
            }
            local_2f0 = uVar7;
            lVar28 = *(long *)(lVar28 + 0x38);
            if (((byte)local_228 & 1) != 0) {
              operator_delete(local_218);
            }
            uVar7 = local_2f0;
            if ((local_210[0] & 1) != 0) {
              operator_delete(local_200);
            }
          }
          local_2f0._4_4_ = (int)(uVar7 >> 0x20);
          if (local_2f0._4_4_ == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_f0 | 1);
            uVar30 = (ulong)((byte)local_f0[0] >> 1);
            if (((byte)local_f0[0] & 1) != 0) {
              pcVar24 = local_e0;
              uVar30 = local_e8;
            }
            local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_210[0];
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)local_210);
            }
            local_2f0 = CONCAT44(1,(int)local_2f0);
            uVar7 = local_2f0;
          }
        }
        break;
      case 0xc:
        plVar2 = plVar31;
        if (((byte)local_1f8[0] & 1) != 0) {
          plVar2 = local_1e8;
        }
        iVar13 = memcmp(plVar2,"ForwardImage",0xc);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this_00 + 0x60);
          while (local_2f0._4_4_ = (int)(uVar7 >> 0x20), lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_210,pcVar24);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pGVar25 = (GameNode3DReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_228,pcVar24);
            pcVar24 = local_218;
            uVar5 = uStack_220;
            uVar30 = (ulong)((byte)local_210[0]._0_1_ >> 1);
            if ((local_210[0] & 1) != 0) {
              uVar30 = local_208;
            }
            if (uVar30 == 5) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              iVar13 = memcmp(piVar1,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_180,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar1 = piVar29;
              if ((local_210[0] & 1) != 0) {
                piVar1 = local_200;
              }
              if (*piVar1 == 0x68746150) {
                uVar30 = (ulong)((byte)local_228 >> 1);
                pcVar24 = pcVar23;
                if (((byte)local_228 & 1) != 0) {
                  uVar30 = uStack_220;
                  pcVar24 = local_218;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_168,pcVar24,uVar30);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_2b8 = 0;
                local_2b0 = (char *)0x0;
                local_2c0 = 0;
                if (((byte)local_228 & 1) == 0) {
                  local_2c0 = CONCAT71(uStack_227,local_228);
                  uStack_2b8 = uStack_220;
                  local_2b0 = local_218;
                }
                else {
                  if (0xffffffffffffffef < uStack_220) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_220 < 0x17) {
                    local_2c0 = (ulong)(byte)((int)uStack_220 << 1);
                    pcVar26 = (char *)((ulong)&local_2c0 | 1);
                    if (uStack_220 != 0) goto LAB_00ce7ed4;
                  }
                  else {
                    uVar30 = uStack_220 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_2c0 = uVar30 | 1;
                    uStack_2b8 = uVar5;
                    local_2b0 = pcVar26;
LAB_00ce7ed4:
                    pGVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                uVar14 = getResourceType(pGVar25,&local_2c0);
                local_2f0 = CONCAT44(local_2f0._4_4_,uVar14);
                uVar7 = local_2f0;
                if ((local_2c0 & 1) != 0) {
                  operator_delete(local_2b0);
                }
              }
            }
            local_2f0 = uVar7;
            lVar28 = *(long *)(lVar28 + 0x38);
            if (((byte)local_228 & 1) != 0) {
              operator_delete(local_218);
            }
            uVar7 = local_2f0;
            if ((local_210[0] & 1) != 0) {
              operator_delete(local_200);
            }
          }
          local_2f0._0_4_ = (int)uVar7;
          if ((int)local_2f0 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_180 | 1);
            uVar30 = (ulong)((byte)local_180[0] >> 1);
            if (((byte)local_180[0] & 1) != 0) {
              pcVar24 = local_170;
              uVar30 = local_178;
            }
            local_210[0] = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_210[0];
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)local_210);
            }
            local_2f0 = CONCAT44(local_2f0._4_4_,1);
            uVar7 = local_2f0;
          }
        }
      }
      local_2f0 = uVar7;
      local_300 = uVar6;
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar30 = (ulong)((byte)local_90[0] >> 1);
  pcVar23 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar30 = local_88;
    pcVar23 = local_80;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_a8[0] >> 1);
  pcVar23 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar30 = local_a0;
    pcVar23 = local_98;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_c0[0] >> 1);
  pcVar23 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar30 = local_b8;
    pcVar23 = local_b0;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar15 = flatbuffers::CreateResourceData(param_2,uVar15,uVar16,iVar11);
  uVar30 = (ulong)((byte)local_d8[0] >> 1);
  pcVar23 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar30 = local_d0;
    pcVar23 = local_c8;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_f0[0] >> 1);
  pcVar23 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar30 = local_e8;
    pcVar23 = local_e0;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar16 = flatbuffers::CreateResourceData(param_2,uVar16,uVar17,local_2f0._4_4_);
  uVar30 = (ulong)((byte)local_108[0] >> 1);
  pcVar23 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar30 = local_100;
    pcVar23 = local_f8;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_120[0] >> 1);
  pcVar23 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar30 = local_118;
    pcVar23 = local_110;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar17 = flatbuffers::CreateResourceData(param_2,uVar17,uVar18,iVar12);
  uVar30 = (ulong)((byte)local_138[0] >> 1);
  pcVar23 = (char *)((ulong)local_138 | 1);
  if (((byte)local_138[0] & 1) != 0) {
    uVar30 = local_130;
    pcVar23 = local_128;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_150[0] >> 1);
  pcVar23 = (char *)((ulong)local_150 | 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar30 = local_148;
    pcVar23 = local_140;
  }
  uVar19 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar18 = flatbuffers::CreateResourceData(param_2,uVar18,uVar19,local_300._4_4_);
  uVar30 = (ulong)((byte)local_168[0] >> 1);
  pcVar23 = (char *)((ulong)local_168 | 1);
  if (((byte)local_168[0] & 1) != 0) {
    uVar30 = local_160;
    pcVar23 = local_158;
  }
  uVar19 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_180[0] >> 1);
  pcVar23 = (char *)((ulong)local_180 | 1);
  if (((byte)local_180[0] & 1) != 0) {
    uVar30 = local_178;
    pcVar23 = local_170;
  }
  uVar20 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar19 = flatbuffers::CreateResourceData(param_2,uVar19,uVar20,local_2f0 & 0xffffffff);
  uVar30 = (ulong)((byte)local_198[0] >> 1);
  pcVar23 = (char *)((ulong)local_198 | 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar30 = local_190;
    pcVar23 = local_188;
  }
  uVar20 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_1b0[0] >> 1);
  pcVar23 = (char *)((ulong)local_1b0 | 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar30 = local_1a8;
    pcVar23 = local_1a0;
  }
  uVar21 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar20 = flatbuffers::CreateResourceData(param_2,uVar20,uVar21,local_300 & 0xffffffff);
  uVar30 = (ulong)((byte)local_1c8[0] >> 1);
  pcVar23 = (char *)((ulong)local_1c8 | 1);
  if (((byte)local_1c8[0] & 1) != 0) {
    uVar30 = local_1c0;
    pcVar23 = local_1b8;
  }
  uVar21 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar30 = (ulong)((byte)local_1e0[0] >> 1);
  pcVar23 = (char *)((ulong)local_1e0 | 1);
  if (((byte)local_1e0[0] & 1) != 0) {
    uVar30 = local_1d8;
    pcVar23 = local_1d0;
  }
  uVar22 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar23,uVar30);
  uVar14 = flatbuffers::CreateGameNode3DOption
                     (param_2,uVar14,local_304,bVar9 & bVar10,uVar15,uVar16,uVar17,uVar18,uVar19,
                      uVar20,uVar21,uVar22,bVar8);
  if (((byte)local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (((byte)local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (((byte)local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (((byte)local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if (((byte)local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
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
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

