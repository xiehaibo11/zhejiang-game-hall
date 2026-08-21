
/* BoneNodeReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
BoneNodeReader::createOptionsWithFlatBuffers
          (BoneNodeReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  ulong uVar1;
  void *pvVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  char *pcVar10;
  XMLNode *this_00;
  size_t sVar11;
  long lVar12;
  double dVar13;
  float fVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  char *local_98;
  uint local_90;
  int iStack_8c;
  ulong local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  plVar9 = (long *)cocostudio::NodeReader::getInstance();
  uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,param_1,param_2);
  lVar12 = *(long *)(param_1 + 0x60);
  uVar8 = 1;
  iVar7 = 0x303;
  if (lVar12 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = 0.0;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar10);
      bVar3 = local_90._0_1_;
      uVar1 = (ulong)((byte)local_90._0_1_ >> 1);
      if ((local_90 & 1) != 0) {
        uVar1 = local_88;
      }
      if (uVar1 == 6) {
        pvVar2 = (void *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar6 = memcmp(pvVar2,"Length",6);
        if (iVar6 == 0) {
          pcVar10 = (char *)((ulong)local_a8 | 1);
          if (((byte)local_a8[0] & 1) != 0) {
            pcVar10 = local_98;
          }
          dVar13 = atof(pcVar10);
          fVar14 = (float)dVar13;
        }
      }
      lVar12 = *(long *)(lVar12 + 0x38);
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
        bVar3 = local_90._0_1_;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(local_80);
      }
    } while (lVar12 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_90,pcVar10);
      uVar1 = (ulong)((byte)local_90._0_1_ >> 1);
      if ((local_90 & 1) != 0) {
        uVar1 = local_88;
      }
      if (uVar1 == 9) {
        pvVar2 = (void *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar6 = memcmp(pvVar2,"BlendFunc",9);
        if (iVar6 == 0) {
          lVar12 = *(long *)(this_00 + 0x60);
          while (lVar12 != 0) {
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 8));
            sVar11 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_90,pcVar10,sVar11);
            pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar12 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_a8,pcVar10);
            uVar1 = (ulong)((byte)local_90._0_1_ >> 1);
            if ((local_90 & 1) != 0) {
              uVar1 = local_88;
            }
            if (uVar1 == 3) {
              pvVar2 = (void *)((ulong)&local_90 | 1);
              if ((local_90 & 1) != 0) {
                pvVar2 = local_80;
              }
              iVar6 = memcmp(pvVar2,"Src",3);
              if (iVar6 == 0) {
                pcVar10 = (char *)((ulong)local_a8 | 1);
                if (((byte)local_a8[0] & 1) != 0) {
                  pcVar10 = local_98;
                }
                uVar8 = atoi(pcVar10);
              }
              else {
                iVar6 = memcmp(pvVar2,"Dst",3);
                if (iVar6 == 0) {
                  pcVar10 = (char *)((ulong)local_a8 | 1);
                  if (((byte)local_a8[0] & 1) != 0) {
                    pcVar10 = local_98;
                  }
                  iVar7 = atoi(pcVar10);
                }
              }
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (((byte)local_a8[0] & 1) != 0) {
              operator_delete(local_98);
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    } while (this_00 != (XMLNode *)0x0);
  }
  local_90 = uVar8;
  iStack_8c = iVar7;
  uVar5 = flatbuffers::CreateBoneOptions(fVar14,param_2,uVar5,&local_90);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

