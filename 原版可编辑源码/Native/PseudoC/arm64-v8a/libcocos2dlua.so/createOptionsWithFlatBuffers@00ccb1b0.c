
/* WARNING: Type propagation algorithm not settling */
/* TabHeaderReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
TabHeaderReader::createOptionsWithFlatBuffers
          (TabHeaderReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  long *plVar19;
  char *pcVar20;
  XMLNode *this_00;
  char *pcVar21;
  size_t sVar22;
  TabHeaderReader *pTVar23;
  char *pcVar24;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  uint *puVar25;
  long lVar26;
  int *piVar27;
  char *pcVar28;
  ulong uVar29;
  undefined8 local_2f8;
  undefined8 local_2f0;
  int local_2dc;
  ulong local_2d0;
  ulong uStack_2c8;
  char *local_2c0;
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
  uint local_218;
  undefined4 uStack_214;
  ulong uStack_210;
  char *local_208;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_200 [16];
  void *local_1f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e8;
  undefined7 uStack_1e7;
  ulong uStack_1e0;
  char *local_1d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1d0;
  undefined2 local_1cf;
  undefined1 local_1cd;
  ulong local_1c8;
  int *local_1c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1b8 [8];
  ulong local_1b0;
  char *local_1a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1a0 [8];
  ulong local_198;
  char *local_190;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_188 [8];
  ulong local_180;
  char *local_178;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_170 [8];
  ulong local_168;
  char *local_160;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_158 [8];
  ulong local_150;
  char *local_148;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_140 [8];
  ulong local_138;
  char *local_130;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_128 [8];
  ulong local_120;
  char *local_118;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_110 [8];
  ulong local_108;
  char *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [8];
  ulong local_f0;
  char *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar19 = (long *)cocostudio::WidgetReader::getInstance();
  uVar7 = (**(code **)(*plVar19 + 0x28))(plVar19,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  cocos2d::Color4B::Color4B((Color4B *)&local_98,0xff,0xff,0xff,0xff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_110,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_128,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_140,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_170,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_188,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_1b8,"");
  lVar26 = *(long *)(param_1 + 0x60);
  if (lVar26 == 0) {
    local_2dc = 0xc;
  }
  else {
    local_2dc = 0xc;
    do {
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1d0,pcVar20);
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1e8,pcVar20);
      bVar5 = local_1d0;
      uVar29 = (ulong)((byte)local_1d0 >> 1);
      if (((byte)local_1d0 & 1) != 0) {
        uVar29 = local_1c8;
      }
      sVar22 = 8;
      if (uVar29 < 9) {
        sVar22 = uVar29;
      }
      if (sVar22 == 0) {
LAB_00ccb394:
        if (8 < uVar29 == 7 < uVar29) goto LAB_00ccb3c8;
        pcVar20 = (char *)((ulong)&local_1e8 | 1);
        if (((byte)local_1e8 & 1) != 0) {
          pcVar20 = local_1d8;
        }
        local_2dc = atoi(pcVar20);
      }
      else {
        piVar27 = (int *)((ulong)&local_1d0 | 1);
        if (((byte)local_1d0 & 1) != 0) {
          piVar27 = local_1c0;
        }
        iVar8 = memcmp(piVar27,"FontSize",sVar22);
        if (iVar8 == 0) goto LAB_00ccb394;
LAB_00ccb3c8:
        sVar22 = 9;
        if (uVar29 < 10) {
          sVar22 = uVar29;
        }
        if (sVar22 == 0) {
          if (9 < uVar29 != 8 < uVar29) goto LAB_00ccb418;
        }
        else {
          piVar27 = (int *)((ulong)&local_1d0 | 1);
          if (((byte)bVar5 & 1) != 0) {
            piVar27 = local_1c0;
          }
          iVar8 = memcmp(piVar27,"TitleText",sVar22);
          if ((iVar8 == 0) && (9 < uVar29 != 8 < uVar29)) {
LAB_00ccb418:
            uVar29 = (ulong)((byte)local_1e8 >> 1);
            pcVar20 = (char *)((ulong)&local_1e8 | 1);
            if (((byte)local_1e8 & 1) != 0) {
              uVar29 = uStack_1e0;
              pcVar20 = local_1d8;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_90,pcVar20,uVar29);
          }
        }
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (((byte)local_1e8 & 1) != 0) {
        operator_delete(local_1d8);
      }
      if (((byte)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
    } while (lVar26 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    local_2f8 = 0;
    local_2f0 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    piVar27 = (int *)((ulong)&local_1d0 | 1);
    pcVar20 = (char *)((ulong)&local_1e8 | 1);
    iVar10 = 0;
    iVar8 = 0;
    pcVar28 = (char *)((ulong)&local_218 | 1);
    local_2f8 = 0;
    local_2f0 = 0;
    do {
      pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1d0,pcVar21);
      uVar29 = (ulong)((byte)local_1d0 >> 1);
      if (((byte)local_1d0 & 1) != 0) {
        uVar29 = local_1c8;
      }
      switch(uVar29) {
      case 9:
        piVar1 = piVar27;
        if (((byte)local_1d0 & 1) != 0) {
          piVar1 = local_1c0;
        }
        iVar9 = memcmp(piVar1,"TextColor",9);
        if (iVar9 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_1d0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_1e8,pcVar21);
            uVar29 = (ulong)((byte)local_1d0 >> 1);
            if (((byte)local_1d0 & 1) != 0) {
              uVar29 = local_1c8;
            }
            if (uVar29 == 1) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              cVar2 = (char)*piVar1;
              if (cVar2 == 'B') {
                pcVar21 = pcVar20;
                if (((byte)local_1e8 & 1) != 0) {
                  pcVar21 = local_1d8;
                }
                iVar9 = atoi(pcVar21);
                local_96 = (undefined1)iVar9;
              }
              else if (cVar2 == 'G') {
                pcVar21 = pcVar20;
                if (((byte)local_1e8 & 1) != 0) {
                  pcVar21 = local_1d8;
                }
                iVar9 = atoi(pcVar21);
                local_98 = CONCAT11((char)iVar9,local_98._0_1_);
              }
              else if (cVar2 == 'R') {
                pcVar21 = pcVar20;
                if (((byte)local_1e8 & 1) != 0) {
                  pcVar21 = local_1d8;
                }
                iVar9 = atoi(pcVar21);
                local_98 = CONCAT11(local_98._1_1_,(char)iVar9);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((byte)local_1e8 & 1) != 0) {
              operator_delete(local_1d8);
            }
          }
        }
        break;
      case 0xc:
        piVar1 = piVar27;
        if (((byte)local_1d0 & 1) != 0) {
          piVar1 = local_1c0;
        }
        iVar9 = memcmp(piVar1,"FontResource",0xc);
        if (iVar9 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_1d0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pTVar23 = (TabHeaderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_1e8,pcVar21);
            pcVar21 = local_1d8;
            uVar4 = uStack_1e0;
            uVar29 = (ulong)((byte)local_1d0 >> 1);
            if (((byte)local_1d0 & 1) != 0) {
              uVar29 = local_1c8;
            }
            if (uVar29 == 5) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                pcVar21 = pcVar20;
                uVar29 = (ulong)((byte)local_1e8 >> 1);
                if (((byte)local_1e8 & 1) != 0) {
                  pcVar21 = local_1d8;
                  uVar29 = uStack_1e0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_1b8,pcVar21,uVar29);
              }
            }
            else if (uVar29 == 4) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              if (*piVar1 == 0x68746150) {
                pcVar21 = pcVar20;
                uVar29 = (ulong)((byte)local_1e8 >> 1);
                if (((byte)local_1e8 & 1) != 0) {
                  pcVar21 = local_1d8;
                  uVar29 = uStack_1e0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_1a0,pcVar21,uVar29);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_2c8 = 0;
                local_2c0 = (char *)0x0;
                local_2d0 = 0;
                if (((byte)local_1e8 & 1) == 0) {
                  local_2d0 = CONCAT71(uStack_1e7,local_1e8);
                  uStack_2c8 = uStack_1e0;
                  local_2c0 = local_1d8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1e0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1e0 < 0x17) {
                    local_2d0 = (ulong)(byte)((int)uStack_1e0 << 1);
                    pcVar24 = (char *)((ulong)&local_2d0 | 1);
                    if (uStack_1e0 != 0) goto LAB_00ccba4c;
                  }
                  else {
                    uVar29 = uStack_1e0 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar29);
                    local_2d0 = uVar29 | 1;
                    uStack_2c8 = uVar4;
                    local_2c0 = pcVar24;
LAB_00ccba4c:
                    pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                  }
                  pcVar24[uVar4] = '\0';
                }
                uVar11 = getResourceType(pTVar23,&local_2d0);
                local_2f8 = CONCAT44(uVar11,(int)local_2f8);
                if ((local_2d0 & 1) != 0) {
                  operator_delete(local_2c0);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((byte)local_1e8 & 1) != 0) {
              operator_delete(local_1d8);
            }
          }
        }
        break;
      case 0x12:
        piVar1 = piVar27;
        if (((byte)local_1d0 & 1) != 0) {
          piVar1 = local_1c0;
        }
        iVar9 = memcmp(piVar1,"NormalBackFileData",0x12);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_200,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_1d0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pTVar23 = (TabHeaderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_218,pcVar21);
            pcVar21 = local_208;
            uVar4 = uStack_210;
            uVar29 = (ulong)((byte)local_1d0 >> 1);
            if (((byte)local_1d0 & 1) != 0) {
              uVar29 = local_1c8;
            }
            if (uVar29 == 5) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c8,pcVar21,uVar29);
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(&local_1e8,pcVar21,uVar29);
              }
            }
            else if (uVar29 == 4) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              if (*piVar1 == 0x68746150) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_b0,pcVar21,uVar29);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_228 = 0;
                local_220 = (char *)0x0;
                local_230 = 0;
                if ((local_218 & 1) == 0) {
                  local_230 = CONCAT44(uStack_214,local_218);
                  uStack_228 = uStack_210;
                  local_220 = local_208;
                }
                else {
                  if (0xffffffffffffffef < uStack_210) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_210 < 0x17) {
                    local_230 = (ulong)(byte)((int)uStack_210 << 1);
                    pcVar24 = (char *)((ulong)&local_230 | 1);
                    if (uStack_210 != 0) goto LAB_00ccbee0;
                  }
                  else {
                    uVar29 = uStack_210 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar29);
                    local_230 = uVar29 | 1;
                    uStack_228 = uVar4;
                    local_220 = pcVar24;
LAB_00ccbee0:
                    pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                  }
                  pcVar24[uVar4] = '\0';
                }
                iVar10 = getResourceType(pTVar23,&local_230);
                if ((local_230 & 1) != 0) {
                  operator_delete(local_220);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_218 & 1) != 0) {
              operator_delete(local_208);
            }
          }
          if (iVar10 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)cocostudio::FlatBuffersSerialize::getInstance();
            pcVar21 = pcVar20;
            uVar29 = (ulong)((byte)local_1e8 >> 1);
            if (((byte)local_1e8 & 1) != 0) {
              pcVar21 = local_1d8;
              uVar29 = uStack_1e0;
            }
            local_218 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar21,uVar29);
            puVar25 = *(uint **)(this_01 + 8);
            if (puVar25 < *(uint **)(this_01 + 0x10)) {
LAB_00ccc478:
              *puVar25 = local_218;
              *(uint **)(this_01 + 8) = puVar25 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_218);
            }
          }
        }
        else {
          iVar9 = memcmp(piVar1,"NodeNormalFileData",0x12);
          if (iVar9 != 0) break;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_200,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_1d0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pTVar23 = (TabHeaderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_218,pcVar21);
            pcVar21 = local_208;
            uVar4 = uStack_210;
            uVar29 = (ulong)((byte)local_1d0 >> 1);
            if (((byte)local_1d0 & 1) != 0) {
              uVar29 = local_1c8;
            }
            if (uVar29 == 5) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_128,pcVar21,uVar29);
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(&local_1e8,pcVar21,uVar29);
              }
            }
            else if (uVar29 == 4) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              if (*piVar1 == 0x68746150) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_110,pcVar21,uVar29);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_268 = 0;
                local_260 = (char *)0x0;
                local_270 = 0;
                if ((local_218 & 1) == 0) {
                  local_270 = CONCAT44(uStack_214,local_218);
                  uStack_268 = uStack_210;
                  local_260 = local_208;
                }
                else {
                  if (0xffffffffffffffef < uStack_210) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_210 < 0x17) {
                    local_270 = (ulong)(byte)((int)uStack_210 << 1);
                    pcVar24 = (char *)((ulong)&local_270 | 1);
                    if (uStack_210 != 0) goto LAB_00ccb85c;
                  }
                  else {
                    uVar29 = uStack_210 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar29);
                    local_270 = uVar29 | 1;
                    uStack_268 = uVar4;
                    local_260 = pcVar24;
LAB_00ccb85c:
                    pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                  }
                  pcVar24[uVar4] = '\0';
                }
                uVar11 = getResourceType(pTVar23,&local_270);
                local_2f0._4_4_ = (int)(local_2f0 >> 0x20);
                local_2f0 = CONCAT44(local_2f0._4_4_,uVar11);
                if ((local_270 & 1) != 0) {
                  operator_delete(local_260);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_218 & 1) != 0) {
              operator_delete(local_208);
            }
          }
          if ((int)local_2f0 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)cocostudio::FlatBuffersSerialize::getInstance();
            pcVar21 = pcVar20;
            uVar29 = (ulong)((byte)local_1e8 >> 1);
            if (((byte)local_1e8 & 1) != 0) {
              pcVar21 = local_1d8;
              uVar29 = uStack_1e0;
            }
            local_218 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar21,uVar29);
            puVar25 = *(uint **)(this_01 + 8);
            if (puVar25 < *(uint **)(this_01 + 0x10)) goto LAB_00ccc478;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (this_01,(Offset *)&local_218);
          }
        }
        goto LAB_00ccc480;
      case 0x13:
        piVar1 = piVar27;
        if (((byte)local_1d0 & 1) != 0) {
          piVar1 = local_1c0;
        }
        iVar9 = memcmp(piVar1,"PressedBackFileData",0x13);
        if (iVar9 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_200,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_1d0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pTVar23 = (TabHeaderReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_218,pcVar21);
            pcVar21 = local_208;
            uVar4 = uStack_210;
            uVar29 = (ulong)((byte)local_1d0 >> 1);
            if (((byte)local_1d0 & 1) != 0) {
              uVar29 = local_1c8;
            }
            if (uVar29 == 5) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              iVar9 = memcmp(piVar1,"Plist",5);
              if (iVar9 == 0) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_f8,pcVar21,uVar29);
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(&local_1e8,pcVar21,uVar29);
              }
            }
            else if (uVar29 == 4) {
              piVar1 = piVar27;
              if (((byte)local_1d0 & 1) != 0) {
                piVar1 = local_1c0;
              }
              if (*piVar1 == 0x68746150) {
                uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                pcVar21 = pcVar28;
                if ((local_218 & 1) != 0) {
                  uVar29 = uStack_210;
                  pcVar21 = local_208;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_e0,pcVar21,uVar29);
              }
              else if (*piVar1 == 0x65707954) {
                uStack_248 = 0;
                local_240 = (char *)0x0;
                local_250 = 0;
                if ((local_218 & 1) == 0) {
                  local_250 = CONCAT44(uStack_214,local_218);
                  uStack_248 = uStack_210;
                  local_240 = local_208;
                }
                else {
                  if (0xffffffffffffffef < uStack_210) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_210 < 0x17) {
                    local_250 = (ulong)(byte)((int)uStack_210 << 1);
                    pcVar24 = (char *)((ulong)&local_250 | 1);
                    if (uStack_210 != 0) goto LAB_00ccc128;
                  }
                  else {
                    uVar29 = uStack_210 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar29);
                    local_250 = uVar29 | 1;
                    uStack_248 = uVar4;
                    local_240 = pcVar24;
LAB_00ccc128:
                    pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                  }
                  pcVar24[uVar4] = '\0';
                }
                iVar8 = getResourceType(pTVar23,&local_250);
                if ((local_250 & 1) != 0) {
                  operator_delete(local_240);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_218 & 1) != 0) {
              operator_delete(local_208);
            }
          }
          if (iVar8 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)cocostudio::FlatBuffersSerialize::getInstance();
            pcVar21 = pcVar20;
            uVar29 = (ulong)((byte)local_1e8 >> 1);
            if (((byte)local_1e8 & 1) != 0) {
              pcVar21 = local_1d8;
              uVar29 = uStack_1e0;
            }
            local_218 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar21,uVar29);
            puVar25 = *(uint **)(this_01 + 8);
            if (puVar25 < *(uint **)(this_01 + 0x10)) goto LAB_00ccc478;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                      (this_01,(Offset *)&local_218);
          }
        }
        else {
          iVar9 = memcmp(piVar1,"DisableBackFileData",0x13);
          if (iVar9 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_1e8,"");
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_200,"");
            lVar26 = *(long *)(this_00 + 0x60);
            while (lVar26 != 0) {
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
              sVar22 = strlen(pcVar21);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (&local_1d0,pcVar21,sVar22);
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
              pTVar23 = (TabHeaderReader *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_218,pcVar21);
              pcVar21 = local_208;
              uVar4 = uStack_210;
              uVar29 = (ulong)((byte)local_1d0 >> 1);
              if (((byte)local_1d0 & 1) != 0) {
                uVar29 = local_1c8;
              }
              if (uVar29 == 5) {
                piVar1 = piVar27;
                if (((byte)local_1d0 & 1) != 0) {
                  piVar1 = local_1c0;
                }
                iVar9 = memcmp(piVar1,"Plist",5);
                if (iVar9 == 0) {
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_158,pcVar21,uVar29);
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(&local_1e8,pcVar21,uVar29);
                }
              }
              else if (uVar29 == 4) {
                piVar1 = piVar27;
                if (((byte)local_1d0 & 1) != 0) {
                  piVar1 = local_1c0;
                }
                if (*piVar1 == 0x68746150) {
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_140,pcVar21,uVar29);
                }
                else if (*piVar1 == 0x65707954) {
                  uStack_288 = 0;
                  local_280 = (char *)0x0;
                  local_290 = 0;
                  if ((local_218 & 1) == 0) {
                    local_290 = CONCAT44(uStack_214,local_218);
                    uStack_288 = uStack_210;
                    local_280 = local_208;
                  }
                  else {
                    if (0xffffffffffffffef < uStack_210) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_210 < 0x17) {
                      local_290 = (ulong)(byte)((int)uStack_210 << 1);
                      pcVar24 = (char *)((ulong)&local_290 | 1);
                      if (uStack_210 != 0) goto LAB_00ccc320;
                    }
                    else {
                      uVar29 = uStack_210 + 0x10 & 0xfffffffffffffff0;
                      pcVar24 = operator_new(uVar29);
                      local_290 = uVar29 | 1;
                      uStack_288 = uVar4;
                      local_280 = pcVar24;
LAB_00ccc320:
                      pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                    }
                    pcVar24[uVar4] = '\0';
                  }
                  uVar11 = getResourceType(pTVar23,&local_290);
                  local_2f0 = CONCAT44(uVar11,(int)local_2f0);
                  if ((local_290 & 1) != 0) {
                    operator_delete(local_280);
                  }
                }
              }
              lVar26 = *(long *)(lVar26 + 0x38);
              if ((local_218 & 1) != 0) {
                operator_delete(local_208);
              }
            }
            local_2f0._4_4_ = (int)(local_2f0 >> 0x20);
            bVar6 = local_2f0._4_4_ == 1;
            if (bVar6) {
              this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)cocostudio::FlatBuffersSerialize::getInstance();
              pcVar21 = pcVar20;
              uVar29 = (ulong)((byte)local_1e8 >> 1);
              if (((byte)local_1e8 & 1) != 0) {
                pcVar21 = local_1d8;
                uVar29 = uStack_1e0;
              }
              local_218 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar21,uVar29);
              puVar25 = *(uint **)(this_01 + 8);
              if (puVar25 < *(uint **)(this_01 + 0x10)) goto LAB_00ccc478;
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_218);
            }
          }
          else {
            iVar9 = memcmp(piVar1,"NodeDisableFileData",0x13);
            if (iVar9 != 0) break;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_1e8,"");
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_200,"");
            lVar26 = *(long *)(this_00 + 0x60);
            while (lVar26 != 0) {
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
              sVar22 = strlen(pcVar21);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (&local_1d0,pcVar21,sVar22);
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
              pTVar23 = (TabHeaderReader *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_218,pcVar21);
              pcVar21 = local_208;
              uVar4 = uStack_210;
              uVar29 = (ulong)((byte)local_1d0 >> 1);
              if (((byte)local_1d0 & 1) != 0) {
                uVar29 = local_1c8;
              }
              if (uVar29 == 5) {
                piVar1 = piVar27;
                if (((byte)local_1d0 & 1) != 0) {
                  piVar1 = local_1c0;
                }
                iVar9 = memcmp(piVar1,"Plist",5);
                if (iVar9 == 0) {
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_188,pcVar21,uVar29);
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(&local_1e8,pcVar21,uVar29);
                }
              }
              else if (uVar29 == 4) {
                piVar1 = piVar27;
                if (((byte)local_1d0 & 1) != 0) {
                  piVar1 = local_1c0;
                }
                if (*piVar1 == 0x68746150) {
                  uVar29 = (ulong)((byte)local_218._0_1_ >> 1);
                  pcVar21 = pcVar28;
                  if ((local_218 & 1) != 0) {
                    uVar29 = uStack_210;
                    pcVar21 = local_208;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(local_170,pcVar21,uVar29);
                }
                else if (*piVar1 == 0x65707954) {
                  uStack_2a8 = 0;
                  local_2a0 = (char *)0x0;
                  local_2b0 = 0;
                  if ((local_218 & 1) == 0) {
                    local_2b0 = CONCAT44(uStack_214,local_218);
                    uStack_2a8 = uStack_210;
                    local_2a0 = local_208;
                  }
                  else {
                    if (0xffffffffffffffef < uStack_210) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uStack_210 < 0x17) {
                      local_2b0 = (ulong)(byte)((int)uStack_210 << 1);
                      pcVar24 = (char *)((ulong)&local_2b0 | 1);
                      if (uStack_210 != 0) goto LAB_00ccbc98;
                    }
                    else {
                      uVar29 = uStack_210 + 0x10 & 0xfffffffffffffff0;
                      pcVar24 = operator_new(uVar29);
                      local_2b0 = uVar29 | 1;
                      uStack_2a8 = uVar4;
                      local_2a0 = pcVar24;
LAB_00ccbc98:
                      pTVar23 = memcpy(pcVar24,pcVar21,uVar4);
                    }
                    pcVar24[uVar4] = '\0';
                  }
                  uVar11 = getResourceType(pTVar23,&local_2b0);
                  local_2f8._4_4_ = (undefined4)(local_2f8 >> 0x20);
                  local_2f8 = CONCAT44(local_2f8._4_4_,uVar11);
                  if ((local_2b0 & 1) != 0) {
                    operator_delete(local_2a0);
                  }
                }
              }
              lVar26 = *(long *)(lVar26 + 0x38);
              if ((local_218 & 1) != 0) {
                operator_delete(local_208);
              }
            }
            if ((int)local_2f8 == 1) {
              this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                         *)cocostudio::FlatBuffersSerialize::getInstance();
              pcVar21 = pcVar20;
              uVar29 = (ulong)((byte)local_1e8 >> 1);
              if (((byte)local_1e8 & 1) != 0) {
                pcVar21 = local_1d8;
                uVar29 = uStack_1e0;
              }
              local_218 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar21,uVar29);
              puVar25 = *(uint **)(this_01 + 8);
              if (puVar25 < *(uint **)(this_01 + 0x10)) goto LAB_00ccc478;
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_218);
            }
          }
        }
LAB_00ccc480:
        if (((byte)local_200[0] & 1) != 0) {
          operator_delete(local_1f0);
        }
        if (((byte)local_1e8 & 1) != 0) {
          operator_delete(local_1d8);
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_1d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff;
  local_1cf = local_98;
  local_1cd = local_96;
  uVar29 = (ulong)((byte)local_1a0[0] >> 1);
  pcVar20 = (char *)((ulong)local_1a0 | 1);
  if (((byte)local_1a0[0] & 1) != 0) {
    uVar29 = local_198;
    pcVar20 = local_190;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_1b8[0] >> 1);
  pcVar20 = (char *)((ulong)local_1b8 | 1);
  if (((byte)local_1b8[0] & 1) != 0) {
    uVar29 = local_1b0;
    pcVar20 = local_1a8;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar11 = flatbuffers::CreateResourceData(param_2,uVar11,uVar12,local_2f8._4_4_);
  uVar29 = (ulong)((byte)local_90[0] >> 1);
  pcVar20 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar29 = local_88;
    pcVar20 = local_80;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_b0[0] >> 1);
  pcVar20 = (char *)((ulong)local_b0 | 1);
  if (((byte)local_b0[0] & 1) != 0) {
    uVar29 = local_a8;
    pcVar20 = local_a0;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_c8[0] >> 1);
  pcVar20 = (char *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    uVar29 = local_c0;
    pcVar20 = local_b8;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar13 = flatbuffers::CreateResourceData(param_2,uVar13,uVar14,iVar10);
  uVar29 = (ulong)((byte)local_e0[0] >> 1);
  pcVar20 = (char *)((ulong)local_e0 | 1);
  if (((byte)local_e0[0] & 1) != 0) {
    uVar29 = local_d8;
    pcVar20 = local_d0;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_f8[0] >> 1);
  pcVar20 = (char *)((ulong)local_f8 | 1);
  if (((byte)local_f8[0] & 1) != 0) {
    uVar29 = local_f0;
    pcVar20 = local_e8;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar14 = flatbuffers::CreateResourceData(param_2,uVar14,uVar15,iVar8);
  uVar29 = (ulong)((byte)local_140[0] >> 1);
  pcVar20 = (char *)((ulong)local_140 | 1);
  if (((byte)local_140[0] & 1) != 0) {
    uVar29 = local_138;
    pcVar20 = local_130;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_158[0] >> 1);
  pcVar20 = (char *)((ulong)local_158 | 1);
  if (((byte)local_158[0] & 1) != 0) {
    uVar29 = local_150;
    pcVar20 = local_148;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar15 = flatbuffers::CreateResourceData(param_2,uVar15,uVar16,local_2f0._4_4_);
  uVar29 = (ulong)((byte)local_110[0] >> 1);
  pcVar20 = (char *)((ulong)local_110 | 1);
  if (((byte)local_110[0] & 1) != 0) {
    uVar29 = local_108;
    pcVar20 = local_100;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_128[0] >> 1);
  pcVar20 = (char *)((ulong)local_128 | 1);
  if (((byte)local_128[0] & 1) != 0) {
    uVar29 = local_120;
    pcVar20 = local_118;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar16 = flatbuffers::CreateResourceData(param_2,uVar16,uVar17,local_2f0 & 0xffffffff);
  uVar29 = (ulong)((byte)local_170[0] >> 1);
  pcVar20 = (char *)((ulong)local_170 | 1);
  if (((byte)local_170[0] & 1) != 0) {
    uVar29 = local_168;
    pcVar20 = local_160;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar29 = (ulong)((byte)local_188[0] >> 1);
  pcVar20 = (char *)((ulong)local_188 | 1);
  if (((byte)local_188[0] & 1) != 0) {
    uVar29 = local_180;
    pcVar20 = local_178;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar29);
  uVar17 = flatbuffers::CreateResourceData(param_2,uVar17,uVar18,local_2f8 & 0xffffffff);
  uVar7 = flatbuffers::CreateTabHeaderOption
                    (param_2,uVar7,uVar11,local_2dc,uVar12,&local_1d0,uVar13,uVar14,uVar15,uVar16,
                     uVar17);
  if (((byte)local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if (((byte)local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (((byte)local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if (((byte)local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
  if (((byte)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  if (((byte)local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if (((byte)local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  if (((byte)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

