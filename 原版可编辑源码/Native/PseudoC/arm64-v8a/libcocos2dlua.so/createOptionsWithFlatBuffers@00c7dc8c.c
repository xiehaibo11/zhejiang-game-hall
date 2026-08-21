
/* cocostudio::ImageViewReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ImageViewReader::createOptionsWithFlatBuffers
          (ImageViewReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  byte bVar6;
  ulong __n;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  char *pcVar13;
  XMLNode *this_00;
  char *pcVar14;
  size_t sVar15;
  ImageViewReader *pIVar16;
  char *__dest;
  vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
  *this_01;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  double dVar20;
  ulong local_130;
  ulong uStack_128;
  char *local_120;
  uint local_118;
  undefined4 uStack_114;
  ulong uStack_110;
  char *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [16];
  void *local_f0;
  ulong local_e8;
  ulong local_e0;
  int *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  long *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  char *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  plVar12 = (long *)WidgetReader::getInstance();
  uVar7 = (**(code **)(*plVar12 + 0x28))(plVar12,param_1,param_2);
  cocos2d::Rect::Rect((Rect *)&local_80);
  cocos2d::Size::Size((Size *)&local_88);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  lVar17 = *(long *)(param_1 + 0x60);
  if (lVar17 == 0) {
    bVar6 = 0;
  }
  else {
    plVar12 = (long *)((ulong)&local_d0 | 1);
    piVar18 = (int *)((ulong)&local_e8 | 1);
    bVar6 = 0;
    do {
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_d0,pcVar13);
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_e8,pcVar13);
      bVar4 = local_d0._0_1_;
      uVar19 = (ulong)((byte)local_d0._0_1_ >> 1);
      if ((local_d0 & 1) != 0) {
        uVar19 = uStack_c8;
      }
      if (uVar19 == 0xb) {
        plVar2 = plVar12;
        if ((local_d0 & 1) != 0) {
          plVar2 = local_c0;
        }
        iVar8 = memcmp(plVar2,"Scale9Width",0xb);
        if (iVar8 == 0) {
          piVar1 = piVar18;
          if ((local_e8 & 1) != 0) {
            piVar1 = local_d8;
          }
          dVar20 = atof((char *)piVar1);
          fStack_78 = (float)dVar20;
        }
      }
      else if (uVar19 == 0xd) {
        plVar2 = plVar12;
        if ((local_d0 & 1) != 0) {
          plVar2 = local_c0;
        }
        iVar8 = memcmp(plVar2,"Scale9OriginX",0xd);
        if (iVar8 == 0) {
          piVar1 = piVar18;
          if ((local_e8 & 1) != 0) {
            piVar1 = local_d8;
          }
          dVar20 = atof((char *)piVar1);
          local_80 = (float)dVar20;
        }
        else {
          iVar8 = memcmp(plVar2,"Scale9OriginY",0xd);
          if (iVar8 == 0) {
            piVar1 = piVar18;
            if ((local_e8 & 1) != 0) {
              piVar1 = local_d8;
            }
            dVar20 = atof((char *)piVar1);
            fStack_7c = (float)dVar20;
          }
        }
      }
      else if (uVar19 == 0xc) {
        plVar2 = plVar12;
        if ((local_d0 & 1) != 0) {
          plVar2 = local_c0;
        }
        iVar8 = memcmp(plVar2,"Scale9Enable",0xc);
        if (iVar8 == 0) {
          uVar19 = local_e8 >> 1 & 0x7f;
          if ((local_e8 & 1) != 0) {
            uVar19 = local_e0;
          }
          if (uVar19 == 4) {
            piVar1 = piVar18;
            if ((local_e8 & 1) != 0) {
              piVar1 = local_d8;
            }
            bVar6 = *piVar1 == 0x65757254 | bVar6;
          }
        }
        else {
          iVar8 = memcmp(plVar2,"Scale9Height",0xc);
          if (iVar8 == 0) {
            piVar1 = piVar18;
            if ((local_e8 & 1) != 0) {
              piVar1 = local_d8;
            }
            dVar20 = atof((char *)piVar1);
            fStack_74 = (float)dVar20;
          }
        }
      }
      lVar17 = *(long *)(lVar17 + 0x38);
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
        bVar4 = local_d0._0_1_;
      }
      if (((byte)bVar4 & 1) != 0) {
        operator_delete(local_c0);
      }
    } while (lVar17 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar8 = 0;
  if (this_00 != (XMLNode *)0x0) {
    plVar12 = (long *)((ulong)&local_d0 | 1);
    piVar18 = (int *)((ulong)&local_e8 | 1);
    pcVar13 = (char *)((ulong)&local_118 | 1);
    do {
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_d0,pcVar14);
      uVar19 = local_d0 >> 1 & 0x7f;
      if ((local_d0 & 1) != 0) {
        uVar19 = uStack_c8;
      }
      if (uVar19 == 8) {
        plVar2 = plVar12;
        if ((local_d0 & 1) != 0) {
          plVar2 = local_c0;
        }
        if (*plVar2 == 0x61746144656c6946) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e8,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_100,"");
          lVar17 = *(long *)(this_00 + 0x60);
          while (lVar17 != 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
            sVar15 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_d0,pcVar14,sVar15);
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
            pIVar16 = (ImageViewReader *)
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_118,pcVar14);
            pcVar14 = local_108;
            __n = uStack_110;
            uVar19 = local_d0 >> 1 & 0x7f;
            if ((local_d0 & 1) != 0) {
              uVar19 = uStack_c8;
            }
            if (uVar19 == 5) {
              plVar2 = plVar12;
              if ((local_d0 & 1) != 0) {
                plVar2 = local_c0;
              }
              iVar9 = memcmp(plVar2,"Plist",5);
              if (iVar9 == 0) {
                uVar19 = (ulong)((byte)local_118._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_118 & 1) != 0) {
                  uVar19 = uStack_110;
                  pcVar14 = local_108;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_b8,pcVar14,uVar19);
                uVar19 = (ulong)((byte)local_118._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_118 & 1) != 0) {
                  uVar19 = uStack_110;
                  pcVar14 = local_108;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_e8,pcVar14,uVar19);
              }
            }
            else if (uVar19 == 4) {
              plVar2 = plVar12;
              if ((local_d0 & 1) != 0) {
                plVar2 = local_c0;
              }
              if ((int)*plVar2 == 0x68746150) {
                uVar19 = (ulong)((byte)local_118._0_1_ >> 1);
                pcVar14 = pcVar13;
                if ((local_118 & 1) != 0) {
                  uVar19 = uStack_110;
                  pcVar14 = local_108;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a0,pcVar14,uVar19);
              }
              else if ((int)*plVar2 == 0x65707954) {
                uStack_128 = 0;
                local_120 = (char *)0x0;
                local_130 = 0;
                if ((local_118 & 1) == 0) {
                  local_130 = CONCAT44(uStack_114,local_118);
                  uStack_128 = uStack_110;
                  local_120 = local_108;
                }
                else {
                  if (0xffffffffffffffef < uStack_110) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uStack_110 < 0x17) {
                    local_130 = (ulong)(byte)((int)uStack_110 << 1);
                    __dest = (char *)((ulong)&local_130 | 1);
                    if (uStack_110 != 0) goto LAB_00c7e298;
                  }
                  else {
                    uVar19 = uStack_110 + 0x10 & 0xfffffffffffffff0;
                    __dest = operator_new(uVar19);
                    local_130 = uVar19 | 1;
                    uStack_128 = __n;
                    local_120 = __dest;
LAB_00c7e298:
                    pIVar16 = memcpy(__dest,pcVar14,__n);
                  }
                  __dest[__n] = '\0';
                }
                iVar8 = getResourceType(pIVar16,&local_130);
                if ((local_130 & 1) != 0) {
                  operator_delete(local_120);
                }
              }
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((local_118 & 1) != 0) {
              operator_delete(local_108);
            }
          }
          if (iVar8 == 1) {
            this_01 = (vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                       *)FlatBuffersSerialize::getInstance();
            uVar19 = local_e8 >> 1 & 0x7f;
            piVar1 = piVar18;
            if ((local_e8 & 1) != 0) {
              uVar19 = local_e0;
              piVar1 = local_d8;
            }
            local_118 = flatbuffers::FlatBufferBuilder::CreateString(param_2,(char *)piVar1,uVar19);
            puVar3 = *(uint **)(this_01 + 8);
            if (puVar3 < *(uint **)(this_01 + 0x10)) {
              *puVar3 = local_118;
              *(uint **)(this_01 + 8) = puVar3 + 1;
            }
            else {
              std::__ndk1::
              vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
              ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                        (this_01,(Offset *)&local_118);
            }
          }
          if (((byte)local_100[0] & 1) != 0) {
            operator_delete(local_f0);
          }
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
        }
      }
      else if (uVar19 == 4) {
        plVar2 = plVar12;
        if ((local_d0 & 1) != 0) {
          plVar2 = local_c0;
        }
        if ((int)*plVar2 == 0x657a6953 && !(bool)(bVar6 ^ 1)) {
          lVar17 = *(long *)(this_00 + 0x60);
          while (lVar17 != 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 8));
            sVar15 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_d0,pcVar14,sVar15);
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar17 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_e8,pcVar14);
            uVar19 = local_d0 >> 1 & 0x7f;
            if ((local_d0 & 1) != 0) {
              uVar19 = uStack_c8;
            }
            if (uVar19 == 1) {
              plVar2 = plVar12;
              if ((local_d0 & 1) != 0) {
                plVar2 = local_c0;
              }
              if ((char)*plVar2 == 'Y') {
                piVar1 = piVar18;
                if ((local_e8 & 1) != 0) {
                  piVar1 = local_d8;
                }
                dVar20 = atof((char *)piVar1);
                local_84 = (float)dVar20;
              }
              else if ((char)*plVar2 == 'X') {
                piVar1 = piVar18;
                if ((local_e8 & 1) != 0) {
                  piVar1 = local_d8;
                }
                dVar20 = atof((char *)piVar1);
                local_88 = (float)dVar20;
              }
            }
            lVar17 = *(long *)(lVar17 + 0x38);
            if ((local_e8 & 1) != 0) {
              operator_delete(local_d8);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_e8 = CONCAT44(local_84,local_88);
  uStack_c8 = CONCAT44(fStack_74,fStack_78);
  local_d0 = CONCAT44(fStack_7c,local_80);
  uVar19 = (ulong)((byte)local_a0[0] >> 1);
  pcVar13 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar19 = local_98;
    pcVar13 = local_90;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar19);
  uVar19 = (ulong)((byte)local_b8[0] >> 1);
  pcVar13 = (char *)((ulong)local_b8 | 1);
  if (((byte)local_b8[0] & 1) != 0) {
    uVar19 = local_b0;
    pcVar13 = local_a8;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar19);
  uVar10 = flatbuffers::CreateResourceData(param_2,uVar10,uVar11,iVar8);
  uVar7 = flatbuffers::CreateImageViewOptions(param_2,uVar7,uVar10,&local_d0,&local_e8,bVar6);
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

