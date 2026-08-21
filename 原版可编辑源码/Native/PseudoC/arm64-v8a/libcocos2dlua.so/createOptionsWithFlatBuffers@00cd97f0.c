
/* cocostudio::ProjectNodeReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::ProjectNodeReader::createOptionsWithFlatBuffers
          (ProjectNodeReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  XMLNode *this_00;
  char *pcVar8;
  size_t sVar9;
  void *__dest;
  basic_string *pbVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  double dVar14;
  float fVar15;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  void *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  long *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)NodeReader::getInstance();
  uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  lVar12 = *(long *)(param_1 + 0x60);
  fVar15 = 1.0;
  do {
    if (lVar12 == 0) break;
    pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,pcVar8);
    pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_c8,pcVar8);
    uVar1 = (ulong)((byte)local_b0[0] >> 1);
    if (((byte)local_b0[0] & 1) != 0) {
      uVar1 = local_a8;
    }
    if (uVar1 == 0x10) {
      plVar7 = (long *)((ulong)local_b0 | 1);
      if (((byte)local_b0[0] & 1) != 0) {
        plVar7 = local_a0;
      }
      iVar5 = memcmp(plVar7,"InnerActionSpeed",0x10);
      if (iVar5 != 0) goto LAB_00cd98e0;
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
      dVar14 = atof(pcVar8);
      bVar13 = false;
      fVar15 = (float)dVar14;
    }
    else {
LAB_00cd98e0:
      lVar12 = *(long *)(lVar12 + 0x38);
      bVar13 = true;
    }
    if (((byte)local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
  } while (bVar13);
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    do {
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar8);
      uVar1 = (ulong)((byte)local_b0[0] >> 1);
      if (((byte)local_b0[0] & 1) != 0) {
        uVar1 = local_a8;
      }
      if (uVar1 == 8) {
        plVar7 = (long *)((ulong)local_b0 | 1);
        if (((byte)local_b0[0] & 1) != 0) {
          plVar7 = local_a0;
        }
        if (*plVar7 == 0x61746144656c6946) {
          lVar12 = *(long *)(this_00 + 0x60);
          while (lVar12 != 0) {
            pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
            sVar9 = strlen(pcVar8);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_b0,pcVar8,sVar9);
            pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar8);
            uVar1 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar1 = local_a8;
            }
            if (uVar1 == 4) {
              plVar7 = (long *)((ulong)local_b0 | 1);
              if (((byte)local_b0[0] & 1) != 0) {
                plVar7 = local_a0;
              }
              if ((int)*plVar7 == 0x68746150) {
                __src = (void *)((ulong)local_c8 | 1);
                uVar1 = (ulong)((byte)local_c8[0] >> 1);
                if (((byte)local_c8[0] & 1) != 0) {
                  __src = local_b8;
                  uVar1 = local_c0;
                }
                uVar11 = uVar1;
                if (uVar1 == 0) {
LAB_00cd9a90:
                  uVar11 = 0xffffffffffffffff;
                }
                else {
                  do {
                    if (uVar11 == 0) goto LAB_00cd9a90;
                    lVar3 = uVar11 - 1;
                    uVar11 = uVar11 - 1;
                  } while (*(char *)((long)__src + lVar3) != '.');
                }
                if (uVar11 <= uVar1) {
                  uVar1 = uVar11;
                }
                local_f0 = 0;
                local_e8 = (void *)0x0;
                local_f8 = 0;
                if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar1 < 0x17) {
                  local_f8 = (ulong)(byte)((int)uVar1 << 1);
                  __dest = (void *)((ulong)&local_f8 | 1);
                  if (uVar1 != 0) goto LAB_00cd9b08;
                }
                else {
                  uVar11 = uVar1 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar11);
                  local_f8 = uVar11 | 1;
                  local_f0 = uVar1;
                  local_e8 = __dest;
LAB_00cd9b08:
                  memcpy(__dest,__src,uVar1);
                }
                *(undefined1 *)((long)__dest + uVar1) = 0;
                pbVar10 = (basic_string *)
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_f8,".csb",4);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(local_e0,pbVar10);
                if ((local_f8 & 1) != 0) {
                  operator_delete(local_e8);
                }
                uVar1 = (ulong)((byte)local_e0[0] >> 1);
                pcVar8 = (char *)((ulong)local_e0 | 1);
                if (((byte)local_e0[0] & 1) != 0) {
                  uVar1 = local_d8;
                  pcVar8 = local_d0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,pcVar8,uVar1);
                if (((byte)local_e0[0] & 1) != 0) {
                  operator_delete(local_d0);
                }
              }
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (((byte)local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  uVar1 = (ulong)((byte)local_98[0] >> 1);
  pcVar8 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar1 = local_90;
    pcVar8 = local_88;
  }
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar8,uVar1);
  uVar4 = flatbuffers::CreateProjectNodeOptions(fVar15,param_2,uVar4,uVar6);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

