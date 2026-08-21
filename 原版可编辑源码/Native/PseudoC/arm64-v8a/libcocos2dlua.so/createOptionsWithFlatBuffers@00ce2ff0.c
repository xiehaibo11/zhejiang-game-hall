
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::UserCameraReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4
cocostudio::UserCameraReader::createOptionsWithFlatBuffers
          (XMLElement *param_1,FlatBufferBuilder *param_2)

{
  void *pvVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
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
  long *plVar21;
  char *pcVar22;
  size_t sVar23;
  XMLNode *this;
  char *pcVar24;
  UserCameraReader *pUVar25;
  char *pcVar26;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *pvVar27;
  FlatBufferBuilder *in_x2;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  void *pvVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 in_d1;
  float fVar34;
  undefined8 uVar35;
  int local_2d4;
  undefined8 local_2c8;
  int local_2b8;
  uint local_2b4;
  ulong local_2b0;
  ulong uStack_2a8;
  char *local_2a0;
  ulong local_290;
  ulong uStack_288;
  char *local_280;
  ulong local_270;
  ulong uStack_268;
  char *local_260;
  ulong local_250;
  ulong uStack_248;
  char *local_240;
  ulong local_230;
  ulong uStack_228;
  char *local_220;
  ulong local_210;
  ulong uStack_208;
  char *local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  ulong uStack_1f0;
  char *local_1e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e0 [8];
  ulong local_1d8;
  int *local_1d0;
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
  int *local_b0;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  plVar21 = (long *)Node3DReader::getInstance();
  uVar9 = (**(code **)(*plVar21 + 0x10))(plVar21,param_2);
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  lVar28 = *(long *)(param_2 + 0x60);
  if (lVar28 == 0) {
    local_2b4 = 0;
    bVar8 = true;
    bVar7 = false;
    fVar34 = 60.0;
  }
  else {
    bVar8 = true;
    bVar7 = false;
    pvVar31 = (void *)((ulong)&local_a8 | 1);
    piVar29 = (int *)((ulong)local_c0 | 1);
    fVar34 = 60.0;
    local_2b4 = 0;
    do {
      pcVar22 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
      sVar23 = strlen(pcVar22);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a8,pcVar22,sVar23);
      pcVar22 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,pcVar22);
      uVar30 = local_a8 >> 1 & 0x7f;
      if ((local_a8 & 1) != 0) {
        uVar30 = local_a0;
      }
      switch(uVar30) {
      case 3:
        pvVar1 = pvVar31;
        if ((local_a8 & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar12 = memcmp(pvVar1,&DAT_0141778a,3);
        if (iVar12 == 0) {
          piVar2 = piVar29;
          if (((byte)local_c0[0] & 1) != 0) {
            piVar2 = local_b0;
          }
          dVar32 = atof((char *)piVar2);
          fVar34 = (float)dVar32;
        }
        break;
      case 0xb:
        pvVar1 = pvVar31;
        if ((local_a8 & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar12 = memcmp(pvVar1,"SkyBoxValid",0xb);
        if (iVar12 == 0) {
          uVar30 = (ulong)((byte)local_c0[0] >> 1);
          if (((byte)local_c0[0] & 1) != 0) {
            uVar30 = local_b8;
          }
          if (uVar30 == 4) {
            piVar2 = piVar29;
            if (((byte)local_c0[0] & 1) != 0) {
              piVar2 = local_b0;
            }
            bVar8 = *piVar2 == 0x65757254;
          }
          else {
            bVar8 = false;
          }
        }
        break;
      case 0xd:
        pvVar1 = pvVar31;
        if ((local_a8 & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar12 = memcmp(pvVar1,"SkyBoxEnabled",0xd);
        if (iVar12 == 0) {
          uVar30 = (ulong)((byte)local_c0[0] >> 1);
          if (((byte)local_c0[0] & 1) != 0) {
            uVar30 = local_b8;
          }
          if (uVar30 == 4) {
            piVar2 = piVar29;
            if (((byte)local_c0[0] & 1) != 0) {
              piVar2 = local_b0;
            }
            bVar7 = *piVar2 == 0x65757254;
          }
          else {
            bVar7 = false;
          }
        }
        break;
      case 0xe:
        pvVar1 = pvVar31;
        if ((local_a8 & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar12 = memcmp(pvVar1,"CameraFlagData",0xe);
        if (iVar12 == 0) {
          piVar2 = piVar29;
          if (((byte)local_c0[0] & 1) != 0) {
            piVar2 = local_b0;
          }
          uVar10 = atoi((char *)piVar2);
          if (uVar10 != 0) {
            local_2b4 = uVar10;
          }
        }
        break;
      case 0x12:
        pvVar1 = pvVar31;
        if ((local_a8 & 1) != 0) {
          pvVar1 = local_98;
        }
        iVar12 = memcmp(pvVar1,"UserCameraFlagMode",0x12);
        if (iVar12 == 0 && local_2b4 == 0) {
          uVar30 = (ulong)((byte)local_c0[0] >> 1);
          if (((byte)local_c0[0] & 1) != 0) {
            uVar30 = local_b8;
          }
          if (uVar30 == 5) {
            piVar2 = piVar29;
            if (((byte)local_c0[0] & 1) != 0) {
              piVar2 = local_b0;
            }
            iVar12 = memcmp(piVar2,"USER1",5);
            if (iVar12 == 0) {
              local_2b4 = 2;
            }
            else {
              iVar12 = memcmp(piVar2,"USER2",5);
              if (iVar12 == 0) {
                local_2b4 = 4;
              }
              else {
                iVar12 = memcmp(piVar2,"USER3",5);
                if (iVar12 == 0) {
                  local_2b4 = 8;
                }
                else {
                  iVar12 = memcmp(piVar2,"USER4",5);
                  local_2b4 = (uint)(iVar12 == 0) << 4;
                }
              }
            }
          }
          else if (uVar30 == 7) {
            piVar2 = piVar29;
            if (((byte)local_c0[0] & 1) != 0) {
              piVar2 = local_b0;
            }
            iVar12 = memcmp(piVar2,"DEFAULT",7);
            local_2b4 = (uint)(iVar12 == 0);
          }
          else {
            local_2b4 = 0;
          }
        }
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
    } while (lVar28 != 0);
  }
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
  this = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_2,(char *)0x0);
  if (this == (XMLNode *)0x0) {
    local_2d4 = 0;
    local_2b8 = 0;
    local_2c8 = 0;
    iVar11 = 0;
    iVar12 = 0;
    uVar33 = 0x3f800000;
    uVar35 = 0x447a0000;
  }
  else {
    piVar29 = (int *)((ulong)local_1e0 | 1);
    iVar12 = 0;
    iVar11 = 0;
    uVar33 = 0x3f800000;
    uVar35 = 0x447a0000;
    pcVar22 = (char *)((ulong)&local_1f8 | 1);
    local_2c8 = 0;
    local_2b8 = 0;
    local_2d4 = 0;
    do {
      pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_1e0,pcVar24);
      uVar30 = (ulong)((byte)local_1e0[0] >> 1);
      if (((byte)local_1e0[0] & 1) != 0) {
        uVar30 = local_1d8;
      }
      uVar6 = local_2c8;
      switch(uVar30) {
      case 7:
        piVar2 = piVar29;
        if (((byte)local_1e0[0] & 1) != 0) {
          piVar2 = local_1d0;
        }
        iVar13 = memcmp(piVar2,"UpImage",7);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this + 0x60);
          while (lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            sVar23 = strlen(pcVar24);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_1e0,pcVar24,sVar23);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pUVar25 = (UserCameraReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1f8,pcVar24);
            pcVar24 = local_1e8;
            uVar5 = uStack_1f0;
            uVar30 = (ulong)((byte)local_1e0[0] >> 1);
            if (((byte)local_1e0[0] & 1) != 0) {
              uVar30 = local_1d8;
            }
            if (uVar30 == 5) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              iVar13 = memcmp(piVar2,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_138,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              if (*piVar2 == 0x68746150) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_120,pcVar24,uVar30);
              }
              else if (*piVar2 == 0x65707954) {
                uStack_248 = 0;
                local_240 = (char *)0x0;
                local_250 = 0;
                if ((local_1f8 & 1) == 0) {
                  local_250 = CONCAT44(uStack_1f4,local_1f8);
                  uStack_248 = uStack_1f0;
                  local_240 = local_1e8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1f0 < 0x17) {
                    local_250 = (ulong)(byte)((int)uStack_1f0 << 1);
                    pcVar26 = (char *)((ulong)&local_250 | 1);
                    if (uStack_1f0 != 0) goto LAB_00ce3774;
                  }
                  else {
                    uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_250 = uVar30 | 1;
                    uStack_248 = uVar5;
                    local_240 = pcVar26;
LAB_00ce3774:
                    pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                iVar11 = getResourceType(pUVar25,&local_250);
                if ((local_250 & 1) != 0) {
                  operator_delete(local_240);
                }
              }
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if ((local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (iVar11 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_138 | 1);
            uVar30 = (ulong)((byte)local_138[0] >> 1);
            if (((byte)local_138[0] & 1) != 0) {
              pcVar24 = local_128;
              uVar30 = local_130;
            }
            local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_1f8;
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
              iVar11 = 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)&local_1f8);
              iVar11 = 1;
            }
          }
        }
        break;
      case 9:
        piVar2 = piVar29;
        if (((byte)local_1e0[0] & 1) != 0) {
          piVar2 = local_1d0;
        }
        iVar13 = memcmp(piVar2,"ClipPlane",9);
        if (iVar13 == 0) {
          uVar33 = getVec2Attribute((UserCameraReader *)0x0,*(XMLAttribute **)(this + 0x60));
          uVar35 = in_d1;
        }
        else {
          iVar13 = memcmp(piVar2,"LeftImage",9);
          if (iVar13 == 0) {
            lVar28 = *(long *)(this + 0x60);
            while (local_2c8._0_4_ = (int)uVar6, lVar28 != 0) {
              pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
              sVar23 = strlen(pcVar24);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_1e0,pcVar24,sVar23);
              pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
              pUVar25 = (UserCameraReader *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_1f8,pcVar24);
              pcVar24 = local_1e8;
              uVar5 = uStack_1f0;
              uVar30 = (ulong)((byte)local_1e0[0] >> 1);
              if (((byte)local_1e0[0] & 1) != 0) {
                uVar30 = local_1d8;
              }
              if (uVar30 == 5) {
                piVar2 = piVar29;
                if (((byte)local_1e0[0] & 1) != 0) {
                  piVar2 = local_1d0;
                }
                iVar13 = memcmp(piVar2,"Plist",5);
                if (iVar13 == 0) {
                  uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                  pcVar24 = pcVar22;
                  if ((local_1f8 & 1) != 0) {
                    uVar30 = uStack_1f0;
                    pcVar24 = local_1e8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_d8,pcVar24,uVar30);
                }
              }
              else if (uVar30 == 4) {
                piVar2 = piVar29;
                if (((byte)local_1e0[0] & 1) != 0) {
                  piVar2 = local_1d0;
                }
                if (*piVar2 == 0x68746150) {
                  uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                  pcVar24 = pcVar22;
                  if ((local_1f8 & 1) != 0) {
                    uVar30 = uStack_1f0;
                    pcVar24 = local_1e8;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_c0,pcVar24,uVar30);
                }
                else if (*piVar2 == 0x65707954) {
                  uStack_208 = 0;
                  local_200 = (char *)0x0;
                  local_210 = 0;
                  if ((local_1f8 & 1) == 0) {
                    local_210 = CONCAT44(uStack_1f4,local_1f8);
                    uStack_208 = uStack_1f0;
                    local_200 = local_1e8;
                  }
                  else {
                    if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_1f0 < 0x17) {
                      local_210 = (ulong)(byte)((int)uStack_1f0 << 1);
                      pcVar26 = (char *)((ulong)&local_210 | 1);
                      if (uStack_1f0 != 0) goto LAB_00ce3fe8;
                    }
                    else {
                      uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                      pcVar26 = operator_new(uVar30);
                      local_210 = uVar30 | 1;
                      uStack_208 = uVar5;
                      local_200 = pcVar26;
LAB_00ce3fe8:
                      pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                    }
                    pcVar26[uVar5] = '\0';
                  }
                  uVar14 = getResourceType(pUVar25,&local_210);
                  local_2c8 = CONCAT44(uVar14,(int)local_2c8);
                  uVar6 = local_2c8;
                  if ((local_210 & 1) != 0) {
                    operator_delete(local_200);
                  }
                }
              }
              local_2c8 = uVar6;
              lVar28 = *(long *)(lVar28 + 0x38);
              uVar6 = local_2c8;
              if ((local_1f8 & 1) != 0) {
                operator_delete(local_1e8);
              }
            }
            local_2c8._4_4_ = (int)(uVar6 >> 0x20);
            if (local_2c8._4_4_ == 1) {
              pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)FlatBuffersSerialize::getInstance();
              pcVar24 = (char *)((ulong)local_d8 | 1);
              uVar30 = (ulong)((byte)local_d8[0] >> 1);
              if (((byte)local_d8[0] & 1) != 0) {
                pcVar24 = local_c8;
                uVar30 = local_d0;
              }
              local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
              puVar3 = *(uint **)(pvVar27 + 8);
              if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
                *puVar3 = local_1f8;
                *(uint **)(pvVar27 + 8) = puVar3 + 1;
              }
              else {
                std::__ndk1::
                vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                          (pvVar27,(Offset *)&local_1f8);
              }
              local_2c8 = CONCAT44(1,(int)local_2c8);
              uVar6 = local_2c8;
            }
          }
          else {
            iVar13 = memcmp(piVar2,"DownImage",9);
            if (iVar13 == 0) {
              lVar28 = *(long *)(this + 0x60);
              while (local_2c8._4_4_ = (int)(uVar6 >> 0x20), lVar28 != 0) {
                pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
                sVar23 = strlen(pcVar24);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_1e0,pcVar24,sVar23);
                pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
                pUVar25 = (UserCameraReader *)
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_1f8,pcVar24);
                pcVar24 = local_1e8;
                uVar5 = uStack_1f0;
                uVar30 = (ulong)((byte)local_1e0[0] >> 1);
                if (((byte)local_1e0[0] & 1) != 0) {
                  uVar30 = local_1d8;
                }
                if (uVar30 == 5) {
                  piVar2 = piVar29;
                  if (((byte)local_1e0[0] & 1) != 0) {
                    piVar2 = local_1d0;
                  }
                  iVar13 = memcmp(piVar2,"Plist",5);
                  if (iVar13 == 0) {
                    uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                    pcVar24 = pcVar22;
                    if ((local_1f8 & 1) != 0) {
                      uVar30 = uStack_1f0;
                      pcVar24 = local_1e8;
                    }
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign(local_168,pcVar24,uVar30);
                  }
                }
                else if (uVar30 == 4) {
                  piVar2 = piVar29;
                  if (((byte)local_1e0[0] & 1) != 0) {
                    piVar2 = local_1d0;
                  }
                  if (*piVar2 == 0x68746150) {
                    uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                    pcVar24 = pcVar22;
                    if ((local_1f8 & 1) != 0) {
                      uVar30 = uStack_1f0;
                      pcVar24 = local_1e8;
                    }
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign(local_150,pcVar24,uVar30);
                  }
                  else if (*piVar2 == 0x65707954) {
                    uStack_268 = 0;
                    local_260 = (char *)0x0;
                    local_270 = 0;
                    if ((local_1f8 & 1) == 0) {
                      local_270 = CONCAT44(uStack_1f4,local_1f8);
                      uStack_268 = uStack_1f0;
                      local_260 = local_1e8;
                    }
                    else {
                      if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (uStack_1f0 < 0x17) {
                        local_270 = (ulong)(byte)((int)uStack_1f0 << 1);
                        pcVar26 = (char *)((ulong)&local_270 | 1);
                        if (uStack_1f0 != 0) goto LAB_00ce4204;
                      }
                      else {
                        uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                        pcVar26 = operator_new(uVar30);
                        local_270 = uVar30 | 1;
                        uStack_268 = uVar5;
                        local_260 = pcVar26;
LAB_00ce4204:
                        pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                      }
                      pcVar26[uVar5] = '\0';
                    }
                    uVar14 = getResourceType(pUVar25,&local_270);
                    local_2c8 = CONCAT44(local_2c8._4_4_,uVar14);
                    uVar6 = local_2c8;
                    if ((local_270 & 1) != 0) {
                      operator_delete(local_260);
                    }
                  }
                }
                local_2c8 = uVar6;
                lVar28 = *(long *)(lVar28 + 0x38);
                uVar6 = local_2c8;
                if ((local_1f8 & 1) != 0) {
                  operator_delete(local_1e8);
                }
              }
              local_2c8._0_4_ = (int)uVar6;
              if ((int)local_2c8 == 1) {
                pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                           *)FlatBuffersSerialize::getInstance();
                pcVar24 = (char *)((ulong)local_168 | 1);
                uVar30 = (ulong)((byte)local_168[0] >> 1);
                if (((byte)local_168[0] & 1) != 0) {
                  pcVar24 = local_158;
                  uVar30 = local_160;
                }
                local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
                puVar3 = *(uint **)(pvVar27 + 8);
                if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
                  *puVar3 = local_1f8;
                  *(uint **)(pvVar27 + 8) = puVar3 + 1;
                }
                else {
                  std::__ndk1::
                  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                  ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                            (pvVar27,(Offset *)&local_1f8);
                }
                local_2c8 = CONCAT44(local_2c8._4_4_,1);
                uVar6 = local_2c8;
              }
            }
            else {
              iVar13 = memcmp(piVar2,"BackImage",9);
              if (iVar13 == 0) {
                lVar28 = *(long *)(this + 0x60);
                while (lVar28 != 0) {
                  pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
                  sVar23 = strlen(pcVar24);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_1e0,pcVar24,sVar23);
                  pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
                  pUVar25 = (UserCameraReader *)
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::basic_string<decltype(nullptr)>
                                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&local_1f8,pcVar24);
                  pcVar24 = local_1e8;
                  uVar5 = uStack_1f0;
                  uVar30 = (ulong)((byte)local_1e0[0] >> 1);
                  if (((byte)local_1e0[0] & 1) != 0) {
                    uVar30 = local_1d8;
                  }
                  if (uVar30 == 5) {
                    piVar2 = piVar29;
                    if (((byte)local_1e0[0] & 1) != 0) {
                      piVar2 = local_1d0;
                    }
                    iVar13 = memcmp(piVar2,"Plist",5);
                    if (iVar13 == 0) {
                      uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                      pcVar24 = pcVar22;
                      if ((local_1f8 & 1) != 0) {
                        uVar30 = uStack_1f0;
                        pcVar24 = local_1e8;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign(local_1c8,pcVar24,uVar30);
                    }
                  }
                  else if (uVar30 == 4) {
                    piVar2 = piVar29;
                    if (((byte)local_1e0[0] & 1) != 0) {
                      piVar2 = local_1d0;
                    }
                    if (*piVar2 == 0x68746150) {
                      uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                      pcVar24 = pcVar22;
                      if ((local_1f8 & 1) != 0) {
                        uVar30 = uStack_1f0;
                        pcVar24 = local_1e8;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign(local_1b0,pcVar24,uVar30);
                    }
                    else if (*piVar2 == 0x65707954) {
                      uStack_2a8 = 0;
                      local_2a0 = (char *)0x0;
                      local_2b0 = 0;
                      if ((local_1f8 & 1) == 0) {
                        local_2b0 = CONCAT44(uStack_1f4,local_1f8);
                        uStack_2a8 = uStack_1f0;
                        local_2a0 = local_1e8;
                      }
                      else {
                        if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_length_error();
                        }
                        if (uStack_1f0 < 0x17) {
                          local_2b0 = (ulong)(byte)((int)uStack_1f0 << 1);
                          pcVar26 = (char *)((ulong)&local_2b0 | 1);
                          if (uStack_1f0 != 0) goto LAB_00ce3bd8;
                        }
                        else {
                          uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                          pcVar26 = operator_new(uVar30);
                          local_2b0 = uVar30 | 1;
                          uStack_2a8 = uVar5;
                          local_2a0 = pcVar26;
LAB_00ce3bd8:
                          pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                        }
                        pcVar26[uVar5] = '\0';
                      }
                      local_2d4 = getResourceType(pUVar25,&local_2b0);
                      if ((local_2b0 & 1) != 0) {
                        operator_delete(local_2a0);
                      }
                    }
                  }
                  lVar28 = *(long *)(lVar28 + 0x38);
                  if ((local_1f8 & 1) != 0) {
                    operator_delete(local_1e8);
                  }
                }
                if (local_2d4 == 1) {
                  pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                             *)FlatBuffersSerialize::getInstance();
                  pcVar24 = (char *)((ulong)local_1c8 | 1);
                  uVar30 = (ulong)((byte)local_1c8[0] >> 1);
                  if (((byte)local_1c8[0] & 1) != 0) {
                    pcVar24 = local_1b8;
                    uVar30 = local_1c0;
                  }
                  local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
                  puVar3 = *(uint **)(pvVar27 + 8);
                  if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
                    *puVar3 = local_1f8;
                    *(uint **)(pvVar27 + 8) = puVar3 + 1;
                  }
                  else {
                    std::__ndk1::
                    vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                    ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                              (pvVar27,(Offset *)&local_1f8);
                  }
                  local_2d4 = 1;
                }
              }
            }
          }
        }
        break;
      case 10:
        piVar2 = piVar29;
        if (((byte)local_1e0[0] & 1) != 0) {
          piVar2 = local_1d0;
        }
        iVar13 = memcmp(piVar2,"RightImage",10);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this + 0x60);
          while (lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            sVar23 = strlen(pcVar24);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_1e0,pcVar24,sVar23);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pUVar25 = (UserCameraReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1f8,pcVar24);
            pcVar24 = local_1e8;
            uVar5 = uStack_1f0;
            uVar30 = (ulong)((byte)local_1e0[0] >> 1);
            if (((byte)local_1e0[0] & 1) != 0) {
              uVar30 = local_1d8;
            }
            if (uVar30 == 5) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              iVar13 = memcmp(piVar2,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_108,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              if (*piVar2 == 0x68746150) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_f0,pcVar24,uVar30);
              }
              else if (*piVar2 == 0x65707954) {
                uStack_228 = 0;
                local_220 = (char *)0x0;
                local_230 = 0;
                if ((local_1f8 & 1) == 0) {
                  local_230 = CONCAT44(uStack_1f4,local_1f8);
                  uStack_228 = uStack_1f0;
                  local_220 = local_1e8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1f0 < 0x17) {
                    local_230 = (ulong)(byte)((int)uStack_1f0 << 1);
                    pcVar26 = (char *)((ulong)&local_230 | 1);
                    if (uStack_1f0 != 0) goto LAB_00ce39ac;
                  }
                  else {
                    uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_230 = uVar30 | 1;
                    uStack_228 = uVar5;
                    local_220 = pcVar26;
LAB_00ce39ac:
                    pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                iVar12 = getResourceType(pUVar25,&local_230);
                if ((local_230 & 1) != 0) {
                  operator_delete(local_220);
                }
              }
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if ((local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (iVar12 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_108 | 1);
            uVar30 = (ulong)((byte)local_108[0] >> 1);
            if (((byte)local_108[0] & 1) != 0) {
              pcVar24 = local_f8;
              uVar30 = local_100;
            }
            local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_1f8;
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
              iVar12 = 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)&local_1f8);
              iVar12 = 1;
            }
          }
        }
        break;
      case 0xc:
        piVar2 = piVar29;
        if (((byte)local_1e0[0] & 1) != 0) {
          piVar2 = local_1d0;
        }
        iVar13 = memcmp(piVar2,"ForwardImage",0xc);
        if (iVar13 == 0) {
          lVar28 = *(long *)(this + 0x60);
          while (lVar28 != 0) {
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 8));
            sVar23 = strlen(pcVar24);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_1e0,pcVar24,sVar23);
            pcVar24 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar28 + 0x20));
            pUVar25 = (UserCameraReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1f8,pcVar24);
            pcVar24 = local_1e8;
            uVar5 = uStack_1f0;
            uVar30 = (ulong)((byte)local_1e0[0] >> 1);
            if (((byte)local_1e0[0] & 1) != 0) {
              uVar30 = local_1d8;
            }
            if (uVar30 == 5) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              iVar13 = memcmp(piVar2,"Plist",5);
              if (iVar13 == 0) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_198,pcVar24,uVar30);
              }
            }
            else if (uVar30 == 4) {
              piVar2 = piVar29;
              if (((byte)local_1e0[0] & 1) != 0) {
                piVar2 = local_1d0;
              }
              if (*piVar2 == 0x68746150) {
                uVar30 = (ulong)((byte)local_1f8._0_1_ >> 1);
                pcVar24 = pcVar22;
                if ((local_1f8 & 1) != 0) {
                  uVar30 = uStack_1f0;
                  pcVar24 = local_1e8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_180,pcVar24,uVar30);
              }
              else if (*piVar2 == 0x65707954) {
                uStack_288 = 0;
                local_280 = (char *)0x0;
                local_290 = 0;
                if ((local_1f8 & 1) == 0) {
                  local_290 = CONCAT44(uStack_1f4,local_1f8);
                  uStack_288 = uStack_1f0;
                  local_280 = local_1e8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1f0 < 0x17) {
                    local_290 = (ulong)(byte)((int)uStack_1f0 << 1);
                    pcVar26 = (char *)((ulong)&local_290 | 1);
                    if (uStack_1f0 != 0) goto LAB_00ce3db8;
                  }
                  else {
                    uVar30 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar26 = operator_new(uVar30);
                    local_290 = uVar30 | 1;
                    uStack_288 = uVar5;
                    local_280 = pcVar26;
LAB_00ce3db8:
                    pUVar25 = memcpy(pcVar26,pcVar24,uVar5);
                  }
                  pcVar26[uVar5] = '\0';
                }
                local_2b8 = getResourceType(pUVar25,&local_290);
                if ((local_290 & 1) != 0) {
                  operator_delete(local_280);
                }
              }
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if ((local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (local_2b8 == 1) {
            pvVar27 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            pcVar24 = (char *)((ulong)local_198 | 1);
            uVar30 = (ulong)((byte)local_198[0] >> 1);
            if (((byte)local_198[0] & 1) != 0) {
              pcVar24 = local_188;
              uVar30 = local_190;
            }
            local_1f8 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar24,uVar30);
            puVar3 = *(uint **)(pvVar27 + 8);
            if (puVar3 < *(uint **)(pvVar27 + 0x10)) {
              *puVar3 = local_1f8;
              *(uint **)(pvVar27 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (pvVar27,(Offset *)&local_1f8);
            }
            local_2b8 = 1;
          }
        }
      }
      local_2c8 = uVar6;
      this = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this,(char *)0x0);
      if (((byte)local_1e0[0] & 1) != 0) {
        operator_delete(local_1d0);
      }
    } while (this != (XMLNode *)0x0);
  }
  uVar30 = (ulong)((byte)local_c0[0] >> 1);
  piVar29 = (int *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar30 = local_b8;
    piVar29 = local_b0;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,(char *)piVar29,uVar30);
  uVar30 = (ulong)((byte)local_d8[0] >> 1);
  pcVar22 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar30 = local_d0;
    pcVar22 = local_c8;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar14 = flatbuffers::CreateResourceData(in_x2,uVar14,uVar15,local_2c8._4_4_);
  uVar30 = (ulong)((byte)local_f0[0] >> 1);
  pcVar22 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar30 = local_e8;
    pcVar22 = local_e0;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar30 = (ulong)((byte)local_108[0] >> 1);
  pcVar22 = (char *)((ulong)local_108 | 1);
  if (((byte)local_108[0] & 1) != 0) {
    uVar30 = local_100;
    pcVar22 = local_f8;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar15 = flatbuffers::CreateResourceData(in_x2,uVar15,uVar16,iVar12);
  uVar30 = (ulong)((byte)local_120[0] >> 1);
  pcVar22 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar30 = local_118;
    pcVar22 = local_110;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar30 = (ulong)((byte)local_138[0] >> 1);
  pcVar22 = (char *)((ulong)local_138 | 1);
  if (((byte)local_138[0] & 1) != 0) {
    uVar30 = local_130;
    pcVar22 = local_128;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar16 = flatbuffers::CreateResourceData(in_x2,uVar16,uVar17,iVar11);
  uVar30 = (ulong)((byte)local_150[0] >> 1);
  pcVar22 = (char *)((ulong)local_150 | 1);
  if (((byte)local_150[0] & 1) != 0) {
    uVar30 = local_148;
    pcVar22 = local_140;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar30 = (ulong)((byte)local_168[0] >> 1);
  pcVar22 = (char *)((ulong)local_168 | 1);
  if (((byte)local_168[0] & 1) != 0) {
    uVar30 = local_160;
    pcVar22 = local_158;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar17 = flatbuffers::CreateResourceData(in_x2,uVar17,uVar18,local_2c8 & 0xffffffff);
  uVar30 = (ulong)((byte)local_180[0] >> 1);
  pcVar22 = (char *)((ulong)local_180 | 1);
  if (((byte)local_180[0] & 1) != 0) {
    uVar30 = local_178;
    pcVar22 = local_170;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar30 = (ulong)((byte)local_198[0] >> 1);
  pcVar22 = (char *)((ulong)local_198 | 1);
  if (((byte)local_198[0] & 1) != 0) {
    uVar30 = local_190;
    pcVar22 = local_188;
  }
  uVar19 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar18 = flatbuffers::CreateResourceData(in_x2,uVar18,uVar19,local_2b8);
  uVar30 = (ulong)((byte)local_1b0[0] >> 1);
  pcVar22 = (char *)((ulong)local_1b0 | 1);
  if (((byte)local_1b0[0] & 1) != 0) {
    uVar30 = local_1a8;
    pcVar22 = local_1a0;
  }
  uVar19 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar30 = (ulong)((byte)local_1c8[0] >> 1);
  pcVar22 = (char *)((ulong)local_1c8 | 1);
  if (((byte)local_1c8[0] & 1) != 0) {
    uVar30 = local_1c0;
    pcVar22 = local_1b8;
  }
  uVar20 = flatbuffers::FlatBufferBuilder::CreateString(in_x2,pcVar22,uVar30);
  uVar19 = flatbuffers::CreateResourceData(in_x2,uVar19,uVar20,local_2d4);
  uVar9 = flatbuffers::CreateUserCameraOptions
                    (fVar34,uVar33,uVar35,in_x2,uVar9,local_2b4,bVar8 & bVar7,uVar14,uVar15,uVar16,
                     uVar17,uVar18,uVar19);
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
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

