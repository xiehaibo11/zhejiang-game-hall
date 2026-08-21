
void FUN_00f3d880(basic_ostream *param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  basic_ostream *this;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  uint *puVar10;
  int iVar11;
  ulong local_60;
  ulong local_58;
  
  local_60 = param_2;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - properties: ",0x10);
  if ((*(uint *)(param_2 + 3) & 1) != 0) {
    local_58 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 3);
    v8::internal::operator<<(param_1,(Brief *)&local_58);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," {",2);
  uVar6 = v8::internal::JSObject::PrintProperties((JSObject *)&local_60,param_1);
  if ((uVar6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n ",2);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}\n",2);
  uVar6 = param_2 & 0xffffffff00000000;
  puVar10 = (uint *)(param_2 - 1);
  if ((param_3 & 1) != 0) {
    if (*(short *)((uVar6 | 7) + (ulong)*puVar10) == 0x41b) {
      lVar7 = *(long *)(param_2 + 0x1f);
    }
    else {
      lVar7 = (long)((ulong)*(uint *)((uVar6 | *(uint *)(param_2 + 7)) + 3) << 0x20) >> 0x21;
    }
    if (lVar7 != 0) {
      v8::internal::JSObject::PrintElements((JSObject *)&local_60,param_1);
    }
  }
  uVar8 = uVar6 | *puVar10;
  bVar2 = *(byte *)(uVar8 + 3);
  if (bVar2 != 0) {
    if (*(short *)(uVar8 + 7) == 0x421) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = v8::internal::JSObject::GetHeaderSize
                        (*(short *)(uVar8 + 7),*(char *)(uVar8 + 9) < '\0');
    }
    iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(uVar8 + 3)) +
            (uint)*(byte *)(uVar8 + 4);
    iVar11 = iVar4;
    if (iVar4 < 0) {
      iVar11 = iVar4 + 1;
    }
    if (1 < iVar4) {
      iVar11 = iVar11 >> 1;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1," - embedder fields = {",0x16);
      iVar4 = 0;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n    ",5);
        sVar3 = *(short *)((uVar6 | *puVar10) + 7);
        if (sVar3 == 0x421) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = v8::internal::JSObject::GetHeaderSize
                            (sVar3,*(char *)((uVar6 | *puVar10) + 9) < '\0');
        }
        puVar1 = (uint *)((long)puVar10 + (long)(iVar5 + iVar4));
        local_58 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
        v8::internal::operator<<(param_1,(Brief *)&local_58);
        pvVar9 = *(void **)puVar1;
        if (((ulong)pvVar9 & 1) == 0) {
          this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,", aligned pointer: ",0x13);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,pvVar9);
        }
        iVar11 = iVar11 + -1;
        iVar4 = iVar4 + 8;
      } while (iVar11 != 0);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n }\n",4)
      ;
    }
  }
  return;
}

