
/* cocostudio::FlatBuffersSerialize::createProjectNodeOptionsForSimulator(tinyxml2::XMLElement
   const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createProjectNodeOptionsForSimulator
          (FlatBuffersSerialize *this,XMLElement *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  XMLNode *this_00;
  char *pcVar7;
  size_t sVar8;
  FlatBufferBuilder *this_01;
  bool bVar9;
  long lVar10;
  double dVar11;
  float fVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  char *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  long *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)NodeReader::getInstance();
  uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,param_1,*(undefined8 *)(this + 0x38));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  lVar10 = *(long *)(param_1 + 0x60);
  fVar12 = 1.0;
  do {
    if (lVar10 == 0) break;
    pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a8,pcVar7);
    pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 0x20));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_c0,pcVar7);
    uVar1 = (ulong)((byte)local_a8[0] >> 1);
    if (((byte)local_a8[0] & 1) != 0) {
      uVar1 = local_a0;
    }
    if (uVar1 == 0x10) {
      plVar6 = (long *)((ulong)local_a8 | 1);
      if (((byte)local_a8[0] & 1) != 0) {
        plVar6 = local_98;
      }
      iVar4 = memcmp(plVar6,"InnerActionSpeed",0x10);
      if (iVar4 != 0) goto LAB_00cc5c4c;
      pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 0x20));
      dVar11 = atof(pcVar7);
      bVar9 = false;
      fVar12 = (float)dVar11;
    }
    else {
LAB_00cc5c4c:
      lVar10 = *(long *)(lVar10 + 0x38);
      bVar9 = true;
    }
    if (((byte)local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
  } while (bVar9);
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    do {
      pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar7);
      uVar1 = (ulong)((byte)local_a8[0] >> 1);
      if (((byte)local_a8[0] & 1) != 0) {
        uVar1 = local_a0;
      }
      if (uVar1 == 8) {
        plVar6 = (long *)((ulong)local_a8 | 1);
        if (((byte)local_a8[0] & 1) != 0) {
          plVar6 = local_98;
        }
        if (*plVar6 == 0x61746144656c6946) {
          lVar10 = *(long *)(this_00 + 0x60);
          while (lVar10 != 0) {
            pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 8));
            sVar8 = strlen(pcVar7);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_a8,pcVar7,sVar8);
            pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c0,pcVar7);
            uVar1 = (ulong)((byte)local_a8[0] >> 1);
            if (((byte)local_a8[0] & 1) != 0) {
              uVar1 = local_a0;
            }
            if (uVar1 == 4) {
              plVar6 = (long *)((ulong)local_a8 | 1);
              if (((byte)local_a8[0] & 1) != 0) {
                plVar6 = local_98;
              }
              if ((int)*plVar6 == 0x68746150) {
                uVar1 = (ulong)((byte)local_c0[0] >> 1);
                pcVar7 = (char *)((ulong)local_c0 | 1);
                if (((byte)local_c0[0] & 1) != 0) {
                  uVar1 = local_b8;
                  pcVar7 = local_b0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_90,pcVar7,uVar1);
              }
            }
            lVar10 = *(long *)(lVar10 + 0x38);
            if (((byte)local_c0[0] & 1) != 0) {
              operator_delete(local_b0);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  this_01 = *(FlatBufferBuilder **)(this + 0x38);
  uVar1 = (ulong)((byte)local_90[0] >> 1);
  pcVar7 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar1 = local_88;
    pcVar7 = local_80;
  }
  uVar5 = flatbuffers::FlatBufferBuilder::CreateString(this_01,pcVar7,uVar1);
  uVar3 = flatbuffers::CreateProjectNodeOptions(fVar12,this_01,uVar3,uVar5);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

