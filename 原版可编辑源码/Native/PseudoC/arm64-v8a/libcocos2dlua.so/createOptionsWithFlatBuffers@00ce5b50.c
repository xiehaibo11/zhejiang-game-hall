
/* cocostudio::Particle3DReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::Particle3DReader::createOptionsWithFlatBuffers
          (Particle3DReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  XMLNode *this_00;
  char *pcVar9;
  size_t sVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  long lVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  long *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar8 = (long *)Node3DReader::getInstance();
  uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,param_1,param_2);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    uVar11 = 0;
    pcVar13 = (char *)0x0;
    uVar12 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pcVar13 = (char *)((ulong)local_b0 | 1);
    do {
      pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar9);
      uVar11 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar11 = local_90;
      }
      if (uVar11 == 8) {
        plVar8 = (long *)((ulong)local_98 | 1);
        if (((byte)local_98[0] & 1) != 0) {
          plVar8 = local_88;
        }
        if (*plVar8 == 0x61746144656c6946) {
          lVar14 = *(long *)(this_00 + 0x60);
          while (lVar14 != 0) {
            pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
            sVar10 = strlen(pcVar9);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (local_98,pcVar9,sVar10);
            pcVar9 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_b0,pcVar9);
            uVar11 = (ulong)((byte)local_98[0] >> 1);
            if (((byte)local_98[0] & 1) != 0) {
              uVar11 = local_90;
            }
            uVar5 = uVar7;
            if (uVar11 == 4) {
              plVar8 = (long *)((ulong)local_98 | 1);
              if (((byte)local_98[0] & 1) != 0) {
                plVar8 = local_88;
              }
              if ((int)*plVar8 == 0x68746150) {
                uVar11 = (ulong)((byte)local_b0[0] >> 1);
                pcVar9 = pcVar13;
                if (((byte)local_b0[0] & 1) != 0) {
                  uVar11 = local_a8;
                  pcVar9 = local_a0;
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,pcVar9,uVar11);
              }
              else if ((int)*plVar8 == 0x65707954) {
                uVar11 = (ulong)((byte)local_b0[0] >> 1);
                if (((byte)local_b0[0] & 1) != 0) {
                  uVar11 = local_a8;
                }
                if (uVar11 == 7) {
                  pcVar9 = pcVar13;
                  if (((byte)local_b0[0] & 1) != 0) {
                    pcVar9 = local_a0;
                  }
                  iVar4 = memcmp(pcVar9,"Default",7);
                  uVar5 = 0;
                  if (iVar4 != 0) {
                    uVar5 = uVar7;
                  }
                }
                else if (uVar11 == 6) {
                  pcVar9 = pcVar13;
                  if (((byte)local_b0[0] & 1) != 0) {
                    pcVar9 = local_a0;
                  }
                  iVar4 = memcmp(pcVar9,"Normal",6);
                  if (iVar4 == 0) {
                    uVar5 = 1;
                  }
                }
              }
            }
            lVar14 = *(long *)(lVar14 + 0x38);
            uVar7 = uVar5;
            if (((byte)local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    } while (this_00 != (XMLNode *)0x0);
    uVar12 = (uint)(byte)local_80._0_1_;
    uVar11 = local_78;
    pcVar13 = local_70;
  }
  uVar1 = (ulong)(uVar12 >> 1);
  pcVar9 = (char *)((ulong)&local_80 | 1);
  if ((uVar12 & 1) != 0) {
    uVar1 = uVar11;
    pcVar9 = pcVar13;
  }
  uVar5 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar9,uVar1);
  uVar11 = __strlen_chk(&DAT_013c996e,1);
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString(param_2,"",uVar11);
  uVar7 = flatbuffers::CreateResourceData(param_2,uVar5,uVar6,uVar7);
  uVar3 = flatbuffers::CreateParticle3DOptions(param_2,uVar3,uVar7);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

