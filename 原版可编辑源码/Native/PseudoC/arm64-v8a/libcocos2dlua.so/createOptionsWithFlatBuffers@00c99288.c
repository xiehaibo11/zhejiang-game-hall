
/* cocostudio::TextBMFontReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::TextBMFontReader::createOptionsWithFlatBuffers
          (TextBMFontReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  char *pcVar10;
  XMLNode *this_00;
  size_t sVar11;
  long lVar12;
  int *piVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  ulong local_d8;
  int *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  int *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)WidgetReader::getInstance();
  uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"Fnt Text Label");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"");
  lVar12 = *(long *)(param_1 + 0x60);
  if (lVar12 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_e0,pcVar10);
      uVar2 = (ulong)((byte)local_c8[0] >> 1);
      if (((byte)local_c8[0] & 1) != 0) {
        uVar2 = local_c0;
      }
      if (uVar2 == 0xb) {
        piVar13 = (int *)((ulong)local_c8 | 1);
        if (((byte)local_c8[0] & 1) != 0) {
          piVar13 = local_b8;
        }
        iVar6 = memcmp(piVar13,"IsLocalized",0xb);
        if (iVar6 == 0) {
          uVar2 = (ulong)((byte)local_e0[0] >> 1);
          if (((byte)local_e0[0] & 1) != 0) {
            uVar2 = local_d8;
          }
          if (uVar2 == 4) {
            piVar13 = (int *)((ulong)local_e0 | 1);
            if (((byte)local_e0[0] & 1) != 0) {
              piVar13 = local_d0;
            }
            bVar4 = *piVar13 == 0x65757254;
          }
          else {
            bVar4 = false;
          }
        }
      }
      else if (uVar2 == 9) {
        piVar13 = (int *)((ulong)local_c8 | 1);
        if (((byte)local_c8[0] & 1) != 0) {
          piVar13 = local_b8;
        }
        iVar6 = memcmp(piVar13,"LabelText",9);
        if (iVar6 == 0) {
          uVar2 = (ulong)((byte)local_e0[0] >> 1);
          piVar13 = (int *)((ulong)local_e0 | 1);
          if (((byte)local_e0[0] & 1) != 0) {
            uVar2 = local_d8;
            piVar13 = local_d0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_80,(char *)piVar13,uVar2);
        }
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (((byte)local_e0[0] & 1) != 0) {
        operator_delete(local_d0);
      }
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
    } while (lVar12 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    piVar13 = (int *)((ulong)local_c8 | 1);
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar10);
      uVar2 = (ulong)((byte)local_c8[0] >> 1);
      if (((byte)local_c8[0] & 1) != 0) {
        uVar2 = local_c0;
      }
      if (uVar2 == 0x13) {
        piVar1 = piVar13;
        if (((byte)local_c8[0] & 1) != 0) {
          piVar1 = local_b8;
        }
        iVar6 = memcmp(piVar1,"LabelBMFontFile_CNB",0x13);
        if (iVar6 == 0) {
          lVar12 = *(long *)(this_00 + 0x60);
          while (lVar12 != 0) {
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_c8,pcVar10,sVar11);
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_e0,pcVar10);
            uVar2 = (ulong)((byte)local_c8[0] >> 1);
            if (((byte)local_c8[0] & 1) != 0) {
              uVar2 = local_c0;
            }
            if (uVar2 == 5) {
              piVar1 = piVar13;
              if (((byte)local_c8[0] & 1) != 0) {
                piVar1 = local_b8;
              }
              iVar6 = memcmp(piVar1,"Plist",5);
              if (iVar6 == 0) {
                uVar2 = (ulong)((byte)local_e0[0] >> 1);
                piVar1 = (int *)((ulong)local_e0 | 1);
                if (((byte)local_e0[0] & 1) != 0) {
                  uVar2 = local_d8;
                  piVar1 = local_d0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_b0,(char *)piVar1,uVar2);
              }
            }
            else if (uVar2 == 4) {
              piVar1 = piVar13;
              if (((byte)local_c8[0] & 1) != 0) {
                piVar1 = local_b8;
              }
              if (*piVar1 == 0x68746150) {
                uVar2 = (ulong)((byte)local_e0[0] >> 1);
                piVar1 = (int *)((ulong)local_e0 | 1);
                if (((byte)local_e0[0] & 1) != 0) {
                  uVar2 = local_d8;
                  piVar1 = local_d0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,(char *)piVar1,uVar2);
              }
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (((byte)local_e0[0] & 1) != 0) {
              operator_delete(local_d0);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar2 = (ulong)((byte)local_98[0] >> 1);
  pcVar10 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar2 = local_90;
    pcVar10 = local_88;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar10,uVar2);
  uVar2 = (ulong)((byte)local_b0[0] >> 1);
  pcVar10 = (char *)((ulong)local_b0 | 1);
  if (((byte)local_b0[0] & 1) != 0) {
    uVar2 = local_a8;
    pcVar10 = local_a0;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar10,uVar2);
  uVar7 = flatbuffers::CreateResourceData(param_2,uVar7,uVar8,0);
  uVar2 = (ulong)((byte)local_80[0] >> 1);
  pcVar10 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar2 = local_78;
    pcVar10 = local_70;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar10,uVar2);
  uVar5 = flatbuffers::CreateTextBMFontOptions(param_2,uVar5,uVar7,uVar8,bVar4);
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

