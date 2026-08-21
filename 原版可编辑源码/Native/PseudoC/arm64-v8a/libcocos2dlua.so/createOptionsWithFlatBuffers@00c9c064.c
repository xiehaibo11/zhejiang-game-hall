
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextFieldReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::TextFieldReader::createOptionsWithFlatBuffers
          (TextFieldReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  char *pcVar13;
  XMLNode *this_00;
  size_t sVar14;
  long lVar15;
  int *piVar16;
  undefined8 local_148;
  undefined8 local_140;
  int local_138;
  int local_134;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [8];
  ulong local_128;
  int *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
  ulong local_110;
  long *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [8];
  ulong local_e0;
  char *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [8];
  ulong local_c8;
  char *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  char *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar12 = (long *)WidgetReader::getInstance();
  uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"Text Field");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_100,"*");
  lVar15 = *(long *)(param_1 + 0x60);
  if (lVar15 == 0) {
    local_134 = 0x14;
    local_148 = 0;
    local_140 = 0;
    local_138 = 10;
  }
  else {
    local_138 = 10;
    plVar12 = (long *)((ulong)local_118 | 1);
    piVar16 = (int *)((ulong)local_130 | 1);
    local_148 = 0;
    local_140 = 0;
    local_134 = 0x14;
    do {
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_118,pcVar13);
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_130,pcVar13);
      uVar3 = (ulong)((byte)local_118[0] >> 1);
      if (((byte)local_118[0] & 1) != 0) {
        uVar3 = local_110;
      }
      switch(uVar3) {
      case 8:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        if (*plVar2 == 0x657a6953746e6f46) {
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            piVar1 = local_120;
          }
          local_134 = atoi((char *)piVar1);
        }
        else if (*plVar2 == 0x656d614e746e6f46) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
            piVar1 = local_120;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_b8,(char *)piVar1,uVar3);
        }
        break;
      case 9:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"LabelText",9);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
            piVar1 = local_120;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_d0,(char *)piVar1,uVar3);
        }
        break;
      case 0xb:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"IsLocalized",0xb);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
          }
          if (uVar3 == 4) {
            piVar1 = piVar16;
            if (((byte)local_130[0] & 1) != 0) {
              piVar1 = local_120;
            }
            local_148 = (ulong)CONCAT14(*piVar1 == 0x65757254,(undefined4)local_148);
          }
          else {
            local_148 = local_148 & 0xffffffff;
          }
        }
        break;
      case 0xc:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"IsCustomSize",0xc);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
          }
          if (uVar3 == 4) {
            piVar1 = piVar16;
            if (((byte)local_130[0] & 1) != 0) {
              piVar1 = local_120;
            }
            local_140 = CONCAT44(local_140._4_4_,(uint)(*piVar1 == 0x65757254));
          }
          else {
            local_140 = (ulong)local_140._4_4_ << 0x20;
          }
        }
        break;
      case 0xd:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"MaxLengthText",0xd);
        if (iVar6 == 0) {
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            piVar1 = local_120;
          }
          local_138 = atoi((char *)piVar1);
        }
        break;
      case 0xe:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"PasswordEnable",0xe);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
          }
          if (uVar3 == 4) {
            piVar1 = piVar16;
            if (((byte)local_130[0] & 1) != 0) {
              piVar1 = local_120;
            }
            local_140 = (ulong)CONCAT14(*piVar1 == 0x65757254,(undefined4)local_140);
          }
          else {
            local_140 = local_140 & 0xffffffff;
          }
        }
        break;
      case 0xf:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"PlaceHolderText",0xf);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
            piVar1 = local_120;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_e8,(char *)piVar1,uVar3);
        }
        else {
          iVar6 = memcmp(plVar2,"MaxLengthEnable",0xf);
          if (iVar6 == 0) {
            uVar3 = (ulong)((byte)local_130[0] >> 1);
            if (((byte)local_130[0] & 1) != 0) {
              uVar3 = local_128;
            }
            if (uVar3 == 4) {
              piVar1 = piVar16;
              if (((byte)local_130[0] & 1) != 0) {
                piVar1 = local_120;
              }
              local_148 = CONCAT44(local_148._4_4_,(uint)(*piVar1 == 0x65757254));
            }
            else {
              local_148 = (ulong)local_148._4_4_ << 0x20;
            }
          }
        }
        break;
      case 0x11:
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"PasswordStyleText",0x11);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_130[0] >> 1);
          piVar1 = piVar16;
          if (((byte)local_130[0] & 1) != 0) {
            uVar3 = local_128;
            piVar1 = local_120;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_100,(char *)piVar1,uVar3);
        }
      }
      lVar15 = *(long *)(lVar15 + 0x38);
      if (((byte)local_130[0] & 1) != 0) {
        operator_delete(local_120);
      }
      if (((byte)local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
    } while (lVar15 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    plVar12 = (long *)((ulong)local_118 | 1);
    do {
      pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_118,pcVar13);
      uVar3 = (ulong)((byte)local_118[0] >> 1);
      if (((byte)local_118[0] & 1) != 0) {
        uVar3 = local_110;
      }
      if (uVar3 == 0xc) {
        plVar2 = plVar12;
        if (((byte)local_118[0] & 1) != 0) {
          plVar2 = local_108;
        }
        iVar6 = memcmp(plVar2,"FontResource",0xc);
        if (iVar6 == 0) {
          lVar15 = *(long *)(this_00 + 0x60);
          while (lVar15 != 0) {
            pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
            sVar14 = strlen(pcVar13);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_118,pcVar13,sVar14);
            pcVar13 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_130,pcVar13);
            uVar3 = (ulong)((byte)local_118[0] >> 1);
            if (((byte)local_118[0] & 1) != 0) {
              uVar3 = local_110;
            }
            if (uVar3 == 5) {
              plVar2 = plVar12;
              if (((byte)local_118[0] & 1) != 0) {
                plVar2 = local_108;
              }
              iVar6 = memcmp(plVar2,"Plist",5);
              if (iVar6 == 0) {
                uVar3 = (ulong)((byte)local_130[0] >> 1);
                piVar16 = (int *)((ulong)local_130 | 1);
                if (((byte)local_130[0] & 1) != 0) {
                  uVar3 = local_128;
                  piVar16 = local_120;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a0,(char *)piVar16,uVar3);
              }
            }
            else if (uVar3 == 4) {
              plVar2 = plVar12;
              if (((byte)local_118[0] & 1) != 0) {
                plVar2 = local_108;
              }
              if ((int)*plVar2 == 0x68746150) {
                uVar3 = (ulong)((byte)local_130[0] >> 1);
                piVar16 = (int *)((ulong)local_130 | 1);
                if (((byte)local_130[0] & 1) != 0) {
                  uVar3 = local_128;
                  piVar16 = local_120;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_88,(char *)piVar16,uVar3);
              }
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (((byte)local_130[0] & 1) != 0) {
              operator_delete(local_120);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar3 = (ulong)((byte)local_88[0] >> 1);
  pcVar13 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar3 = local_80;
    pcVar13 = local_78;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar3 = (ulong)((byte)local_a0[0] >> 1);
  pcVar13 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar3 = local_98;
    pcVar13 = local_90;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar7 = flatbuffers::CreateResourceData(param_2,uVar7,uVar8,0);
  uVar3 = (ulong)((byte)local_b8[0] >> 1);
  pcVar13 = (char *)((ulong)local_b8 | 1);
  if (((byte)local_b8[0] & 1) != 0) {
    uVar3 = local_b0;
    pcVar13 = local_a8;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar3 = (ulong)((byte)local_d0[0] >> 1);
  pcVar13 = (char *)((ulong)local_d0 | 1);
  if (((byte)local_d0[0] & 1) != 0) {
    uVar3 = local_c8;
    pcVar13 = local_c0;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar3 = (ulong)((byte)local_e8[0] >> 1);
  pcVar13 = (char *)((ulong)local_e8 | 1);
  if (((byte)local_e8[0] & 1) != 0) {
    uVar3 = local_e0;
    pcVar13 = local_d8;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar3 = (ulong)((byte)local_100[0] >> 1);
  pcVar13 = (char *)((ulong)local_100 | 1);
  if (((byte)local_100[0] & 1) != 0) {
    uVar3 = local_f8;
    pcVar13 = local_f0;
  }
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar3);
  uVar5 = flatbuffers::CreateTextFieldOptions
                    (param_2,uVar5,uVar7,uVar8,local_134,uVar9,uVar10,local_140._4_4_,uVar11,
                     (char)local_148,local_138,0,0,(char)local_140,(char)(local_148 >> 0x20));
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

