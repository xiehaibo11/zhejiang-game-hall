
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::TextReader::createOptionsWithFlatBuffers
          (TextReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  char *pcVar16;
  XMLNode *this_00;
  size_t sVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  int local_158;
  int local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108;
  byte local_107;
  byte local_106;
  byte local_105;
  ulong local_100;
  long *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0;
  byte local_ef;
  byte local_ee;
  byte local_ed;
  ulong local_e8;
  long *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  char *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  float local_a8;
  float local_a4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar15 = (long *)WidgetReader::getInstance();
  uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"Text Label");
  bVar4 = cocos2d::Color4B::BLACK._3_1_;
  local_124 = (uint)(byte)cocos2d::Color4B::BLACK;
  local_10c._0_1_ = (byte)cocos2d::Color4B::BLACK;
  local_120 = (uint)cocos2d::Color4B::BLACK._1_1_;
  local_110._0_1_ = cocos2d::Color4B::BLACK._1_1_;
  uVar11 = (uint)(byte)cocos2d::Color4B::BLACK._3_1_;
  local_118._0_1_ = cocos2d::Color4B::BLACK._3_1_;
  local_11c = (uint)cocos2d::Color4B::BLACK._2_1_;
  local_114._0_1_ = cocos2d::Color4B::BLACK._2_1_;
  cocos2d::Size::Size((Size *)&local_a8,2.0,-2.0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,"");
  lVar18 = *(long *)(param_1 + 0x60);
  if (lVar18 == 0) {
    iVar9 = 0x14;
    local_130 = 0;
    local_128 = 0;
    local_148 = 0;
    local_140 = 0;
    local_150 = 0;
    local_158 = 1;
    local_154 = 0;
  }
  else {
    local_158 = 1;
    local_154 = 0;
    plVar15 = (long *)((ulong)&local_f0 | 1);
    plVar19 = (long *)((ulong)&local_108 | 1);
    local_150 = 0;
    local_148 = 0;
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    iVar9 = 0x14;
    do {
      pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_f0,pcVar16);
      pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_108,pcVar16);
      uVar2 = (ulong)((byte)local_f0 >> 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar2 = local_e8;
      }
      uVar12 = local_128;
      switch(uVar2) {
      case 8:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        if (*plVar1 == 0x657a6953746e6f46) {
          plVar1 = plVar19;
          if (((byte)local_108 & 1) != 0) {
            plVar1 = local_f8;
          }
          iVar9 = atoi((char *)plVar1);
        }
        else if (*plVar1 == 0x656d614e746e6f46) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          plVar1 = plVar19;
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
            plVar1 = local_f8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_88,(char *)plVar1,uVar2);
        }
        break;
      case 9:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"LabelText",9);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          plVar1 = plVar19;
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
            plVar1 = local_f8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_a0,(char *)plVar1,uVar2);
        }
        else {
          iVar10 = memcmp(plVar1,"AreaWidth",9);
          if (iVar10 == 0) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_154 = atoi((char *)plVar1);
          }
        }
        break;
      case 10:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"AreaHeight",10);
        if (iVar10 == 0) {
          plVar1 = plVar19;
          if (((byte)local_108 & 1) != 0) {
            plVar1 = local_f8;
          }
          iVar10 = atoi((char *)plVar1);
          local_130 = CONCAT44(local_130._4_4_,iVar10);
        }
        break;
      case 0xb:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"IsLocalized",0xb);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 4) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_148 = CONCAT44(local_148._4_4_,(uint)((int)*plVar1 == 0x65757254));
          }
          else {
            local_148 = (ulong)local_148._4_4_ << 0x20;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"OutlineSize",0xb);
          if (iVar10 == 0) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_158 = atoi((char *)plVar1);
          }
        }
        break;
      case 0xc:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"IsCustomSize",0xc);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 4) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_150 = (ulong)CONCAT14((int)*plVar1 == 0x65757254,(undefined4)local_150);
          }
          else {
            local_150 = local_150 & 0xffffffff;
          }
        }
        break;
      case 0xd:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"ShadowEnabled",0xd);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 4) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_148 = (ulong)CONCAT14((int)*plVar1 == 0x65757254,(undefined4)local_148);
          }
          else {
            local_148 = local_148 & 0xffffffff;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"ShadowOffsetX",0xd);
          if (iVar10 == 0) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            dVar20 = atof((char *)plVar1);
            local_a8 = (float)dVar20;
          }
          else {
            iVar10 = memcmp(plVar1,"ShadowOffsetY",0xd);
            if (iVar10 == 0) {
              plVar1 = plVar19;
              if (((byte)local_108 & 1) != 0) {
                plVar1 = local_f8;
              }
              dVar20 = atof((char *)plVar1);
              local_a4 = (float)dVar20;
            }
          }
        }
        break;
      case 0xe:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"OutlineEnabled",0xe);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 4) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_140 = CONCAT44(local_140._4_4_,(uint)((int)*plVar1 == 0x65757254));
          }
          else {
            local_140 = (ulong)local_140._4_4_ << 0x20;
          }
        }
        break;
      case 0x10:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"ShadowBlurRadius",0x10);
        if (iVar10 == 0) {
          plVar1 = plVar19;
          if (((byte)local_108 & 1) != 0) {
            plVar1 = local_f8;
          }
          iVar10 = atoi((char *)plVar1);
          local_140 = CONCAT44(iVar10,(undefined4)local_140);
        }
        break;
      case 0x14:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"TouchScaleChangeAble",0x14);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 4) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            local_150 = CONCAT44(local_150._4_4_,(uint)((int)*plVar1 == 0x65757254));
          }
          else {
            local_150 = (ulong)local_150._4_4_ << 0x20;
          }
        }
        break;
      case 0x15:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"VerticalAlignmentType",0x15);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 9) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            iVar10 = memcmp(plVar1,"VT_Center",9);
            if (iVar10 == 0) {
              uVar13 = 1;
            }
            else {
              iVar10 = memcmp(plVar1,"VT_Bottom",9);
              uVar13 = 2;
              if (iVar10 != 0) {
                uVar13 = local_130._4_4_;
              }
            }
          }
          else {
            if (uVar2 != 6) break;
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            iVar10 = memcmp(plVar1,"VT_Top",6);
            uVar13 = 0;
            if (iVar10 != 0) {
              uVar13 = local_130._4_4_;
            }
          }
          local_130 = CONCAT44(uVar13,(undefined4)local_130);
        }
        break;
      case 0x17:
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"HorizontalAlignmentType",0x17);
        if (iVar10 == 0) {
          uVar2 = (ulong)((byte)local_108 >> 1);
          if (((byte)local_108 & 1) != 0) {
            uVar2 = local_100;
          }
          if (uVar2 == 9) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            iVar10 = memcmp(plVar1,"HT_Center",9);
            if (iVar10 == 0) {
              uVar12 = 1;
            }
          }
          else if (uVar2 == 8) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            uVar12 = 2;
            if (*plVar1 != 0x74686769525f5448) {
              uVar12 = local_128;
            }
          }
          else if (uVar2 == 7) {
            plVar1 = plVar19;
            if (((byte)local_108 & 1) != 0) {
              plVar1 = local_f8;
            }
            iVar10 = memcmp(plVar1,"HT_Left",7);
            uVar12 = 0;
            if (iVar10 != 0) {
              uVar12 = local_128;
            }
          }
        }
      }
      local_128 = uVar12;
      lVar18 = *(long *)(lVar18 + 0x38);
      if (((byte)local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    } while (lVar18 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  bVar5 = (byte)local_10c;
  bVar6 = (byte)local_110;
  bVar7 = (byte)local_114;
  if (this_00 != (XMLNode *)0x0) {
    plVar15 = (long *)((ulong)&local_f0 | 1);
    plVar19 = (long *)((ulong)&local_108 | 1);
    local_118 = uVar11;
    local_114 = local_11c;
    local_110 = local_120;
    local_10c = local_124;
    do {
      pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_f0,pcVar16);
      uVar2 = (ulong)((byte)local_f0 >> 1);
      if (((byte)local_f0 & 1) != 0) {
        uVar2 = local_e8;
      }
      if (uVar2 == 0xb) {
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"ShadowColor",0xb);
        if (iVar10 == 0) {
          lVar18 = *(long *)(this_00 + 0x60);
          while (lVar18 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 8));
            sVar17 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_f0,pcVar16,sVar17);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_108,pcVar16);
            uVar2 = (ulong)((byte)local_f0 >> 1);
            if (((byte)local_f0 & 1) != 0) {
              uVar2 = local_e8;
            }
            if (uVar2 == 1) {
              plVar1 = plVar15;
              if (((byte)local_f0 & 1) != 0) {
                plVar1 = local_e0;
              }
              switch((char)*plVar1) {
              case 'A':
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  plVar1 = local_f8;
                }
                local_118 = atoi((char *)plVar1);
                break;
              case 'B':
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  plVar1 = local_f8;
                }
                local_114 = atoi((char *)plVar1);
                break;
              case 'G':
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  plVar1 = local_f8;
                }
                local_110 = atoi((char *)plVar1);
                break;
              case 'R':
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  plVar1 = local_f8;
                }
                local_10c = atoi((char *)plVar1);
              }
            }
            lVar18 = *(long *)(lVar18 + 0x38);
            if (((byte)local_108 & 1) != 0) {
              operator_delete(local_f8);
            }
          }
        }
      }
      else if (uVar2 == 0xc) {
        plVar1 = plVar15;
        if (((byte)local_f0 & 1) != 0) {
          plVar1 = local_e0;
        }
        iVar10 = memcmp(plVar1,"FontResource",0xc);
        if (iVar10 == 0) {
          lVar18 = *(long *)(this_00 + 0x60);
          while (lVar18 != 0) {
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 8));
            sVar17 = strlen(pcVar16);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_f0,pcVar16,sVar17);
            pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_108,pcVar16);
            uVar2 = (ulong)((byte)local_f0 >> 1);
            if (((byte)local_f0 & 1) != 0) {
              uVar2 = local_e8;
            }
            if (uVar2 == 5) {
              plVar1 = plVar15;
              if (((byte)local_f0 & 1) != 0) {
                plVar1 = local_e0;
              }
              iVar10 = memcmp(plVar1,"Plist",5);
              if (iVar10 == 0) {
                uVar2 = (ulong)((byte)local_108 >> 1);
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  uVar2 = local_100;
                  plVar1 = local_f8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_d8,(char *)plVar1,uVar2);
              }
            }
            else if (uVar2 == 4) {
              plVar1 = plVar15;
              if (((byte)local_f0 & 1) != 0) {
                plVar1 = local_e0;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar2 = (ulong)((byte)local_108 >> 1);
                plVar1 = plVar19;
                if (((byte)local_108 & 1) != 0) {
                  uVar2 = local_100;
                  plVar1 = local_f8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,(char *)plVar1,uVar2);
              }
            }
            lVar18 = *(long *)(lVar18 + 0x38);
            if (((byte)local_108 & 1) != 0) {
              operator_delete(local_f8);
            }
          }
        }
        else {
          iVar10 = memcmp(plVar1,"OutlineColor",0xc);
          if (iVar10 == 0) {
            lVar18 = *(long *)(this_00 + 0x60);
            while (lVar18 != 0) {
              pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 8));
              sVar17 = strlen(pcVar16);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (&local_f0,pcVar16,sVar17);
              pcVar16 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar18 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(&local_108,pcVar16);
              uVar2 = (ulong)((byte)local_f0 >> 1);
              if (((byte)local_f0 & 1) != 0) {
                uVar2 = local_e8;
              }
              if (uVar2 == 1) {
                plVar1 = plVar15;
                if (((byte)local_f0 & 1) != 0) {
                  plVar1 = local_e0;
                }
                switch((char)*plVar1) {
                case 'A':
                  plVar1 = plVar19;
                  if (((byte)local_108 & 1) != 0) {
                    plVar1 = local_f8;
                  }
                  uVar11 = atoi((char *)plVar1);
                  break;
                case 'B':
                  plVar1 = plVar19;
                  if (((byte)local_108 & 1) != 0) {
                    plVar1 = local_f8;
                  }
                  local_11c = atoi((char *)plVar1);
                  break;
                case 'G':
                  plVar1 = plVar19;
                  if (((byte)local_108 & 1) != 0) {
                    plVar1 = local_f8;
                  }
                  local_120 = atoi((char *)plVar1);
                  break;
                case 'R':
                  plVar1 = plVar19;
                  if (((byte)local_108 & 1) != 0) {
                    plVar1 = local_f8;
                  }
                  local_124 = atoi((char *)plVar1);
                }
              }
              lVar18 = *(long *)(lVar18 + 0x38);
              if (((byte)local_108 & 1) != 0) {
                operator_delete(local_f8);
              }
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      bVar4 = SUB41(uVar11,0);
      bVar5 = (byte)local_124;
      bVar6 = (byte)local_120;
      bVar7 = (byte)local_11c;
    } while (this_00 != (XMLNode *)0x0);
  }
  local_11c._0_1_ = bVar7;
  local_120._0_1_ = bVar6;
  local_124._0_1_ = bVar5;
  local_f0 = bVar4;
  local_ef = (byte)local_124;
  local_ee = (byte)local_120;
  local_ed = (byte)local_11c;
  local_108 = local_118._0_1_;
  local_107 = (byte)local_10c;
  local_106 = (byte)local_110;
  local_105 = (byte)local_114;
  uVar2 = (ulong)((byte)local_c0[0] >> 1);
  pcVar16 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar2 = local_b8;
    pcVar16 = local_b0;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar16,uVar2);
  uVar2 = (ulong)((byte)local_d8[0] >> 1);
  pcVar16 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar2 = local_d0;
    pcVar16 = local_c8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar16,uVar2);
  uVar12 = flatbuffers::CreateResourceData(param_2,uVar12,uVar13,0);
  uVar2 = (ulong)((byte)local_88[0] >> 1);
  pcVar16 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar2 = local_80;
    pcVar16 = local_78;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar16,uVar2);
  uVar2 = (ulong)((byte)local_a0[0] >> 1);
  pcVar16 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar2 = local_98;
    pcVar16 = local_90;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar16,uVar2);
  uVar8 = flatbuffers::CreateTextOptions
                    (local_a8,local_a4,param_2,uVar8,uVar12,uVar13,iVar9,uVar14,local_154,
                     local_130 & 0xffffffff,local_128,local_130._4_4_,(char)local_150,
                     (char)(local_150 >> 0x20),(char)local_140,&local_f0,local_158,
                     (char)(local_148 >> 0x20),&local_108,local_140._4_4_,(char)local_148);
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

