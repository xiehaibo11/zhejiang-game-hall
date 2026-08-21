
/* ArmatureNodeReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
ArmatureNodeReader::createOptionsWithFlatBuffers
          (ArmatureNodeReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  char *pcVar12;
  XMLNode *this_00;
  size_t sVar13;
  int *piVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  int *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  long *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar11 = (long *)cocostudio::NodeReader::getInstance();
  uVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  lVar15 = *(long *)(param_1 + 0x60);
  if (lVar15 == 0) {
    bVar6 = false;
    bVar5 = false;
  }
  else {
    bVar5 = false;
    plVar11 = (long *)((ulong)local_b0 | 1);
    piVar14 = (int *)((ulong)local_c8 | 1);
    bVar6 = false;
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar12);
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8,pcVar12);
      uVar3 = (ulong)((byte)local_b0[0] >> 1);
      if (((byte)local_b0[0] & 1) != 0) {
        uVar3 = local_a8;
      }
      if (uVar3 == 0x14) {
        plVar1 = plVar11;
        if (((byte)local_b0[0] & 1) != 0) {
          plVar1 = local_a0;
        }
        iVar8 = memcmp(plVar1,"CurrentAnimationName",0x14);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_c8[0] >> 1);
          piVar2 = piVar14;
          if (((byte)local_c8[0] & 1) != 0) {
            uVar3 = local_c0;
            piVar2 = local_b8;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_80,(char *)piVar2,uVar3);
        }
      }
      else if (uVar3 == 10) {
        plVar1 = plVar11;
        if (((byte)local_b0[0] & 1) != 0) {
          plVar1 = local_a0;
        }
        iVar8 = memcmp(plVar1,"IsAutoPlay",10);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_c8[0] >> 1);
          if (((byte)local_c8[0] & 1) != 0) {
            uVar3 = local_c0;
          }
          if (uVar3 == 4) {
            piVar2 = piVar14;
            if (((byte)local_c8[0] & 1) != 0) {
              piVar2 = local_b8;
            }
            bVar6 = *piVar2 == 0x65757254;
          }
          else {
            bVar6 = false;
          }
        }
      }
      else if (uVar3 == 6) {
        plVar1 = plVar11;
        if (((byte)local_b0[0] & 1) != 0) {
          plVar1 = local_a0;
        }
        iVar8 = memcmp(plVar1,"IsLoop",6);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_c8[0] >> 1);
          if (((byte)local_c8[0] & 1) != 0) {
            uVar3 = local_c0;
          }
          if (uVar3 == 4) {
            piVar2 = piVar14;
            if (((byte)local_c8[0] & 1) != 0) {
              piVar2 = local_b8;
            }
            bVar5 = *piVar2 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
      }
      lVar15 = *(long *)(lVar15 + 0x38);
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
    } while (lVar15 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar12);
      uVar3 = (ulong)((byte)local_b0[0] >> 1);
      if (((byte)local_b0[0] & 1) != 0) {
        uVar3 = local_a8;
      }
      if (uVar3 == 8) {
        plVar11 = (long *)((ulong)local_b0 | 1);
        if (((byte)local_b0[0] & 1) != 0) {
          plVar11 = local_a0;
        }
        if (*plVar11 == 0x61746144656c6946) {
          lVar15 = *(long *)(this_00 + 0x60);
          while (lVar15 != 0) {
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 8));
            sVar13 = strlen(pcVar12);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_b0,pcVar12,sVar13);
            pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar15 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar12);
            uVar3 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar3 = local_a8;
            }
            if (uVar3 == 4) {
              plVar11 = (long *)((ulong)local_b0 | 1);
              if (((byte)local_b0[0] & 1) != 0) {
                plVar11 = local_a0;
              }
              if (((int)*plVar11 != 0x65707954) && ((int)*plVar11 == 0x68746150)) {
                uVar3 = (ulong)((byte)local_c8[0] >> 1);
                piVar14 = (int *)((ulong)local_c8 | 1);
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar3 = local_c0;
                  piVar14 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,(char *)piVar14,uVar3);
              }
            }
            lVar15 = *(long *)(lVar15 + 0x38);
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
  uVar3 = (ulong)((byte)local_98[0] >> 1);
  pcVar12 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar3 = local_90;
    pcVar12 = local_88;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar3);
  uVar9 = flatbuffers::CreateResourceItemData(param_2,0,uVar9);
  uVar3 = (ulong)((byte)local_80[0] >> 1);
  pcVar12 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar3 = local_78;
    pcVar12 = local_70;
  }
  uVar10 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar12,uVar3);
  uVar7 = flatbuffers::CreateCSArmatureNodeOption(param_2,uVar7,uVar9,bVar5,bVar6,uVar10);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

