
/* cocostudio::ComAudioReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ComAudioReader::createOptionsWithFlatBuffers
          (ComAudioReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  char *pcVar12;
  XMLNode *this_00;
  size_t sVar13;
  long lVar14;
  int *piVar15;
  double dVar16;
  float fVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [8];
  ulong local_e8;
  int *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  ulong local_d0;
  long *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  char *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  plVar11 = (long *)NodeReader::getInstance();
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,"");
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar14 == 0) {
    bVar5 = false;
    fVar17 = 0.0;
  }
  else {
    bVar5 = false;
    fVar17 = 0.0;
    piVar15 = (int *)((ulong)local_f0 | 1);
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_d8,pcVar12);
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_f0,pcVar12);
      uVar3 = (ulong)((byte)local_d8[0] >> 1);
      if (((byte)local_d8[0] & 1) != 0) {
        uVar3 = local_d0;
      }
      if (uVar3 == 6) {
        plVar11 = (long *)((ulong)local_d8 | 1);
        if (((byte)local_d8[0] & 1) != 0) {
          plVar11 = local_c8;
        }
        iVar7 = memcmp(plVar11,"Volume",6);
        if (iVar7 == 0) {
          piVar1 = piVar15;
          if (((byte)local_f0[0] & 1) != 0) {
            piVar1 = local_e0;
          }
          dVar16 = atof((char *)piVar1);
          fVar17 = (float)dVar16;
        }
      }
      else if (uVar3 == 4) {
        plVar11 = (long *)((ulong)local_d8 | 1);
        if (((byte)local_d8[0] & 1) != 0) {
          plVar11 = local_c8;
        }
        if ((int)*plVar11 == 0x706f6f4c) {
          uVar3 = (ulong)((byte)local_f0[0] >> 1);
          if (((byte)local_f0[0] & 1) != 0) {
            uVar3 = local_e8;
          }
          if (uVar3 == 4) {
            piVar1 = piVar15;
            if (((byte)local_f0[0] & 1) != 0) {
              piVar1 = local_e0;
            }
            bVar5 = *piVar1 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
        else if ((int)*plVar11 == 0x656d614e) {
          uVar3 = (ulong)((byte)local_f0[0] >> 1);
          piVar1 = piVar15;
          if (((byte)local_f0[0] & 1) != 0) {
            uVar3 = local_e8;
            piVar1 = local_e0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_90,(char *)piVar1,uVar3);
        }
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((byte)local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      if (((byte)local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
    } while (lVar14 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    plVar11 = (long *)((ulong)local_d8 | 1);
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_d8,pcVar12);
      uVar3 = (ulong)((byte)local_d8[0] >> 1);
      if (((byte)local_d8[0] & 1) != 0) {
        uVar3 = local_d0;
      }
      if (uVar3 == 8) {
        plVar2 = plVar11;
        if (((byte)local_d8[0] & 1) != 0) {
          plVar2 = local_c8;
        }
        if (*plVar2 == 0x61746144656c6946) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar13 = strlen(pcVar12);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_d8,pcVar12,sVar13);
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_f0,pcVar12);
            uVar3 = (ulong)((byte)local_d8[0] >> 1);
            if (((byte)local_d8[0] & 1) != 0) {
              uVar3 = local_d0;
            }
            if (uVar3 == 5) {
              plVar2 = plVar11;
              if (((byte)local_d8[0] & 1) != 0) {
                plVar2 = local_c8;
              }
              iVar7 = memcmp(plVar2,"Plist",5);
              if (iVar7 == 0) {
                uVar3 = (ulong)((byte)local_f0[0] >> 1);
                piVar15 = (int *)((ulong)local_f0 | 1);
                if (((byte)local_f0[0] & 1) != 0) {
                  uVar3 = local_e8;
                  piVar15 = local_e0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_c0,(char *)piVar15,uVar3);
              }
            }
            else if (uVar3 == 4) {
              plVar2 = plVar11;
              if (((byte)local_d8[0] & 1) != 0) {
                plVar2 = local_c8;
              }
              if ((int)*plVar2 == 0x68746150) {
                uVar3 = (ulong)((byte)local_f0[0] >> 1);
                piVar15 = (int *)((ulong)local_f0 | 1);
                if (((byte)local_f0[0] & 1) != 0) {
                  uVar3 = local_e8;
                  piVar15 = local_e0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_a8,(char *)piVar15,uVar3);
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            if (((byte)local_f0[0] & 1) != 0) {
              operator_delete(local_e0);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar3 = (ulong)((byte)local_90[0] >> 1);
  pcVar12 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar3 = local_88;
    pcVar12 = local_80;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar3);
  uVar3 = (ulong)((byte)local_a8[0] >> 1);
  pcVar12 = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar3 = local_a0;
    pcVar12 = local_98;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar3);
  uVar3 = (ulong)((byte)local_c0[0] >> 1);
  pcVar12 = (char *)((ulong)local_c0 | 1);
  if (((byte)local_c0[0] & 1) != 0) {
    uVar3 = local_b8;
    pcVar12 = local_b0;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar3);
  uVar9 = flatbuffers::CreateResourceData(param_2,uVar9,uVar10,0);
  uVar6 = flatbuffers::CreateComAudioOptions(param_2,uVar6,uVar8,0,bVar5,(int)fVar17,uVar9);
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

