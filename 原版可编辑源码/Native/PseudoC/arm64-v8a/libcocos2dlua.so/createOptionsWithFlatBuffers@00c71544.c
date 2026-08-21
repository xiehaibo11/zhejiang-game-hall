
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ButtonReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ButtonReader::createOptionsWithFlatBuffers
          (ButtonReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  ButtonReader *pBVar23;
  char *pcVar24;
  int *__dest;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  undefined4 *puVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  double dVar29;
  int local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  undefined4 local_29c;
  int local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_278;
  byte local_277;
  byte local_276;
  byte local_275;
  ulong local_270;
  ulong uStack_268;
  int *local_260;
  ulong local_250;
  ulong uStack_248;
  char *local_240;
  ulong local_230;
  ulong uStack_228;
  char *local_220;
  ulong local_210;
  ulong uStack_208;
  char *local_200;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1f8;
  byte bStack_1f7;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined4 uStack_1f4;
  ulong uStack_1f0;
  char *local_1e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e0;
  undefined2 local_1df;
  undefined1 local_1dd;
  void *local_1d0;
  ulong local_1c8;
  ulong uStack_1c0;
  int *local_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  long *local_1a0;
  float local_198;
  float local_194;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_190 [8];
  ulong local_188;
  char *local_180;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_178 [8];
  ulong local_170;
  char *local_168;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160 [8];
  ulong local_158;
  char *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_148 [8];
  ulong local_140;
  char *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [8];
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
  ulong local_110;
  char *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [8];
  ulong local_e0;
  char *local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  float local_c8;
  float fStack_c4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  char *local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  plVar19 = (long *)WidgetReader::getInstance();
  uVar8 = (**(code **)(*plVar19 + 0x28))(plVar19,param_1,param_2);
  cocos2d::Rect::Rect((Rect *)&local_90);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  cocos2d::Size::Size((Size *)&local_c8);
  cocos2d::Color4B::Color4B((Color4B *)&local_d0,0xff,0xff,0xff,0xff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_100,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_118,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_130,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_148,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_160,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_178,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_190,"");
  local_2b4 = (uint)(byte)cocos2d::Color4B::BLACK;
  local_288._0_1_ = (byte)cocos2d::Color4B::BLACK;
  local_2b0 = (uint)cocos2d::Color4B::BLACK._1_1_;
  local_28c._0_1_ = cocos2d::Color4B::BLACK._1_1_;
  local_2ac = (uint)cocos2d::Color4B::BLACK._2_1_;
  local_284._0_1_ = cocos2d::Color4B::BLACK._2_1_;
  local_2b8 = (uint)(byte)cocos2d::Color4B::BLACK._3_1_;
  local_290._0_1_ = cocos2d::Color4B::BLACK._3_1_;
  cocos2d::Size::Size((Size *)&local_198,2.0,-2.0);
  lVar26 = *(long *)(param_1 + 0x60);
  if (lVar26 == 0) {
    local_2e0 = 1;
    iVar10 = 0xe;
    local_2d8 = 0;
    local_2d0 = 0;
    bVar4 = 0;
    bVar7 = true;
  }
  else {
    bVar7 = true;
    plVar19 = (long *)((ulong)&local_1b0 | 1);
    piVar27 = (int *)((ulong)&local_1c8 | 1);
    bVar4 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    iVar10 = 0xe;
    local_2e0 = 1;
    do {
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b0,pcVar20);
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1c8,pcVar20);
      uVar28 = local_1b0 >> 1 & 0x7f;
      if ((local_1b0 & 1) != 0) {
        uVar28 = uStack_1a8;
      }
      switch(uVar28) {
      case 8:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        if (*plVar2 == 0x657a6953746e6f46) {
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            piVar1 = local_1b8;
          }
          iVar10 = atoi((char *)piVar1);
        }
        else if (*plVar2 == 0x656d614e746e6f46) {
          uVar28 = local_1c8 >> 1 & 0x7f;
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            uVar28 = uStack_1c0;
            piVar1 = local_1b8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_c0,(char *)piVar1,uVar28);
        }
        break;
      case 10:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"ButtonText",10);
        if (iVar9 == 0) {
          uVar28 = local_1c8 >> 1 & 0x7f;
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            uVar28 = uStack_1c0;
            piVar1 = local_1b8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_a8,(char *)piVar1,uVar28);
        }
        break;
      case 0xb:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"Scale9Width",0xb);
        if (iVar9 == 0) {
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            piVar1 = local_1b8;
          }
          dVar29 = atof((char *)piVar1);
          fStack_88 = (float)dVar29;
        }
        else {
          iVar9 = memcmp(plVar2,"IsLocalized",0xb);
          if (iVar9 == 0) {
            uVar28 = local_1c8 >> 1 & 0x7f;
            if ((local_1c8 & 1) != 0) {
              uVar28 = uStack_1c0;
            }
            if (uVar28 == 4) {
              piVar1 = piVar27;
              if ((local_1c8 & 1) != 0) {
                piVar1 = local_1b8;
              }
              local_2d8 = (ulong)CONCAT14(*piVar1 == 0x65757254,(undefined4)local_2d8);
            }
            else {
              local_2d8 = local_2d8 & 0xffffffff;
            }
          }
          else {
            iVar9 = memcmp(plVar2,"OutlineSize",0xb);
            if (iVar9 == 0) {
              piVar1 = piVar27;
              if ((local_1c8 & 1) != 0) {
                piVar1 = local_1b8;
              }
              local_2e0 = atoi((char *)piVar1);
            }
          }
        }
        break;
      case 0xc:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"Scale9Enable",0xc);
        if (iVar9 == 0) {
          uVar28 = local_1c8 >> 1 & 0x7f;
          if ((local_1c8 & 1) != 0) {
            uVar28 = uStack_1c0;
          }
          if (uVar28 == 4) {
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              piVar1 = local_1b8;
            }
            bVar4 = *piVar1 == 0x65757254 | bVar4;
          }
        }
        else {
          iVar9 = memcmp(plVar2,"Scale9Height",0xc);
          if (iVar9 == 0) {
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              piVar1 = local_1b8;
            }
            dVar29 = atof((char *)piVar1);
            fStack_84 = (float)dVar29;
          }
          else {
            iVar9 = memcmp(plVar2,"DisplayState",0xc);
            if (iVar9 == 0) {
              uVar28 = local_1c8 >> 1 & 0x7f;
              if ((local_1c8 & 1) != 0) {
                uVar28 = uStack_1c0;
              }
              if (uVar28 == 4) {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                bVar7 = *piVar1 == 0x65757254;
              }
              else {
                bVar7 = false;
              }
            }
          }
        }
        break;
      case 0xd:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"Scale9OriginX",0xd);
        if (iVar9 == 0) {
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            piVar1 = local_1b8;
          }
          dVar29 = atof((char *)piVar1);
          local_90 = (float)dVar29;
        }
        else {
          iVar9 = memcmp(plVar2,"Scale9OriginY",0xd);
          if (iVar9 == 0) {
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              piVar1 = local_1b8;
            }
            dVar29 = atof((char *)piVar1);
            fStack_8c = (float)dVar29;
          }
          else {
            iVar9 = memcmp(plVar2,"ShadowEnabled",0xd);
            if (iVar9 == 0) {
              uVar28 = local_1c8 >> 1 & 0x7f;
              if ((local_1c8 & 1) != 0) {
                uVar28 = uStack_1c0;
              }
              if (uVar28 == 4) {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                local_2d8 = CONCAT44(local_2d8._4_4_,(uint)(*piVar1 == 0x65757254));
              }
              else {
                local_2d8 = (ulong)local_2d8._4_4_ << 0x20;
              }
            }
            else {
              iVar9 = memcmp(plVar2,"ShadowOffsetX",0xd);
              if (iVar9 == 0) {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                dVar29 = atof((char *)piVar1);
                local_198 = (float)dVar29;
              }
              else {
                iVar9 = memcmp(plVar2,"ShadowOffsetY",0xd);
                if (iVar9 == 0) {
                  piVar1 = piVar27;
                  if ((local_1c8 & 1) != 0) {
                    piVar1 = local_1b8;
                  }
                  dVar29 = atof((char *)piVar1);
                  local_194 = (float)dVar29;
                }
              }
            }
          }
        }
        break;
      case 0xe:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"OutlineEnabled",0xe);
        if (iVar9 == 0) {
          uVar28 = local_1c8 >> 1 & 0x7f;
          if ((local_1c8 & 1) != 0) {
            uVar28 = uStack_1c0;
          }
          if (uVar28 == 4) {
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              piVar1 = local_1b8;
            }
            local_2d0 = CONCAT44(local_2d0._4_4_,(uint)(*piVar1 == 0x65757254));
          }
          else {
            local_2d0 = (ulong)local_2d0._4_4_ << 0x20;
          }
        }
        break;
      case 0x10:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar9 = memcmp(plVar2,"ShadowBlurRadius",0x10);
        if (iVar9 == 0) {
          piVar1 = piVar27;
          if ((local_1c8 & 1) != 0) {
            piVar1 = local_1b8;
          }
          iVar9 = atoi((char *)piVar1);
          local_2d0 = CONCAT44(iVar9,(undefined4)local_2d0);
        }
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if ((local_1c8 & 1) != 0) {
        operator_delete(local_1b8);
      }
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
    } while (lVar26 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    local_29c = 0;
    local_294 = 0;
    iVar9 = 0;
    iVar12 = 0;
    local_2b4._0_1_ = (byte)local_288;
    local_2b8._0_1_ = local_290._0_1_;
    local_2b0._0_1_ = (byte)local_28c;
    local_2ac._0_1_ = (byte)local_284;
  }
  else {
    plVar19 = (long *)((ulong)&local_1b0 | 1);
    pcVar20 = (char *)((ulong)&local_1f8 | 1);
    iVar12 = 0;
    iVar9 = 0;
    piVar27 = (int *)((ulong)&local_1c8 | 1);
    local_294 = 0;
    local_29c = 0;
    local_290 = local_2b8;
    local_28c = local_2b0;
    local_288 = local_2b4;
    local_284 = local_2ac;
    do {
      pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1b0,pcVar21);
      uVar28 = local_1b0 >> 1 & 0x7f;
      if ((local_1b0 & 1) != 0) {
        uVar28 = uStack_1a8;
      }
      switch(uVar28) {
      case 4:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        if ((int)*plVar2 == 0x657a6953 && bVar4 == 1) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21);
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 1) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              if ((char)*plVar2 == 'Y') {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                dVar29 = atof((char *)piVar1);
                fStack_c4 = (float)dVar29;
              }
              else if ((char)*plVar2 == 'X') {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                dVar29 = atof((char *)piVar1);
                local_c8 = (float)dVar29;
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
        }
        break;
      case 9:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"TextColor",9);
        if (iVar11 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21);
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 1) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              cVar3 = (char)*plVar2;
              if (cVar3 == 'B') {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                iVar11 = atoi((char *)piVar1);
                local_ce = (undefined1)iVar11;
              }
              else if (cVar3 == 'G') {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                iVar11 = atoi((char *)piVar1);
                local_d0 = CONCAT11((char)iVar11,local_d0._0_1_);
              }
              else if (cVar3 == 'R') {
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                iVar11 = atoi((char *)piVar1);
                local_d0 = CONCAT11(local_d0._1_1_,(char)iVar11);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
        }
        break;
      case 0xb:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"ShadowColor",0xb);
        if (iVar11 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21);
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 1) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              switch((char)*plVar2) {
              case 'A':
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                local_290 = atoi((char *)piVar1);
                break;
              case 'B':
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                local_284 = atoi((char *)piVar1);
                break;
              case 'G':
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                local_28c = atoi((char *)piVar1);
                break;
              case 'R':
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  piVar1 = local_1b8;
                }
                local_288 = atoi((char *)piVar1);
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
        }
        break;
      case 0xc:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"FontResource",0xc);
        if (iVar11 == 0) {
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pBVar23 = (ButtonReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_1c8,pcVar21);
            piVar1 = local_1b8;
            uVar6 = uStack_1c0;
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 5) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              iVar11 = memcmp(plVar2,"Plist",5);
              if (iVar11 == 0) {
                uVar28 = local_1c8 >> 1 & 0x7f;
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  piVar1 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_190,(char *)piVar1,uVar28);
              }
            }
            else if (uVar28 == 4) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              if ((int)*plVar2 == 0x68746150) {
                uVar28 = local_1c8 >> 1 & 0x7f;
                piVar1 = piVar27;
                if ((local_1c8 & 1) != 0) {
                  uVar28 = uStack_1c0;
                  piVar1 = local_1b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_178,(char *)piVar1,uVar28);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_268 = 0;
                local_260 = (int *)0x0;
                local_270 = 0;
                if ((local_1c8 & 1) == 0) {
                  uStack_268 = uStack_1c0;
                  local_270 = local_1c8;
                  local_260 = local_1b8;
                }
                else {
                  if (0xffffffffffffffef < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_1c0 < 0x17) {
                    local_270 = (ulong)(byte)((int)uStack_1c0 << 1);
                    __dest = (int *)((ulong)&local_270 | 1);
                    if (uStack_1c0 != 0) goto LAB_00c729c4;
                  }
                  else {
                    uVar28 = uStack_1c0 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar28);
                    local_270 = uVar28 | 1;
                    uStack_268 = uVar6;
                    local_260 = __dest;
LAB_00c729c4:
                    pBVar23 = memcpy(__dest,piVar1,uVar6);
                  }
                  *(char *)((long)__dest + uVar6) = '\0';
                }
                local_29c = getResourceType(pBVar23,&local_270);
                if ((local_270 & 1) != 0) {
                  operator_delete(local_260);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if ((local_1c8 & 1) != 0) {
              operator_delete(local_1b8);
            }
          }
        }
        else {
          iVar11 = memcmp(plVar2,"OutlineColor",0xc);
          if (iVar11 == 0) {
            lVar26 = *(long *)(this_00 + 0x60);
            while (lVar26 != 0) {
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
              sVar22 = strlen(pcVar21);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1b0,pcVar21,sVar22);
              pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_1c8,pcVar21);
              uVar28 = local_1b0 >> 1 & 0x7f;
              if ((local_1b0 & 1) != 0) {
                uVar28 = uStack_1a8;
              }
              if (uVar28 == 1) {
                plVar2 = plVar19;
                if ((local_1b0 & 1) != 0) {
                  plVar2 = local_1a0;
                }
                switch((char)*plVar2) {
                case 'A':
                  piVar1 = piVar27;
                  if ((local_1c8 & 1) != 0) {
                    piVar1 = local_1b8;
                  }
                  local_2b8 = atoi((char *)piVar1);
                  break;
                case 'B':
                  piVar1 = piVar27;
                  if ((local_1c8 & 1) != 0) {
                    piVar1 = local_1b8;
                  }
                  local_2ac = atoi((char *)piVar1);
                  break;
                case 'G':
                  piVar1 = piVar27;
                  if ((local_1c8 & 1) != 0) {
                    piVar1 = local_1b8;
                  }
                  local_2b0 = atoi((char *)piVar1);
                  break;
                case 'R':
                  piVar1 = piVar27;
                  if ((local_1c8 & 1) != 0) {
                    piVar1 = local_1b8;
                  }
                  local_2b4 = atoi((char *)piVar1);
                }
              }
              lVar26 = *(long *)(lVar26 + 0x38);
              if ((local_1c8 & 1) != 0) {
                operator_delete(local_1b8);
              }
            }
          }
        }
        break;
      case 0xe:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"NormalFileData",0xe);
        if (iVar11 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1c8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pBVar23 = (ButtonReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_1f8,pcVar21);
            pcVar21 = local_1e8;
            uVar6 = uStack_1f0;
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 5) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              iVar11 = memcmp(plVar2,"Plist",5);
              if (iVar11 == 0) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_100,pcVar21,uVar28);
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21,uVar28);
              }
            }
            else if (uVar28 == 4) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              if ((int)*plVar2 == 0x68746150) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_e8,pcVar21,uVar28);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_248 = 0;
                local_240 = (char *)0x0;
                local_250 = 0;
                if (((byte)local_1f8 & 1) == 0) {
                  local_250 = CONCAT44(uStack_1f4,
                                       CONCAT13(bStack_1f5,
                                                CONCAT12(bStack_1f6,CONCAT11(bStack_1f7,local_1f8)))
                                      );
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
                    pcVar24 = (char *)((ulong)&local_250 | 1);
                    if (uStack_1f0 != 0) goto LAB_00c727fc;
                  }
                  else {
                    uVar28 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar28);
                    local_250 = uVar28 | 1;
                    uStack_248 = uVar6;
                    local_240 = pcVar24;
