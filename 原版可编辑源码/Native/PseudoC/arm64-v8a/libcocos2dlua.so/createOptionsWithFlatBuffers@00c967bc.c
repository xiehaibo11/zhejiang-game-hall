
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextAtlasReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::TextAtlasReader::createOptionsWithFlatBuffers
          (TextAtlasReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  XMLNode *this_00;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  int *piVar14;
  undefined8 local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [8];
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [8];
  ulong local_e0;
  int *local_d8;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)WidgetReader::getInstance();
  uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"0123456789");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,"");
  lVar12 = *(long *)(param_1 + 0x60);
  if (lVar12 == 0) {
    local_138 = 0;
  }
  else {
    pcVar13 = (char *)((ulong)local_100 | 1);
    local_138 = 0;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_e8,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_100,pcVar10);
      uVar2 = (ulong)((byte)local_e8[0] >> 1);
      if (((byte)local_e8[0] & 1) != 0) {
        uVar2 = local_e0;
      }
      if (uVar2 == 10) {
        piVar14 = (int *)((ulong)local_e8 | 1);
        if (((byte)local_e8[0] & 1) != 0) {
          piVar14 = local_d8;
        }
        iVar5 = memcmp(piVar14,"CharHeight",10);
        if (iVar5 == 0) {
          pcVar10 = pcVar13;
          if (((byte)local_100[0] & 1) != 0) {
            pcVar10 = local_f0;
          }
          iVar5 = atoi(pcVar10);
          local_138 = CONCAT44(iVar5,(undefined4)local_138);
        }
      }
      else if (uVar2 == 9) {
        piVar14 = (int *)((ulong)local_e8 | 1);
        if (((byte)local_e8[0] & 1) != 0) {
          piVar14 = local_d8;
        }
        iVar5 = memcmp(piVar14,"LabelText",9);
        if (iVar5 == 0) {
          uVar2 = (ulong)((byte)local_100[0] >> 1);
          pcVar10 = pcVar13;
          if (((byte)local_100[0] & 1) != 0) {
            uVar2 = local_f8;
            pcVar10 = local_f0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_b8,pcVar10,uVar2);
        }
        else {
          iVar5 = memcmp(piVar14,"CharWidth",9);
          if (iVar5 == 0) {
            pcVar10 = pcVar13;
            if (((byte)local_100[0] & 1) != 0) {
              pcVar10 = local_f0;
            }
            iVar5 = atoi(pcVar10);
            local_138 = CONCAT44(local_138._4_4_,iVar5);
          }
          else {
            iVar5 = memcmp(piVar14,"StartChar",9);
            if (iVar5 == 0) {
              uVar2 = (ulong)((byte)local_100[0] >> 1);
              pcVar10 = pcVar13;
              if (((byte)local_100[0] & 1) != 0) {
                uVar2 = local_f8;
                pcVar10 = local_f0;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_d0,pcVar10,uVar2);
            }
          }
        }
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (((byte)local_100[0] & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((byte)local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
    } while (lVar12 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    piVar14 = (int *)((ulong)local_e8 | 1);
    pcVar13 = (char *)((ulong)local_130 | 1);
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_e8,pcVar10);
      uVar2 = (ulong)((byte)local_e8[0] >> 1);
      if (((byte)local_e8[0] & 1) != 0) {
        uVar2 = local_e0;
      }
      if (uVar2 == 0x17) {
        piVar1 = piVar14;
        if (((byte)local_e8[0] & 1) != 0) {
          piVar1 = local_d8;
        }
        iVar5 = memcmp(piVar1,"LabelAtlasFileImage_CNB",0x17);
        if (iVar5 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_100,"");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_118,"");
          lVar12 = *(long *)(this_00 + 0x60);
          while (lVar12 != 0) {
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_e8,pcVar10,sVar11);
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_130,pcVar10);
            uVar2 = (ulong)((byte)local_e8[0] >> 1);
            if (((byte)local_e8[0] & 1) != 0) {
              uVar2 = local_e0;
            }
            if (uVar2 == 5) {
              piVar1 = piVar14;
              if (((byte)local_e8[0] & 1) != 0) {
                piVar1 = local_d8;
              }
              iVar5 = memcmp(piVar1,"Plist",5);
              if (iVar5 == 0) {
                uVar2 = (ulong)((byte)local_130[0] >> 1);
                pcVar10 = pcVar13;
                if (((byte)local_130[0] & 1) != 0) {
                  uVar2 = local_128;
                  pcVar10 = local_120;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a0,pcVar10,uVar2);
                uVar2 = (ulong)((byte)local_130[0] >> 1);
                pcVar10 = pcVar13;
                if (((byte)local_130[0] & 1) != 0) {
                  uVar2 = local_128;
                  pcVar10 = local_120;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_100,pcVar10,uVar2);
              }
            }
            else if (uVar2 == 4) {
              piVar1 = piVar14;
              if (((byte)local_e8[0] & 1) != 0) {
                piVar1 = local_d8;
              }
              if (*piVar1 == 0x68746150) {
                uVar2 = (ulong)((byte)local_130[0] >> 1);
                pcVar10 = pcVar13;
                if (((byte)local_130[0] & 1) != 0) {
                  uVar2 = local_128;
                  pcVar10 = local_120;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_88,pcVar10,uVar2);
              }
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (((byte)local_130[0] & 1) != 0) {
              operator_delete(local_120);
            }
          }
          if (((byte)local_118[0] & 1) != 0) {
            operator_delete(local_108);
          }
          if (((byte)local_100[0] & 1) != 0) {
            operator_delete(local_f0);
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar2 = (ulong)((byte)local_88[0] >> 1);
  pcVar13 = (char *)((ulong)local_88 | 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar2 = local_80;
    pcVar13 = local_78;
  }
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar2);
  uVar2 = (ulong)((byte)local_a0[0] >> 1);
  pcVar13 = (char *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    uVar2 = local_98;
    pcVar13 = local_90;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar2);
  uVar6 = flatbuffers::CreateResourceData(param_2,uVar6,uVar7,0);
  uVar2 = (ulong)((byte)local_b8[0] >> 1);
  pcVar13 = (char *)((ulong)local_b8 | 1);
  if (((byte)local_b8[0] & 1) != 0) {
    uVar2 = local_b0;
    pcVar13 = local_a8;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar2);
  uVar2 = (ulong)((byte)local_d0[0] >> 1);
  pcVar13 = (char *)((ulong)local_d0 | 1);
  if (((byte)local_d0[0] & 1) != 0) {
    uVar2 = local_c8;
    pcVar13 = local_c0;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar13,uVar2);
  uVar4 = flatbuffers::CreateTextAtlasOptions
                    (param_2,uVar4,uVar6,uVar7,uVar8,local_138 & 0xffffffff,local_138._4_4_);
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
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

