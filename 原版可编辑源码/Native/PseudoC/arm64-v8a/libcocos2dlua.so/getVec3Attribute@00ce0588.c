
/* cocostudio::Node3DReader::getVec3Attribute(tinyxml2::XMLAttribute const*) const */

float __thiscall
cocostudio::Node3DReader::getVec3Attribute(Node3DReader *this,XMLAttribute *param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  double dVar7;
  float fVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  char *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  float local_68;
  float local_64;
  float local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == (XMLAttribute *)0x0) {
    fVar8 = 0.0;
  }
  else {
    cocos2d::Vec3::Vec3((Vec3 *)&local_68);
    pcVar6 = (char *)((ulong)local_98 | 1);
    local_78 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
    do {
      pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 8));
      sVar5 = strlen(pcVar4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,pcVar4,sVar5);
      pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar4);
      uVar1 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar1 = local_78;
      }
      if (uVar1 == 1) {
        pcVar4 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pcVar4 = local_70;
        }
        cVar2 = *pcVar4;
        if (cVar2 == 'Z') {
          pcVar4 = pcVar6;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar4 = local_88;
          }
          dVar7 = atof(pcVar4);
          local_60 = (float)dVar7;
        }
        else if (cVar2 == 'Y') {
          pcVar4 = pcVar6;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar4 = local_88;
          }
          dVar7 = atof(pcVar4);
          local_64 = (float)dVar7;
        }
        else if (cVar2 == 'X') {
          pcVar4 = pcVar6;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar4 = local_88;
          }
          dVar7 = atof(pcVar4);
          local_68 = (float)dVar7;
        }
      }
      param_1 = *(XMLAttribute **)(param_1 + 0x38);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      fVar8 = local_68;
    } while (param_1 != (XMLAttribute *)0x0);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

