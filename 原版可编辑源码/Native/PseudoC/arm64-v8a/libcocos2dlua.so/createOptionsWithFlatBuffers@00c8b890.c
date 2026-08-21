
/* cocostudio::ScrollViewReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ScrollViewReader::createOptionsWithFlatBuffers
          (ScrollViewReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined4 *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  long *plVar21;
  char *pcVar22;
  XMLNode *this_00;
  char *pcVar23;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  ScrollViewReader *pSVar24;
  char *__dest;
  size_t sVar25;
  ulong __n;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_1bc;
  undefined8 local_1b8;
  undefined1 local_198;
  undefined2 local_197;
  undefined1 local_195;
  undefined1 local_190;
  undefined2 local_18f;
  undefined1 local_18d;
  undefined1 local_188;
  undefined2 local_187;
  undefined1 local_185;
  ulong local_180;
  ulong uStack_178;
  char *local_170;
  ulong local_168;
  ulong uStack_160;
  char *local_158;
  ulong local_150 [2];
  void *local_140;
  float local_138;
  float local_134;
  ulong local_130;
  long *local_128;
  ulong local_120;
  ulong uStack_118;
  long *local_110;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined2 local_c8;
  undefined1 local_c6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  char *local_98;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  plVar21 = (long *)WidgetReader::getInstance();
  uVar15 = (**(code **)(*plVar21 + 0x28))(plVar21,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  cocos2d::Color3B::Color3B((Color3B *)&local_c8);
  cocos2d::Color3B::Color3B((Color3B *)&local_d0);
  cocos2d::Color3B::Color3B((Color3B *)&local_d8);
  cocos2d::Rect::Rect((Rect *)&local_f0);
  cocos2d::Size::Size((Size *)&local_f8);
  cocos2d::Size::Size((Size *)&local_100,200.0,300.0);
  lVar26 = *(long *)(param_1 + 0x60);
  if (lVar26 == 0) {
    local_1bc._0_1_ = 0xff;
    fVar30 = 0.2;
    local_1b8 = 0;
    bVar10 = false;
    bVar13 = false;
    bVar14 = false;
    bVar11 = true;
    bVar12 = true;
  }
  else {
    bVar12 = true;
    local_1bc = 0xff;
    fVar30 = 0.2;
    plVar21 = (long *)((ulong)&local_120 | 1);
    plVar27 = (long *)((ulong)&local_138 | 1);
    bVar10 = false;
    bVar13 = false;
    local_1b8 = 0;
    bVar14 = false;
    bVar11 = true;
    do {
      pcVar22 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,pcVar22);
      pcVar22 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_138,pcVar22);
      bVar4 = local_120._0_1_;
      uVar28 = (ulong)((byte)local_120._0_1_ >> 1);
      if ((local_120 & 1) != 0) {
        uVar28 = uStack_118;
      }
      uVar7 = local_120 & 1;
      uVar8 = local_120 & 1;
      uVar9 = local_120 & 1;
      switch(uVar28) {
      case 8:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        if (*plVar2 != 0x656c624170696c43) goto switchD_00c8ba0c_caseD_9;
        uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
        if (((uint)local_138 & 1) != 0) {
          uVar28 = local_130;
        }
        sVar25 = 4;
        if (uVar28 < 5) {
          sVar25 = uVar28;
        }
        if (sVar25 == 0) {
LAB_00c8be3c:
          uVar16 = (uint)(4 < uVar28);
          if (uVar28 < 4) {
            uVar16 = 0xffffffff;
          }
        }
        else {
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          uVar16 = memcmp(plVar2,&DAT_01414ef8,sVar25);
          if (uVar16 == 0) goto LAB_00c8be3c;
        }
        bVar13 = uVar16 == 0;
        break;
      default:
switchD_00c8ba0c_caseD_9:
        __n = 10;
        if (uVar28 < 0xb) {
          __n = uVar28;
        }
        bVar1 = 10 < uVar28;
        if (__n == 0) {
LAB_00c8bc94:
          if ((bool)(bVar1 ^ 9 < uVar28)) {
            uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
            if (((uint)local_138 & 1) != 0) {
              uVar28 = local_130;
            }
            sVar25 = 4;
            if (uVar28 < 5) {
              sVar25 = uVar28;
            }
            if (sVar25 == 0) {
LAB_00c8bce4:
              uVar16 = (uint)(4 < uVar28);
              if (uVar28 < 4) {
                uVar16 = 0xffffffff;
              }
            }
            else {
              plVar2 = plVar27;
              if (((uint)local_138 & 1) != 0) {
                plVar2 = local_128;
              }
              uVar16 = memcmp(plVar2,&DAT_01414ef8,sVar25);
              if (uVar16 == 0) goto LAB_00c8bce4;
            }
            bVar11 = uVar16 == 0;
            break;
          }
        }
        else {
LAB_00c8bc7c:
          plVar2 = plVar21;
          if (uVar7 != 0) {
            plVar2 = local_110;
          }
          iVar17 = memcmp(plVar2,"BarEnabled",__n);
          if (iVar17 == 0) goto LAB_00c8bc94;
        }
        sVar25 = 0xb;
        if (uVar28 < 0xc) {
          sVar25 = uVar28;
        }
        if (sVar25 == 0) {
joined_r0x00c8bd9c:
          if ((bool)(0xb < uVar28 ^ bVar1)) {
            uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
            if (((uint)local_138 & 1) != 0) {
              uVar28 = local_130;
            }
            sVar25 = 4;
            if (uVar28 < 5) {
              sVar25 = uVar28;
            }
            if (sVar25 == 0) {
LAB_00c8bd74:
              uVar16 = (uint)(4 < uVar28);
              if (uVar28 < 4) {
                uVar16 = 0xffffffff;
              }
            }
            else {
              plVar2 = plVar27;
              if (((uint)local_138 & 1) != 0) {
                plVar2 = local_128;
              }
              uVar16 = memcmp(plVar2,&DAT_01414ef8,sVar25);
              if (uVar16 == 0) goto LAB_00c8bd74;
            }
            bVar12 = uVar16 == 0;
            break;
          }
        }
        else {
          plVar2 = plVar21;
          if (uVar8 != 0) {
            plVar2 = local_110;
          }
          iVar17 = memcmp(plVar2,"BarAutoHide",sVar25);
          if (iVar17 == 0) goto joined_r0x00c8bd9c;
        }
        sVar25 = 0xf;
        if (uVar28 < 0x10) {
          sVar25 = uVar28;
        }
        if (sVar25 != 0) {
          plVar2 = plVar21;
          if (uVar9 != 0) {
            plVar2 = local_110;
          }
          iVar17 = memcmp(plVar2,"BarAutoHideTime",sVar25);
          if (iVar17 != 0) break;
        }
        if (0xf < uVar28 != 0xe < uVar28) {
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          dVar29 = atof((char *)plVar2);
          fVar30 = (float)dVar29;
        }
        break;
      case 0xb:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"Scale9Width",0xb);
        if (iVar17 != 0) {
LAB_00c8bc74:
          bVar1 = true;
          __n = 10;
          goto LAB_00c8bc7c;
        }
        plVar2 = plVar27;
        if (((uint)local_138 & 1) != 0) {
          plVar2 = local_128;
        }
        dVar29 = atof((char *)plVar2);
        fStack_e8 = (float)dVar29;
        break;
      case 0xc:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"Scale9Enable",0xc);
        if (iVar17 == 0) {
          uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
          if (((uint)local_138 & 1) != 0) {
            uVar28 = local_130;
          }
          sVar25 = 4;
          if (uVar28 < 5) {
            sVar25 = uVar28;
          }
          if (sVar25 == 0) {
LAB_00c8be94:
            uVar16 = (uint)(4 < uVar28);
            if (uVar28 < 4) {
              uVar16 = 0xffffffff;
            }
          }
          else {
            plVar2 = plVar27;
            if (((uint)local_138 & 1) != 0) {
              plVar2 = local_128;
            }
            uVar16 = memcmp(plVar2,&DAT_01414ef8,sVar25);
            if (uVar16 == 0) goto LAB_00c8be94;
          }
          bVar14 = uVar16 == 0;
        }
        else {
          iVar17 = memcmp(plVar2,"Scale9Height",0xc);
          if (iVar17 != 0) goto LAB_00c8bc74;
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          dVar29 = atof((char *)plVar2);
          fStack_e4 = (float)dVar29;
        }
        break;
      case 0xd:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"ComboBoxIndex",0xd);
        if (iVar17 == 0) {
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          iVar17 = atoi((char *)plVar2);
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar17);
        }
        else {
          iVar17 = memcmp(plVar2,"Scale9OriginX",0xd);
          if (iVar17 == 0) {
            plVar2 = plVar27;
            if (((uint)local_138 & 1) != 0) {
              plVar2 = local_128;
            }
            dVar29 = atof((char *)plVar2);
            local_f0 = (float)dVar29;
          }
          else {
            iVar17 = memcmp(plVar2,"Scale9OriginY",0xd);
            if (iVar17 != 0) goto LAB_00c8bc74;
            plVar2 = plVar27;
            if (((uint)local_138 & 1) != 0) {
              plVar2 = local_128;
            }
            dVar29 = atof((char *)plVar2);
            fStack_ec = (float)dVar29;
          }
        }
        break;
      case 0xe:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"BackColorAlpha",0xe);
        if (iVar17 != 0) goto LAB_00c8bc74;
        plVar2 = plVar27;
        if (((uint)local_138 & 1) != 0) {
          plVar2 = local_128;
        }
        local_1bc = atoi((char *)plVar2);
        break;
      case 0xf:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"IsBounceEnabled",0xf);
        if (iVar17 != 0) goto LAB_00c8bc74;
        uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
        if (((uint)local_138 & 1) != 0) {
          uVar28 = local_130;
        }
        sVar25 = 4;
        if (uVar28 < 5) {
          sVar25 = uVar28;
        }
        if (sVar25 == 0) {
LAB_00c8baac:
          uVar16 = (uint)(4 < uVar28);
          if (uVar28 < 4) {
            uVar16 = 0xffffffff;
          }
        }
        else {
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          uVar16 = memcmp(plVar2,&DAT_01414ef8,sVar25);
          if (uVar16 == 0) goto LAB_00c8baac;
        }
        bVar10 = uVar16 == 0;
        break;
      case 0x13:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar17 = memcmp(plVar2,"ScrollDirectionType",0x13);
        if (iVar17 != 0) goto LAB_00c8bc74;
        uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
        if (((uint)local_138 & 1) != 0) {
          uVar28 = local_130;
        }
        if (uVar28 == 0x13) {
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          iVar17 = memcmp(plVar2,"Vertical_Horizontal",0x13);
          uVar19 = 3;
LAB_00c8bf5c:
          if (iVar17 != 0) {
            uVar19 = local_1b8._4_4_;
          }
        }
        else {
          if (uVar28 == 10) {
            plVar2 = plVar27;
            if (((uint)local_138 & 1) != 0) {
              plVar2 = local_128;
            }
            iVar17 = memcmp(plVar2,"Horizontal",10);
            uVar19 = 2;
            goto LAB_00c8bf5c;
          }
          if (uVar28 != 8) break;
          plVar2 = plVar27;
          if (((uint)local_138 & 1) != 0) {
            plVar2 = local_128;
          }
          uVar19 = local_1b8._4_4_;
          if (*plVar2 == 0x6c61636974726556) {
            uVar19 = 1;
          }
        }
        local_1b8 = CONCAT44(uVar19,(undefined4)local_1b8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (((uint)local_138 & 1) != 0) {
        operator_delete(local_128);
        bVar4 = local_120._0_1_;
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_110);
      }
    } while (lVar26 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar17 = 0;
  if (this_00 == (XMLNode *)0x0) {
    fVar31 = 0.0;
    fVar32 = -0.5;
  }
  else {
    plVar21 = (long *)((ulong)&local_120 | 1);
    pcVar22 = (char *)((ulong)&local_168 | 1);
    fVar32 = -0.5;
    fVar31 = 0.0;
    plVar27 = (long *)((ulong)&local_138 | 1);
    do {
      pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,pcVar23);
      uVar28 = local_120 >> 1 & 0x7f;
      if ((local_120 & 1) != 0) {
        uVar28 = uStack_118;
      }
      switch(uVar28) {
      case 4:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        if ((int)*plVar2 == 0x657a6953 && !(bool)(bVar14 ^ 1)) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23);
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 1) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              if ((char)*plVar2 == 'Y') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                dVar29 = atof((char *)plVar2);
                local_f4 = (float)dVar29;
              }
              else if ((char)*plVar2 == 'X') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                dVar29 = atof((char *)plVar2);
                local_f8 = (float)dVar29;
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((uint)local_138 & 1) != 0) {
              operator_delete(local_128);
            }
          }
        }
        break;
      case 8:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        if (*plVar2 == 0x726f6c6f43646e45) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23);
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 1) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              cVar5 = (char)*plVar2;
              if (cVar5 == 'B') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_d6 = (undefined1)iVar18;
              }
              else if (cVar5 == 'G') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_d8 = CONCAT11((char)iVar18,local_d8._0_1_);
              }
              else if (cVar5 == 'R') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_d8 = CONCAT11(local_d8._1_1_,(char)iVar18);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((uint)local_138 & 1) != 0) {
              operator_delete(local_128);
            }
          }
        }
        else if (*plVar2 == 0x61746144656c6946) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_138,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_150,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pSVar24 = (ScrollViewReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_168,pcVar23);
            pcVar23 = local_158;
            uVar7 = uStack_160;
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 5) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              iVar18 = memcmp(plVar2,"Plist",5);
              if (iVar18 == 0) {
                pcVar23 = pcVar22;
                uVar28 = local_168 >> 1 & 0x7f;
                if ((local_168 & 1) != 0) {
                  pcVar23 = local_158;
                  uVar28 = uStack_160;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,pcVar23,uVar28);
                pcVar23 = pcVar22;
                uVar28 = local_168 >> 1 & 0x7f;
                if ((local_168 & 1) != 0) {
                  pcVar23 = local_158;
                  uVar28 = uStack_160;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23,uVar28);
              }
            }
            else if (uVar28 == 4) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              if ((int)*plVar2 == 0x68746150) {
                pcVar23 = pcVar22;
                uVar28 = local_168 >> 1 & 0x7f;
                if ((local_168 & 1) != 0) {
                  pcVar23 = local_158;
                  uVar28 = uStack_160;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a8,pcVar23,uVar28);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_178 = 0;
                local_170 = (char *)0x0;
                local_180 = 0;
                if ((local_168 & 1) == 0) {
                  uStack_178 = uStack_160;
                  local_180 = local_168;
                  local_170 = local_158;
                }
                else {
                  if (0xffffffffffffffef < uStack_160) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_160 < 0x17) {
                    local_180 = (ulong)(byte)((int)uStack_160 << 1);
                    __dest = (char *)((ulong)&local_180 | 1);
                    if (uStack_160 != 0) goto LAB_00c8c4c4;
                  }
                  else {
                    uVar28 = uStack_160 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar28);
                    local_180 = uVar28 | 1;
                    uStack_178 = uVar7;
                    local_170 = __dest;
LAB_00c8c4c4:
                    pSVar24 = memcpy(__dest,pcVar23,uVar7);
                  }
                  __dest[uVar7] = '\0';
                }
                iVar17 = getResourceType(pSVar24,&local_180);
                if ((local_180 & 1) != 0) {
                  operator_delete(local_170);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
          }
          if (iVar17 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar28 = (ulong)((byte)local_138._0_1_ >> 1);
            plVar2 = plVar27;
            if (((uint)local_138 & 1) != 0) {
              uVar28 = local_130;
              plVar2 = local_128;
            }
            uVar19 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)plVar2,uVar28);
            local_168 = CONCAT44(local_168._4_4_,uVar19);
            puVar3 = *(undefined4 **)(this_01 + 8);
            if (puVar3 < *(undefined4 **)(this_01 + 0x10)) {
              *puVar3 = uVar19;
              *(undefined4 **)(this_01 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_168);
            }
          }
          if ((local_150[0] & 1) != 0) {
            operator_delete(local_140);
          }
          if (((uint)local_138 & 1) != 0) {
            operator_delete(local_128);
          }
        }
        break;
      case 10:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar18 = memcmp(plVar2,"FirstColor",10);
        if (iVar18 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23);
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 1) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              cVar5 = (char)*plVar2;
              if (cVar5 == 'B') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_ce = (undefined1)iVar18;
              }
              else if (cVar5 == 'G') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_d0 = CONCAT11((char)iVar18,local_d0._0_1_);
              }
              else if (cVar5 == 'R') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_d0 = CONCAT11(local_d0._1_1_,(char)iVar18);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((uint)local_138 & 1) != 0) {
              operator_delete(local_128);
            }
          }
        }
        break;
      case 0xb:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar18 = memcmp(plVar2,"SingleColor",0xb);
        if (iVar18 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23);
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 1) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              cVar5 = (char)*plVar2;
              if (cVar5 == 'B') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_c6 = (undefined1)iVar18;
              }
              else if (cVar5 == 'G') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_c8 = CONCAT11((char)iVar18,local_c8._0_1_);
              }
              else if (cVar5 == 'R') {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                iVar18 = atoi((char *)plVar2);
                local_c8 = CONCAT11(local_c8._1_1_,(char)iVar18);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((uint)local_138 & 1) != 0) {
              operator_delete(local_128);
            }
          }
        }
        else {
          iVar18 = memcmp(plVar2,"ColorVector",0xb);
          if (iVar18 == 0) {
            lVar26 = *(long *)(this_00 + 0x60);
            while (lVar26 != 0) {
              pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
              sVar25 = strlen(pcVar23);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_120,pcVar23,sVar25);
              pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_138,pcVar23);
              uVar28 = local_120 >> 1 & 0x7f;
              if ((local_120 & 1) != 0) {
                uVar28 = uStack_118;
              }
              if (uVar28 == 6) {
                plVar2 = plVar21;
                if ((local_120 & 1) != 0) {
                  plVar2 = local_110;
                }
                iVar18 = memcmp(plVar2,"ScaleX",6);
                if (iVar18 == 0) {
                  plVar2 = plVar27;
                  if (((uint)local_138 & 1) != 0) {
                    plVar2 = local_128;
                  }
                  dVar29 = atof((char *)plVar2);
                  fVar31 = (float)dVar29;
                }
                else {
                  iVar18 = memcmp(plVar2,"ScaleY",6);
                  if (iVar18 == 0) {
                    plVar2 = plVar27;
                    if (((uint)local_138 & 1) != 0) {
                      plVar2 = local_128;
                    }
                    dVar29 = atof((char *)plVar2);
                    fVar32 = (float)dVar29;
                  }
                }
              }
              lVar26 = *(long *)(lVar26 + 0x38);
              if (((uint)local_138 & 1) != 0) {
                operator_delete(local_128);
              }
            }
          }
        }
        break;
      case 0xd:
        plVar2 = plVar21;
        if ((local_120 & 1) != 0) {
          plVar2 = local_110;
        }
        iVar18 = memcmp(plVar2,"InnerNodeSize",0xd);
        if (iVar18 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar25 = strlen(pcVar23);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_120,pcVar23,sVar25);
            pcVar23 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar23);
            uVar28 = local_120 >> 1 & 0x7f;
            if ((local_120 & 1) != 0) {
              uVar28 = uStack_118;
            }
            if (uVar28 == 6) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              iVar18 = memcmp(plVar2,"Height",6);
              if (iVar18 == 0) {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                dVar29 = atof((char *)plVar2);
                fStack_fc = (float)dVar29;
              }
            }
            else if (uVar28 == 5) {
              plVar2 = plVar21;
              if ((local_120 & 1) != 0) {
                plVar2 = local_110;
              }
              iVar18 = memcmp(plVar2,"Width",5);
              if (iVar18 == 0) {
                plVar2 = plVar27;
                if (((uint)local_138 & 1) != 0) {
                  plVar2 = local_128;
                }
                dVar29 = atof((char *)plVar2);
                local_100 = (float)dVar29;
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((uint)local_138 & 1) != 0) {
              operator_delete(local_128);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_120 & 1) != 0) {
        operator_delete(local_110);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_188 = 0xff;
  local_190 = 0xff;
  local_198 = 0xff;
  local_187 = local_c8;
  local_185 = local_c6;
  local_18f = local_d0;
  local_168 = CONCAT44(fStack_fc,local_100);
  local_150[0] = CONCAT44(local_f4,local_f8);
  local_18d = local_ce;
  local_197 = local_d8;
  local_195 = local_d6;
  uStack_118 = CONCAT44(fStack_e4,fStack_e8);
  local_120 = CONCAT44(fStack_ec,local_f0);
  uVar28 = (ulong)((byte)local_a8[0] >> 1);
  pcVar22 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar28 = local_a0;
    pcVar22 = local_98;
  }
  local_138 = fVar31;
  local_134 = fVar32;
  uVar19 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar22,uVar28);
  uVar28 = (ulong)((byte)local_c0[0] >> 1);
  pcVar22 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar28 = local_b8;
    pcVar22 = local_b0;
  }
  uVar20 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar22,uVar28);
  uVar19 = flatbuffers::CreateResourceData(param_2,uVar19,uVar20,iVar17);
  uVar15 = flatbuffers::CreateScrollViewOptions
                     (fVar30,param_2,uVar15,uVar19,bVar13,&local_188,&local_190,&local_198,
                      local_1b8 & 0xffffffff,(undefined1)local_1bc,&local_138,&local_120,local_150,
                      bVar14,&local_168,local_1b8._4_4_,bVar10,bVar11,bVar12);
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar6 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}