LAB_00c727fc:
                    pBVar23 = memcpy(pcVar24,pcVar21,uVar6);
                  }
                  pcVar24[uVar6] = '\0';
                }
                iVar12 = getResourceType(pBVar23,&local_250);
                if ((local_250 & 1) != 0) {
                  operator_delete(local_240);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((byte)local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (iVar12 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar28 = local_1c8 >> 1 & 0x7f;
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              uVar28 = uStack_1c0;
              piVar1 = local_1b8;
            }
            uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            local_1f8 = SUB41(uVar13,0);
            bStack_1f7 = (byte)((uint)uVar13 >> 8);
            bStack_1f6 = (byte)((uint)uVar13 >> 0x10);
            bStack_1f5 = (byte)((uint)uVar13 >> 0x18);
            puVar25 = *(undefined4 **)(this_01 + 8);
            if (puVar25 < *(undefined4 **)(this_01 + 0x10)) {
LAB_00c72b08:
              *puVar25 = uVar13;
              *(undefined4 **)(this_01 + 8) = puVar25 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>(this_01,&local_1f8);
            }
          }
joined_r0x00c72b2c:
          if (((byte)local_1e0 & 1) != 0) {
            operator_delete(local_1d0);
          }
          if ((local_1c8 & 1) != 0) {
            operator_delete(local_1b8);
          }
        }
        break;
      case 0xf:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"PressedFileData",0xf);
        if (iVar11 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1c8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pBVar23 = (ButtonReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_1f8,pcVar21);
            pcVar21 = local_1e8;
            uVar6 = uStack_1f0;
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 5) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              iVar11 = memcmp(plVar2,"Plist",5);
              if (iVar11 == 0) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_130,pcVar21,uVar28);
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21,uVar28);
              }
            }
            else if (uVar28 == 4) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              if ((int)*plVar2 == 0x68746150) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_118,pcVar21,uVar28);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_228 = 0;
                local_220 = (char *)0x0;
                local_230 = 0;
                if (((byte)local_1f8 & 1) == 0) {
                  local_230 = CONCAT44(uStack_1f4,
                                       CONCAT13(bStack_1f5,
                                                CONCAT12(bStack_1f6,CONCAT11(bStack_1f7,local_1f8)))
                                      );
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
                    pcVar24 = (char *)((ulong)&local_230 | 1);
                    if (uStack_1f0 != 0) goto LAB_00c72018;
                  }
                  else {
                    uVar28 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar28);
                    local_230 = uVar28 | 1;
                    uStack_228 = uVar6;
                    local_220 = pcVar24;
