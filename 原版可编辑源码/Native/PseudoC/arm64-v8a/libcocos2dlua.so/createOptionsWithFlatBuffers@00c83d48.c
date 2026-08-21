
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ListViewReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ListViewReader::createOptionsWithFlatBuffers
          (ListViewReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  ulong __n;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *plVar16;
  char *pcVar17;
  XMLNode *this_00;
  char *pcVar18;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  ListViewReader *pLVar19;
  char *__dest;
  size_t sVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined2 local_1b7;
  undefined1 local_1b5;
  undefined1 local_1b0;
  undefined2 local_1af;
  undefined1 local_1ad;
  undefined1 local_1a8;
  undefined2 local_1a7;
  undefined1 local_1a5;
  ulong local_1a0;
  ulong uStack_198;
  char *local_190;
  ulong local_180;
  ulong uStack_178;
  char *local_170;
  undefined8 local_168;
  ulong local_160;
  int *local_158;
  ulong local_150;
  ulong uStack_148;
  long *local_140;
  ulong local_138;
  ulong local_130;
  char *local_128;
  ulong local_120;
  ulong local_118;
  char *local_110;
  ulong local_108;
  ulong local_100;
  char *local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c0;
  undefined1 local_be;
  undefined2 local_b8;
  undefined1 local_b6;
  ulong local_b0;
  ulong local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  plVar16 = (long *)WidgetReader::getInstance();
  uVar9 = (**(code **)(*plVar16 + 0x28))(plVar16,param_1,param_2);
  local_90 = 0;
  local_88 = (char *)0x0;
  local_a0 = (char *)0x0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)&local_b8);
  cocos2d::Color3B::Color3B((Color3B *)&local_c0);
  cocos2d::Color3B::Color3B((Color3B *)&local_c8);
  cocos2d::Rect::Rect((Rect *)&local_e0);
  cocos2d::Size::Size((Size *)&local_e8);
  cocos2d::Size::Size((Size *)&local_f0,200.0,300.0);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_108 = 0;
  local_118 = 0;
  local_110 = (char *)0x0;
  local_128 = (char *)0x0;
  local_120 = 0;
  local_138 = 0;
  local_130 = 0;
  lVar23 = *(long *)(param_1 + 0x60);
  if (lVar23 == 0) {
    local_1d8 = 0;
    local_1cc = 0;
    bVar5 = 0;
    bVar7 = false;
    local_1d0._0_1_ = 0xff;
  }
  else {
    plVar16 = (long *)((ulong)&local_150 | 1);
    piVar22 = (int *)((ulong)&local_168 | 1);
    bVar7 = false;
    local_1cc = 0;
    bVar5 = 0;
    local_1d8 = 0;
    local_1d0 = 0xff;
    do {
      pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar17);
      pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,pcVar17);
      uVar21 = local_150 >> 1 & 0x7f;
      if ((local_150 & 1) != 0) {
        uVar21 = uStack_148;
      }
      switch(uVar21) {
      case 8:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        if (*plVar1 == 0x656c624170696c43) {
          uVar21 = local_168 >> 1 & 0x7f;
          if ((local_168 & 1) != 0) {
            uVar21 = local_160;
          }
          if (uVar21 == 4) {
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              piVar2 = local_158;
            }
            bVar7 = *piVar2 == 0x65757254;
          }
          else {
            bVar7 = false;
          }
        }
        break;
      case 10:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"ItemMargin",10);
        if (iVar10 == 0) {
          piVar2 = piVar22;
          if ((local_168 & 1) != 0) {
            piVar2 = local_158;
          }
          iVar10 = atoi((char *)piVar2);
          local_1d8 = CONCAT44(iVar10,(undefined4)local_1d8);
        }
        break;
      case 0xb:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"Scale9Width",0xb);
        if (iVar10 == 0) {
          piVar2 = piVar22;
          if ((local_168 & 1) != 0) {
            piVar2 = local_158;
          }
          dVar24 = atof((char *)piVar2);
          fStack_d8 = (float)dVar24;
        }
        break;
      case 0xc:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"Scale9Enable",0xc);
        if (iVar10 == 0) {
          uVar21 = local_168 >> 1 & 0x7f;
          if ((local_168 & 1) != 0) {
            uVar21 = local_160;
          }
          if (uVar21 == 4) {
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              piVar2 = local_158;
            }
            bVar5 = *piVar2 == 0x65757254 | bVar5;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"Scale9Height",0xc);
          if (iVar10 == 0) {
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              piVar2 = local_158;
            }
            dVar24 = atof((char *)piVar2);
            fStack_d4 = (float)dVar24;
          }
          else {
            iVar10 = memcmp(plVar1,"VerticalType",0xc);
            if (iVar10 == 0) {
              uVar21 = local_168 >> 1 & 0x7f;
              piVar2 = piVar22;
              if ((local_168 & 1) != 0) {
                uVar21 = local_160;
                piVar2 = local_158;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_138,(char *)piVar2,uVar21);
            }
          }
        }
        break;
      case 0xd:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"ComboBoxIndex",0xd);
        if (iVar10 == 0) {
          piVar2 = piVar22;
          if ((local_168 & 1) != 0) {
            piVar2 = local_158;
          }
          local_1cc = atoi((char *)piVar2);
        }
        else {
          iVar10 = memcmp(plVar1,"Scale9OriginX",0xd);
          if (iVar10 == 0) {
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              piVar2 = local_158;
            }
            dVar24 = atof((char *)piVar2);
            local_e0 = (float)dVar24;
          }
          else {
            iVar10 = memcmp(plVar1,"Scale9OriginY",0xd);
            if (iVar10 == 0) {
              piVar2 = piVar22;
              if ((local_168 & 1) != 0) {
                piVar2 = local_158;
              }
              dVar24 = atof((char *)piVar2);
              fStack_dc = (float)dVar24;
            }
            else {
              iVar10 = memcmp(plVar1,"DirectionType",0xd);
              if (iVar10 == 0) {
                uVar21 = local_168 >> 1 & 0x7f;
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  uVar21 = local_160;
                  piVar2 = local_158;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_108,(char *)piVar2,uVar21);
              }
            }
          }
        }
        break;
      case 0xe:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"BackColorAlpha",0xe);
        if (iVar10 == 0) {
          piVar2 = piVar22;
          if ((local_168 & 1) != 0) {
            piVar2 = local_158;
          }
          local_1d0 = atoi((char *)piVar2);
        }
        else {
          iVar10 = memcmp(plVar1,"HorizontalType",0xe);
          if (iVar10 == 0) {
            uVar21 = local_168 >> 1 & 0x7f;
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              uVar21 = local_160;
              piVar2 = local_158;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,(char *)piVar2,uVar21);
          }
        }
        break;
      case 0xf:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar10 = memcmp(plVar1,"IsBounceEnabled",0xf);
        if (iVar10 == 0) {
          uVar21 = local_168 >> 1 & 0x7f;
          if ((local_168 & 1) != 0) {
            uVar21 = local_160;
          }
          if (uVar21 == 4) {
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              piVar2 = local_158;
            }
            local_1d8 = CONCAT44(local_1d8._4_4_,(uint)(*piVar2 == 0x65757254));
          }
          else {
            local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
          }
        }
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if ((local_168 & 1) != 0) {
        operator_delete(local_158);
      }
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
    } while (lVar23 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar10 = 0;
  if (this_00 == (XMLNode *)0x0) {
    fVar26 = -0.5;
    fVar25 = 0.0;
  }
  else {
    fVar25 = 0.0;
    fVar26 = -0.5;
    plVar16 = (long *)((ulong)&local_150 | 1);
    piVar22 = (int *)((ulong)&local_168 | 1);
    pcVar17 = (char *)((ulong)&local_180 | 1);
    do {
      pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar18);
      uVar21 = local_150 >> 1 & 0x7f;
      if ((local_150 & 1) != 0) {
        uVar21 = uStack_148;
      }
      switch(uVar21) {
      case 4:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        if ((int)*plVar1 == 0x657a6953 && bVar5 == 1) {
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18);
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 1) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                dVar24 = atof((char *)piVar2);
                local_e4 = (float)dVar24;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                dVar24 = atof((char *)piVar2);
                local_e8 = (float)dVar24;
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
        }
        break;
      case 8:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        if (*plVar1 == 0x726f6c6f43646e45) {
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18);
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 1) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              cVar4 = (char)*plVar1;
              if (cVar4 == 'B') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_c6 = (undefined1)iVar11;
              }
              else if (cVar4 == 'G') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_c8 = CONCAT11((char)iVar11,local_c8._0_1_);
              }
              else if (cVar4 == 'R') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_c8 = CONCAT11(local_c8._1_1_,(char)iVar11);
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
        }
        else if (*plVar1 == 0x61746144656c6946) {
          local_160 = 0;
          local_158 = (int *)0x0;
          local_168 = 0;
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            pLVar19 = (ListViewReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_180,pcVar18);
            pcVar18 = local_170;
            __n = uStack_178;
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 5) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              iVar11 = memcmp(plVar1,"Plist",5);
              if (iVar11 == 0) {
                uVar21 = local_180 >> 1 & 0x7f;
                pcVar18 = pcVar17;
                if ((local_180 & 1) != 0) {
                  uVar21 = uStack_178;
                  pcVar18 = local_170;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,pcVar18,uVar21);
                uVar21 = local_180 >> 1 & 0x7f;
                pcVar18 = pcVar17;
                if ((local_180 & 1) != 0) {
                  uVar21 = uStack_178;
                  pcVar18 = local_170;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18,uVar21);
              }
            }
            else if (uVar21 == 4) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar21 = local_180 >> 1 & 0x7f;
                pcVar18 = pcVar17;
                if ((local_180 & 1) != 0) {
                  uVar21 = uStack_178;
                  pcVar18 = local_170;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_98,pcVar18,uVar21);
              }
              else if ((int)*plVar1 == 0x65707954) {
                uStack_198 = 0;
                local_190 = (char *)0x0;
                local_1a0 = 0;
                if ((local_180 & 1) == 0) {
                  uStack_198 = uStack_178;
                  local_1a0 = local_180;
                  local_190 = local_170;
                }
                else {
                  if (0xffffffffffffffef < uStack_178) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_178 < 0x17) {
                    local_1a0 = (ulong)(byte)((int)uStack_178 << 1);
                    __dest = (char *)((ulong)&local_1a0 | 1);
                    if (uStack_178 != 0) goto LAB_00c84774;
                  }
                  else {
                    uVar21 = uStack_178 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar21);
                    local_1a0 = uVar21 | 1;
                    uStack_198 = __n;
                    local_190 = __dest;
LAB_00c84774:
                    pLVar19 = memcpy(__dest,pcVar18,__n);
                  }
                  __dest[__n] = '\0';
                }
                iVar10 = getResourceType(pLVar19,&local_1a0);
                if ((local_1a0 & 1) != 0) {
                  operator_delete(local_190);
                }
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_180 & 1) != 0) {
              operator_delete(local_170);
            }
          }
          if (iVar10 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar21 = local_168 >> 1 & 0x7f;
            piVar2 = piVar22;
            if ((local_168 & 1) != 0) {
              uVar21 = local_160;
              piVar2 = local_158;
            }
            uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar2,uVar21);
            local_180 = CONCAT44(local_180._4_4_,uVar12);
            puVar3 = *(undefined4 **)(this_01 + 8);
            if (puVar3 < *(undefined4 **)(this_01 + 0x10)) {
              *puVar3 = uVar12;
              *(undefined4 **)(this_01 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_180);
            }
          }
          if ((local_168 & 1) != 0) {
            operator_delete(local_158);
          }
        }
        break;
      case 10:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar11 = memcmp(plVar1,"FirstColor",10);
        if (iVar11 == 0) {
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18);
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 1) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              cVar4 = (char)*plVar1;
              if (cVar4 == 'B') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_be = (undefined1)iVar11;
              }
              else if (cVar4 == 'G') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_c0 = CONCAT11((char)iVar11,local_c0._0_1_);
              }
              else if (cVar4 == 'R') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_c0 = CONCAT11(local_c0._1_1_,(char)iVar11);
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
        }
        break;
      case 0xb:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar11 = memcmp(plVar1,"SingleColor",0xb);
        if (iVar11 == 0) {
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18);
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 1) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              cVar4 = (char)*plVar1;
              if (cVar4 == 'B') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_b6 = (undefined1)iVar11;
              }
              else if (cVar4 == 'G') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_b8 = CONCAT11((char)iVar11,local_b8._0_1_);
              }
              else if (cVar4 == 'R') {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                iVar11 = atoi((char *)piVar2);
                local_b8 = CONCAT11(local_b8._1_1_,(char)iVar11);
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
        }
        else {
          iVar11 = memcmp(plVar1,"ColorVector",0xb);
          if (iVar11 == 0) {
            lVar23 = *(long *)(this_00 + 0x60);
            while (lVar23 != 0) {
              pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
              sVar20 = strlen(pcVar18);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_150,pcVar18,sVar20);
              pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_168,pcVar18);
              uVar21 = local_150 >> 1 & 0x7f;
              if ((local_150 & 1) != 0) {
                uVar21 = uStack_148;
              }
              if (uVar21 == 6) {
                plVar1 = plVar16;
                if ((local_150 & 1) != 0) {
                  plVar1 = local_140;
                }
                iVar11 = memcmp(plVar1,"ScaleX",6);
                if (iVar11 == 0) {
                  piVar2 = piVar22;
                  if ((local_168 & 1) != 0) {
                    piVar2 = local_158;
                  }
                  dVar24 = atof((char *)piVar2);
                  fVar25 = (float)dVar24;
                }
                else {
                  iVar11 = memcmp(plVar1,"ScaleY",6);
                  if (iVar11 == 0) {
                    piVar2 = piVar22;
                    if ((local_168 & 1) != 0) {
                      piVar2 = local_158;
                    }
                    dVar24 = atof((char *)piVar2);
                    fVar26 = (float)dVar24;
                  }
                }
              }
              lVar23 = *(long *)(lVar23 + 0x38);
              if ((local_168 & 1) != 0) {
                operator_delete(local_158);
              }
            }
          }
        }
        break;
      case 0xd:
        plVar1 = plVar16;
        if ((local_150 & 1) != 0) {
          plVar1 = local_140;
        }
        iVar11 = memcmp(plVar1,"InnerNodeSize",0xd);
        if (iVar11 == 0) {
          lVar23 = *(long *)(this_00 + 0x60);
          while (lVar23 != 0) {
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 8));
            sVar20 = strlen(pcVar18);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar18,sVar20);
            pcVar18 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar23 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_168,pcVar18);
            uVar21 = local_150 >> 1 & 0x7f;
            if ((local_150 & 1) != 0) {
              uVar21 = uStack_148;
            }
            if (uVar21 == 6) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              iVar11 = memcmp(plVar1,"Height",6);
              if (iVar11 == 0) {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                dVar24 = atof((char *)piVar2);
                fStack_ec = (float)dVar24;
              }
            }
            else if (uVar21 == 5) {
              plVar1 = plVar16;
              if ((local_150 & 1) != 0) {
                plVar1 = local_140;
              }
              iVar11 = memcmp(plVar1,"Width",5);
              if (iVar11 == 0) {
                piVar2 = piVar22;
                if ((local_168 & 1) != 0) {
                  piVar2 = local_158;
                }
                dVar24 = atof((char *)piVar2);
                local_f0 = (float)dVar24;
              }
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_1a8 = 0xff;
  local_1b0 = 0xff;
  local_1b8 = 0xff;
  local_1a7 = local_b8;
  local_1a5 = local_b6;
  local_1af = local_c0;
  local_1c0 = CONCAT44(fStack_ec,local_f0);
  local_180 = CONCAT44(local_e4,local_e8);
  local_1ad = local_be;
  local_1b7 = local_c8;
  local_1b5 = local_c6;
  uStack_148 = CONCAT44(fStack_d4,fStack_d8);
  local_150 = CONCAT44(fStack_dc,local_e0);
  bVar8 = (local_98 & 1) != 0;
  pcVar17 = (char *)((ulong)&local_98 | 1);
  if (bVar8) {
    pcVar17 = local_88;
  }
  local_168 = CONCAT44(fVar26,fVar25);
  uVar21 = local_98 >> 1 & 0x7f;
  if (bVar8) {
    uVar21 = local_90;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar21);
  uVar21 = local_b0 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    uVar21 = local_a8;
    pcVar17 = local_a0;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar21);
  uVar12 = flatbuffers::CreateResourceData(param_2,uVar12,uVar13,iVar10);
  uVar21 = local_108 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_108 | 1);
  if ((local_108 & 1) != 0) {
    uVar21 = local_100;
    pcVar17 = local_f8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar21);
  uVar21 = local_120 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_120 | 1);
  if ((local_120 & 1) != 0) {
    uVar21 = local_118;
    pcVar17 = local_110;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar21);
  uVar21 = local_138 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_138 | 1);
  if ((local_138 & 1) != 0) {
    uVar21 = local_130;
    pcVar17 = local_128;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar21);
  uVar9 = flatbuffers::CreateListViewOptions
                    (param_2,uVar9,uVar12,bVar7,&local_1a8,&local_1b0,&local_1b8,local_1cc,
                     (undefined1)local_1d0,&local_168,&local_150,&local_180,bVar5,&local_1c0,0,
                     (char)local_1d8,local_1d8._4_4_,uVar13,uVar14,uVar15);
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

