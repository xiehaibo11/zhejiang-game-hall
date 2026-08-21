
/* cocostudio::LayoutReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::LayoutReader::createOptionsWithFlatBuffers
          (LayoutReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  ulong __n;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long *plVar14;
  char *pcVar15;
  XMLNode *this_00;
  char *pcVar16;
  LayoutReader *pLVar17;
  char *__dest;
  size_t sVar18;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  int local_180;
  int local_17c;
  undefined1 local_170;
  undefined2 local_16f;
  undefined1 local_16d;
  undefined1 local_168;
  undefined2 local_167;
  undefined1 local_165;
  ulong local_160;
  ulong uStack_158;
  char *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148;
  undefined2 uStack_147;
  undefined1 uStack_145;
  undefined4 uStack_144;
  ulong uStack_140;
  char *local_138;
  ulong local_130 [2];
  void *local_120;
  float local_118;
  float fStack_114;
  ulong local_110;
  int *local_108;
  ulong local_100;
  ulong uStack_f8;
  long *local_f0;
  float local_e8;
  float fStack_e4;
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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  plVar14 = (long *)WidgetReader::getInstance();
  uVar9 = (**(code **)(*plVar14 + 0x28))(plVar14,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"");
  cocos2d::Color3B::Color3B((Color3B *)&local_b8);
  cocos2d::Color3B::Color3B((Color3B *)&local_c0);
  cocos2d::Color3B::Color3B((Color3B *)&local_c8);
  cocos2d::Rect::Rect((Rect *)&local_e0);
  cocos2d::Size::Size((Size *)&local_e8);
  lVar19 = *(long *)(param_1 + 0x60);
  if (lVar19 == 0) {
    local_17c = 0;
    bVar6 = 0;
    bVar8 = false;
    local_180._0_1_ = 0xff;
  }
  else {
    plVar14 = (long *)((ulong)&local_100 | 1);
    piVar20 = (int *)((ulong)&local_118 | 1);
    local_17c = 0;
    bVar6 = 0;
    bVar8 = false;
    local_180 = 0xff;
    do {
      pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar15);
      pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_118,pcVar15);
      bVar4 = local_100._0_1_;
      uVar21 = (ulong)((byte)local_100._0_1_ >> 1);
      if ((local_100 & 1) != 0) {
        uVar21 = uStack_f8;
      }
      switch(uVar21) {
      case 8:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        if (*plVar1 == 0x656c624170696c43) {
          uVar21 = (ulong)((byte)local_118._0_1_ >> 1);
          if (((uint)local_118 & 1) != 0) {
            uVar21 = local_110;
          }
          if (uVar21 == 4) {
            piVar2 = piVar20;
            if (((uint)local_118 & 1) != 0) {
              piVar2 = local_108;
            }
            bVar8 = *piVar2 == 0x65757254;
          }
          else {
            bVar8 = false;
          }
        }
        break;
      case 0xb:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar10 = memcmp(plVar1,"Scale9Width",0xb);
        if (iVar10 == 0) {
          piVar2 = piVar20;
          if (((uint)local_118 & 1) != 0) {
            piVar2 = local_108;
          }
          dVar22 = atof((char *)piVar2);
          fStack_d8 = (float)dVar22;
        }
        break;
      case 0xc:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar10 = memcmp(plVar1,"Scale9Enable",0xc);
        if (iVar10 == 0) {
          uVar21 = (ulong)((byte)local_118._0_1_ >> 1);
          if (((uint)local_118 & 1) != 0) {
            uVar21 = local_110;
          }
          if (uVar21 == 4) {
            piVar2 = piVar20;
            if (((uint)local_118 & 1) != 0) {
              piVar2 = local_108;
            }
            bVar6 = *piVar2 == 0x65757254 | bVar6;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"Scale9Height",0xc);
          if (iVar10 == 0) {
            piVar2 = piVar20;
            if (((uint)local_118 & 1) != 0) {
              piVar2 = local_108;
            }
            dVar22 = atof((char *)piVar2);
            fStack_d4 = (float)dVar22;
          }
        }
        break;
      case 0xd:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar10 = memcmp(plVar1,"ComboBoxIndex",0xd);
        if (iVar10 == 0) {
          piVar2 = piVar20;
          if (((uint)local_118 & 1) != 0) {
            piVar2 = local_108;
          }
          local_17c = atoi((char *)piVar2);
        }
        else {
          iVar10 = memcmp(plVar1,"Scale9OriginX",0xd);
          if (iVar10 == 0) {
            piVar2 = piVar20;
            if (((uint)local_118 & 1) != 0) {
              piVar2 = local_108;
            }
            dVar22 = atof((char *)piVar2);
            local_e0 = (float)dVar22;
          }
          else {
            iVar10 = memcmp(plVar1,"Scale9OriginY",0xd);
            if (iVar10 == 0) {
              piVar2 = piVar20;
              if (((uint)local_118 & 1) != 0) {
                piVar2 = local_108;
              }
              dVar22 = atof((char *)piVar2);
              fStack_dc = (float)dVar22;
            }
          }
        }
        break;
      case 0xe:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar10 = memcmp(plVar1,"BackColorAlpha",0xe);
        if (iVar10 == 0) {
          piVar2 = piVar20;
          if (((uint)local_118 & 1) != 0) {
            piVar2 = local_108;
          }
          local_180 = atoi((char *)piVar2);
        }
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (((uint)local_118 & 1) != 0) {
        operator_delete(local_108);
        bVar4 = local_100._0_1_;
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_f0);
      }
    } while (lVar19 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar10 = 0;
  if (this_00 == (XMLNode *)0x0) {
    fVar23 = 0.0;
    fVar24 = -0.5;
  }
  else {
    fVar24 = -0.5;
    fVar23 = 0.0;
    plVar14 = (long *)((ulong)&local_100 | 1);
    piVar20 = (int *)((ulong)&local_118 | 1);
    pcVar15 = (char *)((ulong)&local_148 | 1);
    do {
      pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,pcVar16);
      uVar21 = local_100 >> 1 & 0x7f;
      if ((local_100 & 1) != 0) {
        uVar21 = uStack_f8;
      }
      switch(uVar21) {
      case 4:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        if ((int)*plVar1 == 0x657a6953 && bVar6 == 1) {
          lVar19 = *(long *)(this_00 + 0x60);
          while (lVar19 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
            sVar18 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_100,pcVar16,sVar18);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_118,pcVar16);
            uVar21 = local_100 >> 1 & 0x7f;
            if ((local_100 & 1) != 0) {
              uVar21 = uStack_f8;
            }
            if (uVar21 == 1) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                dVar22 = atof((char *)piVar2);
                fStack_e4 = (float)dVar22;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                dVar22 = atof((char *)piVar2);
                local_e8 = (float)dVar22;
              }
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (((uint)local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
        }
        break;
      case 8:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        if (*plVar1 == 0x726f6c6f43646e45) {
          lVar19 = *(long *)(this_00 + 0x60);
          while (lVar19 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
            sVar18 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_100,pcVar16,sVar18);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_118,pcVar16);
            uVar21 = local_100 >> 1 & 0x7f;
            if ((local_100 & 1) != 0) {
              uVar21 = uStack_f8;
            }
            if (uVar21 == 1) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              cVar5 = (char)*plVar1;
              if (cVar5 == 'B') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_c6 = (undefined1)iVar11;
              }
              else if (cVar5 == 'G') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_c8 = CONCAT11((char)iVar11,local_c8._0_1_);
              }
              else if (cVar5 == 'R') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_c8 = CONCAT11(local_c8._1_1_,(char)iVar11);
              }
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (((uint)local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
        }
        else if (*plVar1 == 0x61746144656c6946) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_118,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_130,"");
          lVar19 = *(long *)(this_00 + 0x60);
          while (lVar19 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
            sVar18 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_100,pcVar16,sVar18);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
            pLVar17 = (LayoutReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_148,pcVar16);
            pcVar16 = local_138;
            __n = uStack_140;
            uVar21 = local_100 >> 1 & 0x7f;
            if ((local_100 & 1) != 0) {
              uVar21 = uStack_f8;
            }
            if (uVar21 == 5) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              iVar11 = memcmp(plVar1,"Plist",5);
              if (iVar11 == 0) {
                uVar21 = (ulong)((byte)local_148 >> 1);
                pcVar16 = pcVar15;
                if (((byte)local_148 & 1) != 0) {
                  uVar21 = uStack_140;
                  pcVar16 = local_138;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_b0,pcVar16,uVar21);
                uVar21 = (ulong)((byte)local_148 >> 1);
                pcVar16 = pcVar15;
                if (((byte)local_148 & 1) != 0) {
                  uVar21 = uStack_140;
                  pcVar16 = local_138;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_118,pcVar16,uVar21);
              }
            }
            else if (uVar21 == 4) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar21 = (ulong)((byte)local_148 >> 1);
                pcVar16 = pcVar15;
                if (((byte)local_148 & 1) != 0) {
                  uVar21 = uStack_140;
                  pcVar16 = local_138;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,pcVar16,uVar21);
              }
              else if ((int)*plVar1 == 0x65707954) {
                uStack_158 = 0;
                local_150 = (char *)0x0;
                local_160 = 0;
                if (((byte)local_148 & 1) == 0) {
                  local_160 = CONCAT44(uStack_144,
                                       CONCAT13(uStack_145,CONCAT21(uStack_147,local_148)));
                  uStack_158 = uStack_140;
                  local_150 = local_138;
                }
                else {
                  if (0xffffffffffffffef < uStack_140) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_140 < 0x17) {
                    local_160 = (ulong)(byte)((int)uStack_140 << 1);
                    __dest = (char *)((ulong)&local_160 | 1);
                    if (uStack_140 != 0) goto LAB_00c822cc;
                  }
                  else {
                    uVar21 = uStack_140 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar21);
                    local_160 = uVar21 | 1;
                    uStack_158 = __n;
                    local_150 = __dest;
LAB_00c822cc:
                    pLVar17 = memcpy(__dest,pcVar16,__n);
                  }
                  __dest[__n] = '\0';
                }
                iVar10 = getResourceType(pLVar17,&local_160);
                if ((local_160 & 1) != 0) {
                  operator_delete(local_150);
                }
              }
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (((byte)local_148 & 1) != 0) {
              operator_delete(local_138);
            }
          }
          if (iVar10 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar21 = (ulong)((byte)local_118._0_1_ >> 1);
            piVar2 = piVar20;
            if (((uint)local_118 & 1) != 0) {
              uVar21 = local_110;
              piVar2 = local_108;
            }
            uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar2,uVar21);
            local_148 = SUB41(uVar12,0);
            uStack_147 = (undefined2)((uint)uVar12 >> 8);
            uStack_145 = (undefined1)((uint)uVar12 >> 0x18);
            puVar3 = *(undefined4 **)(this_01 + 8);
            if (puVar3 < *(undefined4 **)(this_01 + 0x10)) {
              *puVar3 = uVar12;
              *(undefined4 **)(this_01 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>(this_01,&local_148);
            }
          }
          if ((local_130[0] & 1) != 0) {
            operator_delete(local_120);
          }
          if (((uint)local_118 & 1) != 0) {
            operator_delete(local_108);
          }
        }
        break;
      case 10:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar11 = memcmp(plVar1,"FirstColor",10);
        if (iVar11 == 0) {
          lVar19 = *(long *)(this_00 + 0x60);
          while (lVar19 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
            sVar18 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_100,pcVar16,sVar18);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_118,pcVar16);
            uVar21 = local_100 >> 1 & 0x7f;
            if ((local_100 & 1) != 0) {
              uVar21 = uStack_f8;
            }
            if (uVar21 == 1) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              cVar5 = (char)*plVar1;
              if (cVar5 == 'B') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_be = (undefined1)iVar11;
              }
              else if (cVar5 == 'G') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_c0 = CONCAT11((char)iVar11,local_c0._0_1_);
              }
              else if (cVar5 == 'R') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_c0 = CONCAT11(local_c0._1_1_,(char)iVar11);
              }
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (((uint)local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
        }
        break;
      case 0xb:
        plVar1 = plVar14;
        if ((local_100 & 1) != 0) {
          plVar1 = local_f0;
        }
        iVar11 = memcmp(plVar1,"SingleColor",0xb);
        if (iVar11 == 0) {
          lVar19 = *(long *)(this_00 + 0x60);
          while (lVar19 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
            sVar18 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_100,pcVar16,sVar18);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_118,pcVar16);
            uVar21 = local_100 >> 1 & 0x7f;
            if ((local_100 & 1) != 0) {
              uVar21 = uStack_f8;
            }
            if (uVar21 == 1) {
              plVar1 = plVar14;
              if ((local_100 & 1) != 0) {
                plVar1 = local_f0;
              }
              cVar5 = (char)*plVar1;
              if (cVar5 == 'B') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_b6 = (undefined1)iVar11;
              }
              else if (cVar5 == 'G') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_b8 = CONCAT11((char)iVar11,local_b8._0_1_);
              }
              else if (cVar5 == 'R') {
                piVar2 = piVar20;
                if (((uint)local_118 & 1) != 0) {
                  piVar2 = local_108;
                }
                iVar11 = atoi((char *)piVar2);
                local_b8 = CONCAT11(local_b8._1_1_,(char)iVar11);
              }
            }
            lVar19 = *(long *)(lVar19 + 0x38);
            if (((uint)local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
        }
        else {
          iVar11 = memcmp(plVar1,"ColorVector",0xb);
          if (iVar11 == 0) {
            lVar19 = *(long *)(this_00 + 0x60);
            while (lVar19 != 0) {
              pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 8));
              sVar18 = strlen(pcVar16);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_100,pcVar16,sVar18);
              pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar19 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_118,pcVar16);
              uVar21 = local_100 >> 1 & 0x7f;
              if ((local_100 & 1) != 0) {
                uVar21 = uStack_f8;
              }
              if (uVar21 == 6) {
                plVar1 = plVar14;
                if ((local_100 & 1) != 0) {
                  plVar1 = local_f0;
                }
                iVar11 = memcmp(plVar1,"ScaleX",6);
                if (iVar11 == 0) {
                  piVar2 = piVar20;
                  if (((uint)local_118 & 1) != 0) {
                    piVar2 = local_108;
                  }
                  dVar22 = atof((char *)piVar2);
                  fVar23 = (float)dVar22;
                }
                else {
                  iVar11 = memcmp(plVar1,"ScaleY",6);
                  if (iVar11 == 0) {
                    piVar2 = piVar20;
                    if (((uint)local_118 & 1) != 0) {
                      piVar2 = local_108;
                    }
                    dVar22 = atof((char *)piVar2);
                    fVar24 = (float)dVar22;
                  }
                }
              }
              lVar19 = *(long *)(lVar19 + 0x38);
              if (((uint)local_118 & 1) != 0) {
                operator_delete(local_108);
              }
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_148 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff;
  local_168 = 0xff;
  local_170 = 0xff;
  uStack_147 = local_b8;
  local_167 = local_c0;
  uStack_145 = local_b6;
  local_130[0] = CONCAT44(fStack_e4,local_e8);
  local_165 = local_be;
  local_16f = local_c8;
  uStack_f8 = CONCAT44(fStack_d4,fStack_d8);
  local_100 = CONCAT44(fStack_dc,local_e0);
  local_16d = local_c6;
  uVar21 = (ulong)((byte)local_98[0] >> 1);
  pcVar15 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar21 = local_90;
    pcVar15 = local_88;
  }
  local_118 = fVar23;
  fStack_114 = fVar24;
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar21);
  uVar21 = (ulong)((byte)local_b0[0] >> 1);
  pcVar15 = (char *)((ulong)local_b0 | 1);
  if (((byte)local_b0[0] & 1) != 0) {
    uVar21 = local_a8;
    pcVar15 = local_a0;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar21);
  uVar12 = flatbuffers::CreateResourceData(param_2,uVar12,uVar13,iVar10);
  uVar9 = flatbuffers::CreatePanelOptions
                    (param_2,uVar9,uVar12,bVar8,&local_148,&local_168,&local_170,local_17c,
                     (undefined1)local_180,&local_118,&local_100,local_130,bVar6);
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar7 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

