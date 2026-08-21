
/* v8::internal::JSObject::PrintProperties(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

bool __thiscall v8::internal::JSObject::PrintProperties(JSObject *this,basic_ostream *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  basic_ostream *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint local_70 [2];
  ulong local_68;
  
  uVar8 = *(ulong *)this;
  uVar18 = uVar8 & 0xffffffff00000000;
  if ((*(uint *)((uVar18 | 0xb) + (ulong)*(uint *)(uVar8 - 1)) >> 0x15 & 1) == 0) {
    puVar11 = (uint *)(uVar8 - 1);
    uVar13 = (ulong)(*(uint *)((uVar18 | *puVar11) + 0xb) >> 10) & 0x3ff;
    if ((int)uVar13 != 0) {
      uVar8 = uVar18 | *(uint *)((uVar18 | *(uint *)(uVar8 - 1)) + 0x17);
      lVar19 = 0;
      iVar2 = (uint)*(byte *)((uVar18 | *puVar11) + 3) - (uint)*(byte *)((uVar18 | *puVar11) + 4);
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n    ",5);
        local_68 = uVar18 | *(uint *)(uVar8 + lVar19 + 0xf);
        if (*(ushort *)((uVar18 | 7) + (ulong)*(uint *)(local_68 - 1)) < 0x40) {
          String::StringPrint((String *)&local_68,param_1);
        }
        else {
          internal::operator<<(param_1,(Brief *)&local_68);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,": ",2);
        lVar1 = uVar8 + lVar19;
        uVar10 = *(uint *)(lVar1 + 0x13);
        local_70[0] = (int)uVar10 >> 1;
        if ((uVar10 >> 2 & 1) == 0) {
          uVar12 = *(ulong *)this;
          uVar9 = uVar12 & 0xffffffff00000000;
          uVar14 = uVar9 | *(uint *)(uVar12 - 1);
          uVar10 = *(int *)((uVar9 | lVar19 + 0x13U) + (ulong)*(uint *)(uVar14 + 0x17)) >> 1;
          uVar4 = uVar10 >> 0x13 & 0x3ff;
          iVar3 = (uint)*(byte *)(uVar14 + 3) - (uint)*(byte *)(uVar14 + 4);
          if ((int)uVar4 < iVar3) {
            uVar15 = (ulong)*(byte *)(uVar14 + 4) << 0x1c;
            iVar17 = (uVar4 + *(byte *)(uVar14 + 4)) * 4;
          }
          else {
            iVar17 = (uVar4 - iVar3) * 4 + 8;
            uVar15 = 0x20000000;
          }
          uVar10 = uVar10 >> 6 & 7;
          local_68 = CONCAT71(local_68._1_7_,(char)uVar10);
          if (4 < uVar10) {
            uVar7 = Representation::Mnemonic((Representation *)&local_68);
            PrintF("%s\n",uVar7);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar14 = (ulong)iVar17;
          uVar16 = (ulong)((int)uVar4 < iVar3) << 0xd | (long)iVar3 << 0x10 | uVar14;
          if (((uint)uVar16 >> 0xd & 1) == 0) {
            uVar10 = *(uint *)(uVar12 + 3);
            if (((uVar10 & 1) == 0) || (uVar10 == *(uint *)(uVar9 + 0x168))) {
              uVar12 = *(ulong *)(uVar9 + 0x3b8);
            }
            else {
              uVar12 = uVar9 | uVar10;
            }
            uVar10 = *(uint *)(((uVar14 & 0x1ffc) - ((uVar16 | uVar15) >> 0x1a & 0x7c)) + uVar12 + 7
                              );
          }
          else {
            uVar10 = *(uint *)((uVar14 & 0x1fff) + uVar12 + -1);
          }
          local_68 = uVar9 | uVar10;
        }
        else {
          local_68 = uVar18 | *(uint *)(lVar1 + 0x17);
        }
        internal::operator<<(param_1,(Brief *)&local_68);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
        PropertyDetails::PrintAsFastTo((PropertyDetails *)local_70,param_1,2);
        if (((local_70[0] >> 1 & 1) == 0) &&
           (uVar10 = local_70[0] >> 0x13 & 0x3ff, iVar2 <= (int)uVar10)) {
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1," properties[",0xc);
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                              uVar10 - iVar2);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
        }
        lVar19 = lVar19 + 0xc;
      } while (uVar13 * 0xc - lVar19 != 0);
      uVar18 = *(ulong *)this & 0xffffffff00000000;
      puVar11 = (uint *)(*(ulong *)this - 1);
    }
    bVar5 = (*(uint *)((uVar18 | *puVar11) + 0xb) & 0xffc00) != 0;
  }
  else {
    if (*(short *)((uVar18 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xaa) {
      local_68 = uVar18 | *(uint *)(uVar8 + 3);
      Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Print
                ((Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *)
                 &local_68,param_1);
    }
    else {
      if ((*(uint *)(uVar8 + 3) & 1) == 0) {
        local_68 = *(ulong *)(uVar18 + 0x410);
      }
      else {
        local_68 = uVar18 | *(uint *)(uVar8 + 3);
      }
      Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Print
                ((Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *)
                 &local_68,param_1);
    }
    bVar5 = true;
  }
  return bVar5;
}

