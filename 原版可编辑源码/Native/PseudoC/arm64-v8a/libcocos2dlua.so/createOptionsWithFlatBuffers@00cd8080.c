
/* cocostudio::ParticleReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ParticleReader::createOptionsWithFlatBuffers
          (ParticleReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  XMLNode *this_00;
  char *pcVar10;
  size_t sVar11;
  char *pcVar12;
  long lVar13;
  int local_cc;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  uint local_b0;
  int iStack_ac;
  ulong local_a8;
  long *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)NodeReader::getInstance();
  uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  uVar6 = 1;
  local_cc = 0x303;
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    plVar9 = (long *)((ulong)&local_b0 | 1);
    pcVar12 = (char *)((ulong)local_c8 | 1);
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b0,pcVar10);
      uVar2 = (ulong)((byte)local_b0._0_1_ >> 1);
      if ((local_b0 & 1) != 0) {
        uVar2 = local_a8;
      }
      if (uVar2 == 9) {
        plVar1 = plVar9;
        if ((local_b0 & 1) != 0) {
          plVar1 = local_a0;
        }
        iVar5 = memcmp(plVar1,"BlendFunc",9);
        if (iVar5 == 0) {
          lVar13 = *(long *)(this_00 + 0x60);
          while (lVar13 != 0) {
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,pcVar10,sVar11);
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar10);
            uVar2 = (ulong)((byte)local_b0._0_1_ >> 1);
            if ((local_b0 & 1) != 0) {
              uVar2 = local_a8;
            }
            if (uVar2 == 3) {
              plVar1 = plVar9;
              if ((local_b0 & 1) != 0) {
                plVar1 = local_a0;
              }
              iVar5 = memcmp(plVar1,"Src",3);
              if (iVar5 == 0) {
                pcVar10 = pcVar12;
                if (((byte)local_c8[0] & 1) != 0) {
                  pcVar10 = local_b8;
                }
                uVar6 = atoi(pcVar10);
              }
              else {
                iVar5 = memcmp(plVar1,"Dst",3);
                if (iVar5 == 0) {
                  pcVar10 = pcVar12;
                  if (((byte)local_c8[0] & 1) != 0) {
                    pcVar10 = local_b8;
                  }
                  local_cc = atoi(pcVar10);
                }
              }
            }
            lVar13 = *(long *)(lVar13 + 0x38);
            if (((byte)local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
          }
        }
      }
      else if (uVar2 == 8) {
        plVar1 = plVar9;
        if ((local_b0 & 1) != 0) {
          plVar1 = local_a0;
        }
        if (*plVar1 == 0x61746144656c6946) {
          lVar13 = *(long *)(this_00 + 0x60);
          while (lVar13 != 0) {
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,pcVar10,sVar11);
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar10);
            uVar2 = (ulong)((byte)local_b0._0_1_ >> 1);
            if ((local_b0 & 1) != 0) {
              uVar2 = local_a8;
            }
            if (uVar2 == 5) {
              plVar1 = plVar9;
              if ((local_b0 & 1) != 0) {
                plVar1 = local_a0;
              }
              iVar5 = memcmp(plVar1,"Plist",5);
              if (iVar5 == 0) {
                uVar2 = (ulong)((byte)local_c8[0] >> 1);
                pcVar10 = pcVar12;
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar2 = local_c0;
                  pcVar10 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,pcVar10,uVar2);
              }
            }
            else if (uVar2 == 4) {
              plVar1 = plVar9;
              if ((local_b0 & 1) != 0) {
                plVar1 = local_a0;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar2 = (ulong)((byte)local_c8[0] >> 1);
                pcVar10 = pcVar12;
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar2 = local_c0;
                  pcVar10 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_80,pcVar10,uVar2);
              }
            }
            lVar13 = *(long *)(lVar13 + 0x38);
            if (((byte)local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  iStack_ac = local_cc;
  uVar2 = (ulong)((byte)local_80[0] >> 1);
  pcVar12 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar2 = local_78;
    pcVar12 = local_70;
  }
  local_b0 = uVar6;
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar2);
  uVar2 = (ulong)((byte)local_98[0] >> 1);
  pcVar12 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar2 = local_90;
    pcVar12 = local_88;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar2);
  uVar7 = flatbuffers::CreateResourceData(param_2,uVar7,uVar8,0);
  uVar4 = flatbuffers::CreateParticleSystemOptions(param_2,uVar4,uVar7,&local_b0);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

