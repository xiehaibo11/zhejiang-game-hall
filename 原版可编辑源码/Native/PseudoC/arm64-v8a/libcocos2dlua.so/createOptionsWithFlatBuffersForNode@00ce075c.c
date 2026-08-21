
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::Node3DReader::createOptionsWithFlatBuffersForNode(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::Node3DReader::createOptionsWithFlatBuffersForNode
          (Node3DReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  XMLNode *this_00;
  size_t sVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_184;
  long local_180;
  int local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined2 local_167;
  undefined1 local_165;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  ulong local_148;
  int *local_140;
  float local_138;
  float fStack_134;
  ulong local_130;
  long *local_128;
  ulong local_120;
  ulong local_118;
  char *local_110;
  ulong local_108;
  ulong local_100;
  char *local_f8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [8];
  ulong local_e8;
  char *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  char *local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  char *local_a8;
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  fVar17 = 0.0;
  fVar18 = 0.0;
  cocos2d::Color4B::Color4B((Color4B *)&local_c0,0xff,0xff,0xff,0xff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,"");
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_108 = 0;
  local_118 = 0;
  local_110 = (char *)0x0;
  local_120 = 0;
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar14 == 0) {
    bVar5 = true;
    local_174 = 0;
    local_180 = 0;
    local_184 = 0xff;
  }
  else {
    local_184 = 0xff;
    plVar15 = (long *)((ulong)&local_138 | 1);
    piVar13 = (int *)((ulong)&local_150 | 1);
    local_180 = 0;
    local_174 = 0;
    bVar5 = true;
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_138,pcVar11);
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_150,pcVar11);
      uVar3 = (ulong)((byte)local_138._0_1_ >> 1);
      if (((uint)local_138 & 1) != 0) {
        uVar3 = local_130;
      }
      switch(uVar3) {
      case 3:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"Tag",3);
        if (iVar6 == 0) {
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            piVar2 = local_140;
          }
          local_174 = atoi((char *)piVar2);
        }
        break;
      case 4:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        if ((int)*plVar1 == 0x656d614e) {
          uVar3 = (ulong)((byte)local_150._0_1_ >> 1);
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            uVar3 = local_148;
            piVar2 = local_140;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_b8,(char *)piVar2,uVar3);
        }
        break;
      case 5:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"Alpha",5);
        if (iVar6 == 0) {
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            piVar2 = local_140;
          }
          local_184 = atoi((char *)piVar2);
        }
        break;
      case 8:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        if (*plVar1 == 0x6174614472657355) {
          uVar3 = (ulong)((byte)local_150._0_1_ >> 1);
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            uVar3 = local_148;
            piVar2 = local_140;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_f0,(char *)piVar2,uVar3);
        }
        break;
      case 9:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"ActionTag",9);
        if (iVar6 == 0) {
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            piVar2 = local_140;
          }
          local_180 = atol((char *)piVar2);
        }
        break;
      case 10:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"FrameEvent",10);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_150._0_1_ >> 1);
          piVar2 = piVar13;
          if (((uint)local_150 & 1) != 0) {
            uVar3 = local_148;
            piVar2 = local_140;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_d8,(char *)piVar2,uVar3);
        }
        break;
      case 0xf:
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"VisibleForFrame",0xf);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_150._0_1_ >> 1);
          if (((uint)local_150 & 1) != 0) {
            uVar3 = local_148;
          }
          if (uVar3 == 4) {
            piVar2 = piVar13;
            if (((uint)local_150 & 1) != 0) {
              piVar2 = local_140;
            }
            bVar5 = *piVar2 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((uint)local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      if (((uint)local_138 & 1) != 0) {
        operator_delete(local_128);
      }
    } while (lVar14 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  fVar21 = fVar17;
  if (this_00 == (XMLNode *)0x0) {
    fVar19 = 1.0;
    fStack_14c = fVar18;
    local_158 = fVar19;
  }
  else {
    fVar19 = 1.0;
    plVar15 = (long *)((ulong)&local_138 | 1);
    piVar13 = (int *)((ulong)&local_150 | 1);
    fVar22 = fVar18;
    fVar20 = fVar19;
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_138,pcVar11);
      uVar3 = (ulong)((byte)local_138._0_1_ >> 1);
      if (((uint)local_138 & 1) != 0) {
        uVar3 = local_130;
      }
      if (uVar3 == 6) {
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"CColor",6);
        if (iVar6 == 0) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar12 = strlen(pcVar11);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar11,sVar12);
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar11);
            uVar3 = (ulong)((byte)local_138._0_1_ >> 1);
            if (((uint)local_138 & 1) != 0) {
              uVar3 = local_130;
            }
            if (uVar3 == 1) {
              plVar1 = plVar15;
              if (((uint)local_138 & 1) != 0) {
                plVar1 = local_128;
              }
              switch((char)*plVar1) {
              case 'A':
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                iVar6 = atoi((char *)piVar2);
                local_bd = (undefined1)iVar6;
                break;
              case 'B':
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                iVar6 = atoi((char *)piVar2);
                local_be = (undefined1)iVar6;
                break;
              case 'G':
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                iVar6 = atoi((char *)piVar2);
                local_c0 = CONCAT11((char)iVar6,local_c0._0_1_);
                break;
              case 'R':
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                iVar6 = atoi((char *)piVar2);
                local_c0 = CONCAT11(local_c0._1_1_,(char)iVar6);
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            if (((uint)local_150 & 1) != 0) {
              operator_delete(local_140);
            }
          }
        }
      }
      else if (uVar3 == 7) {
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"Scale3D",7);
        if (iVar6 == 0) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar12 = strlen(pcVar11);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar11,sVar12);
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar11);
            uVar3 = (ulong)((byte)local_138._0_1_ >> 1);
            if (((uint)local_138 & 1) != 0) {
              uVar3 = local_130;
            }
            if (uVar3 == 1) {
              plVar1 = plVar15;
              if (((uint)local_138 & 1) != 0) {
                plVar1 = local_128;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                dVar16 = atof((char *)piVar2);
                fVar19 = (float)dVar16;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                dVar16 = atof((char *)piVar2);
                fVar20 = (float)dVar16;
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            if (((uint)local_150 & 1) != 0) {
              operator_delete(local_140);
            }
          }
        }
      }
      else if (uVar3 == 10) {
        plVar1 = plVar15;
        if (((uint)local_138 & 1) != 0) {
          plVar1 = local_128;
        }
        iVar6 = memcmp(plVar1,"Position3D",10);
        if (iVar6 == 0) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar12 = strlen(pcVar11);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_138,pcVar11,sVar12);
            pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_150,pcVar11);
            uVar3 = (ulong)((byte)local_138._0_1_ >> 1);
            if (((uint)local_138 & 1) != 0) {
              uVar3 = local_130;
            }
            if (uVar3 == 1) {
              plVar1 = plVar15;
              if (((uint)local_138 & 1) != 0) {
                plVar1 = local_128;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                dVar16 = atof((char *)piVar2);
                fVar22 = (float)dVar16;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar13;
                if (((uint)local_150 & 1) != 0) {
                  piVar2 = local_140;
                }
                dVar16 = atof((char *)piVar2);
                fVar21 = (float)dVar16;
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            if (((uint)local_150 & 1) != 0) {
              operator_delete(local_140);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((uint)local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      fStack_14c = fVar22;
      local_158 = fVar20;
    } while (this_00 != (XMLNode *)0x0);
  }
  local_168 = local_bd;
  local_167 = local_c0;
  local_165 = local_be;
  uVar3 = local_108 >> 1 & 0x7f;
  pcVar11 = (char *)((ulong)&local_108 | 1);
  if ((local_108 & 1) != 0) {
    uVar3 = local_100;
    pcVar11 = local_f8;
  }
  local_170 = 0;
  local_160 = fVar17;
  fStack_15c = fVar18;
  fStack_154 = fVar19;
  local_150 = fVar21;
  local_138 = fVar17;
  fStack_134 = fVar18;
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar3);
  uVar3 = local_120 >> 1 & 0x7f;
  pcVar11 = (char *)((ulong)&local_120 | 1);
  if ((local_120 & 1) != 0) {
    uVar3 = local_118;
    pcVar11 = local_110;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar3);
  uVar7 = flatbuffers::CreateLayoutComponentTable(0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0,uVar7,uVar8);
  uVar3 = (ulong)((byte)local_b8[0] >> 1);
  pcVar11 = (char *)((ulong)local_b8 | 1);
  if (((byte)local_b8[0] & 1) != 0) {
    uVar3 = local_b0;
    pcVar11 = local_a8;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar3);
  uVar3 = (ulong)((byte)local_d8[0] >> 1);
  pcVar11 = (char *)((ulong)local_d8 | 1);
  if (((byte)local_d8[0] & 1) != 0) {
    uVar3 = local_d0;
    pcVar11 = local_c8;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar3);
  uVar3 = (ulong)((byte)local_f0[0] >> 1);
  pcVar11 = (char *)((ulong)local_f0 | 1);
  if (((byte)local_f0[0] & 1) != 0) {
    uVar3 = local_e8;
    pcVar11 = local_e0;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar11,uVar3);
  uVar7 = flatbuffers::CreateWidgetOptions
                    (param_2,uVar8,local_180,&local_138,0,bVar5,local_184,local_174,&local_150,
                     &local_158,&local_160,&local_168,&local_170,0,0,0,0,uVar9,uVar10,0,0,uVar7);
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar4 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

