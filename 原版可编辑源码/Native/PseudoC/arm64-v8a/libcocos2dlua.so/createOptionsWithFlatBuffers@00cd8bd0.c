
/* cocostudio::GameMapReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::GameMapReader::createOptionsWithFlatBuffers
          (GameMapReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  XMLNode *this_00;
  char *pcVar9;
  size_t sVar10;
  long lVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)NodeReader::getInstance();
  uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,param_1,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    plVar8 = (long *)((ulong)local_b0 | 1);
    do {
      pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar9);
      uVar2 = (ulong)((byte)local_b0[0] >> 1);
      if (((byte)local_b0[0] & 1) != 0) {
        uVar2 = local_a8;
      }
      if (uVar2 == 8) {
        plVar1 = plVar8;
        if (((byte)local_b0[0] & 1) != 0) {
          plVar1 = local_a0;
        }
        if (*plVar1 == 0x61746144656c6946) {
          lVar11 = *(long *)(this_00 + 0x60);
          while (lVar11 != 0) {
            pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 8));
            sVar10 = strlen(pcVar9);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_b0,pcVar9,sVar10);
            pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c8,pcVar9);
            uVar2 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar2 = local_a8;
            }
            if (uVar2 == 5) {
              plVar1 = plVar8;
              if (((byte)local_b0[0] & 1) != 0) {
                plVar1 = local_a0;
              }
              iVar5 = memcmp(plVar1,"Plist",5);
              if (iVar5 == 0) {
                uVar2 = (ulong)((byte)local_c8[0] >> 1);
                pcVar9 = (char *)((ulong)local_c8 | 1);
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar2 = local_c0;
                  pcVar9 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_98,pcVar9,uVar2);
              }
            }
            else if (uVar2 == 4) {
              plVar1 = plVar8;
              if (((byte)local_b0[0] & 1) != 0) {
                plVar1 = local_a0;
              }
              if ((int)*plVar1 == 0x68746150) {
                uVar2 = (ulong)((byte)local_c8[0] >> 1);
                pcVar9 = (char *)((ulong)local_c8 | 1);
                if (((byte)local_c8[0] & 1) != 0) {
                  uVar2 = local_c0;
                  pcVar9 = local_b8;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(local_80,pcVar9,uVar2);
              }
            }
            lVar11 = *(long *)(lVar11 + 0x38);
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
  uVar2 = (ulong)((byte)local_80[0] >> 1);
  pcVar9 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar2 = local_78;
    pcVar9 = local_70;
  }
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar9,uVar2);
  uVar2 = (ulong)((byte)local_98[0] >> 1);
  pcVar9 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar2 = local_90;
    pcVar9 = local_88;
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar9,uVar2);
  uVar6 = flatbuffers::CreateResourceData(param_2,uVar6,uVar7,0);
  uVar4 = flatbuffers::CreateGameMapOptions(param_2,uVar4,uVar6);
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

