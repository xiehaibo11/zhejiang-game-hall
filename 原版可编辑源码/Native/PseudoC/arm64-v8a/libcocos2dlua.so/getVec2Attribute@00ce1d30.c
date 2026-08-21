
/* cocostudio::Sprite3DReader::getVec2Attribute(tinyxml2::XMLAttribute const*) const */

float __thiscall
cocostudio::Sprite3DReader::getVec2Attribute(Sprite3DReader *this,XMLAttribute *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  double dVar5;
  float fVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  char *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (XMLAttribute *)0x0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    local_68 = 0;
    local_60 = (char *)0x0;
    local_70 = 0;
    do {
      pcVar3 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 8));
      sVar4 = strlen(pcVar3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,pcVar3,sVar4);
      pcVar3 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar3);
      uVar1 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar1 = local_68;
      }
      if (uVar1 == 1) {
        pcVar3 = (char *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pcVar3 = local_60;
        }
        if (*pcVar3 == 'Y') {
          pcVar3 = (char *)((ulong)local_88 | 1);
          if (((byte)local_88[0] & 1) != 0) {
            pcVar3 = local_78;
          }
          atof(pcVar3);
        }
        else if (*pcVar3 == 'X') {
          pcVar3 = (char *)((ulong)local_88 | 1);
          if (((byte)local_88[0] & 1) != 0) {
            pcVar3 = local_78;
          }
          dVar5 = atof(pcVar3);
          fVar6 = (float)dVar5;
        }
      }
      param_1 = *(XMLAttribute **)(param_1 + 0x38);
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
    } while (param_1 != (XMLAttribute *)0x0);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