LAB_00c72018:
                    pBVar23 = memcpy(pcVar24,pcVar21,uVar6);
                  }
                  pcVar24[uVar6] = '\0';
                }
                iVar9 = getResourceType(pBVar23,&local_230);
                if ((local_230 & 1) != 0) {
                  operator_delete(local_220);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((byte)local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (iVar9 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar28 = local_1c8 >> 1 & 0x7f;
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              uVar28 = uStack_1c0;
              piVar1 = local_1b8;
            }
            uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            local_1f8 = SUB41(uVar13,0);
            bStack_1f7 = (byte)((uint)uVar13 >> 8);
            bStack_1f6 = (byte)((uint)uVar13 >> 0x10);
            bStack_1f5 = (byte)((uint)uVar13 >> 0x18);
            puVar25 = *(undefined4 **)(this_01 + 8);
            if (puVar25 < *(undefined4 **)(this_01 + 0x10)) goto LAB_00c72b08;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>(this_01,&local_1f8);
          }
          goto joined_r0x00c72b2c;
        }
        break;
      case 0x10:
        plVar2 = plVar19;
        if ((local_1b0 & 1) != 0) {
          plVar2 = local_1a0;
        }
        iVar11 = memcmp(plVar2,"DisabledFileData",0x10);
        if (iVar11 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_1c8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_1e0,"");
          lVar26 = *(long *)(this_00 + 0x60);
          while (lVar26 != 0) {
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 8));
            sVar22 = strlen(pcVar21);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b0,pcVar21,sVar22);
            pcVar21 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar26 + 0x20));
            pBVar23 = (ButtonReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_1f8,pcVar21);
            pcVar21 = local_1e8;
            uVar6 = uStack_1f0;
            uVar28 = local_1b0 >> 1 & 0x7f;
            if ((local_1b0 & 1) != 0) {
              uVar28 = uStack_1a8;
            }
            if (uVar28 == 5) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              iVar11 = memcmp(plVar2,"Plist",5);
              if (iVar11 == 0) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_160,pcVar21,uVar28);
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1c8,pcVar21,uVar28);
              }
            }
            else if (uVar28 == 4) {
              plVar2 = plVar19;
              if ((local_1b0 & 1) != 0) {
                plVar2 = local_1a0;
              }
              if ((int)*plVar2 == 0x68746150) {
                pcVar21 = pcVar20;
                uVar28 = (ulong)((byte)local_1f8 >> 1);
                if (((byte)local_1f8 & 1) != 0) {
                  pcVar21 = local_1e8;
                  uVar28 = uStack_1f0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_148,pcVar21,uVar28);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_208 = 0;
                local_200 = (char *)0x0;
                local_210 = 0;
                if (((byte)local_1f8 & 1) == 0) {
                  local_210 = CONCAT44(uStack_1f4,
                                       CONCAT13(bStack_1f5,
                                                CONCAT12(bStack_1f6,CONCAT11(bStack_1f7,local_1f8)))
                                      );
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
                    pcVar24 = (char *)((ulong)&local_210 | 1);
                    if (uStack_1f0 != 0) goto LAB_00c7234c;
                  }
                  else {
                    uVar28 = uStack_1f0 + 0x10 & 0xfffffffffffffff0;
                    pcVar24 = operator_new(uVar28);
                    local_210 = uVar28 | 1;
                    uStack_208 = uVar6;
                    local_200 = pcVar24;
LAB_00c7234c:
                    pBVar23 = memcpy(pcVar24,pcVar21,uVar6);
                  }
                  pcVar24[uVar6] = '\0';
                }
                local_294 = getResourceType(pBVar23,&local_210);
                if ((local_210 & 1) != 0) {
                  operator_delete(local_200);
                }
              }
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (((byte)local_1f8 & 1) != 0) {
              operator_delete(local_1e8);
            }
          }
          if (local_294 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar28 = local_1c8 >> 1 & 0x7f;
            piVar1 = piVar27;
            if ((local_1c8 & 1) != 0) {
              uVar28 = uStack_1c0;
              piVar1 = local_1b8;
            }
            uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar28);
            local_1f8 = SUB41(uVar13,0);
            bStack_1f7 = (byte)((uint)uVar13 >> 8);
            bStack_1f6 = (byte)((uint)uVar13 >> 0x10);
            bStack_1f5 = (byte)((uint)uVar13 >> 0x18);
            puVar25 = *(undefined4 **)(this_01 + 8);
            if (puVar25 < *(undefined4 **)(this_01 + 0x10)) goto LAB_00c72b08;
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>(this_01,&local_1f8);
          }
          goto joined_r0x00c72b2c;
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  bStack_1f7 = (byte)local_2b4;
  local_1f8 = local_2b8._0_1_;
  local_1c8 = CONCAT44(fStack_c4,local_c8);
  bStack_1f6 = (byte)local_2b0;
  uStack_1a8 = CONCAT44(fStack_84,fStack_88);
  local_1b0 = CONCAT44(fStack_8c,local_90);
  bStack_1f5 = (byte)local_2ac;
  local_1e0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff;
  local_1df = local_d0;
  local_278 = local_290._0_1_;
  local_1dd = local_ce;
  local_277 = (byte)local_288;
  local_276 = (byte)local_28c;
  local_275 = (byte)local_284;
  uVar28 = (ulong)((byte)local_e8[0] >> 1);
  pcVar20 = (char *)((ulong)local_e8 | 1);
  if (((byte)local_e8[0] & 1) != 0) {
    uVar28 = local_e0;
    pcVar20 = local_d8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar28 = (ulong)((byte)local_100[0] >> 1);
  pcVar20 = (char *)((ulong)local_100 | 1);
  if (((byte)local_100[0] & 1) != 0) {
    uVar28 = local_f8;
    pcVar20 = local_f0;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar13 = flatbuffers::CreateResourceData(param_2,uVar13,uVar14,iVar12);
  uVar28 = (ulong)((byte)local_118[0] >> 1);
  pcVar20 = (char *)((ulong)local_118 | 1);
  if (((byte)local_118[0] & 1) != 0) {
    uVar28 = local_110;
    pcVar20 = local_108;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar28 = (ulong)((byte)local_130[0] >> 1);
  pcVar20 = (char *)((ulong)local_130 | 1);
  if (((byte)local_130[0] & 1) != 0) {
    uVar28 = local_128;
    pcVar20 = local_120;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar14 = flatbuffers::CreateResourceData(param_2,uVar14,uVar15,iVar9);
  uVar28 = (ulong)((byte)local_148[0] >> 1);
  pcVar20 = (char *)((ulong)local_148 | 1);
  if (((byte)local_148[0] & 1) != 0) {
    uVar28 = local_140;
    pcVar20 = local_138;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar28 = (ulong)((byte)local_160[0] >> 1);
  pcVar20 = (char *)((ulong)local_160 | 1);
  if (((byte)local_160[0] & 1) != 0) {
    uVar28 = local_158;
    pcVar20 = local_150;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar15 = flatbuffers::CreateResourceData(param_2,uVar15,uVar16,local_294);
  uVar28 = (ulong)((byte)local_178[0] >> 1);
  pcVar20 = (char *)((ulong)local_178 | 1);
  if (((byte)local_178[0] & 1) != 0) {
    uVar28 = local_170;
    pcVar20 = local_168;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar28 = (ulong)((byte)local_190[0] >> 1);
  pcVar20 = (char *)((ulong)local_190 | 1);
  if (((byte)local_190[0] & 1) != 0) {
    uVar28 = local_188;
    pcVar20 = local_180;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar16 = flatbuffers::CreateResourceData(param_2,uVar16,uVar17,local_29c);
  uVar28 = (ulong)((byte)local_a8[0] >> 1);
  pcVar20 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar28 = local_a0;
    pcVar20 = local_98;
  }
  uVar17 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar28 = (ulong)((byte)local_c0[0] >> 1);
  pcVar20 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar28 = local_b8;
    pcVar20 = local_b0;
  }
  uVar18 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar20,uVar28);
  uVar8 = flatbuffers::CreateButtonOptions
                    (local_198,local_194,param_2,uVar8,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,
                     iVar10,&local_1e0,&local_1b0,&local_1c8,bVar4,bVar7,(char)local_2d0,&local_1f8,
                     local_2e0,(char)local_2d8,&local_278,local_2d0._4_4_,(char)(local_2d8 >> 0x20))
  ;
  if (((byte)local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (((byte)local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if (((byte)local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

