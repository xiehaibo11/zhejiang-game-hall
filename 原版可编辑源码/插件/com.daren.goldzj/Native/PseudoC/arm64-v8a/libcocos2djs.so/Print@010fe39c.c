
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Print
          (Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
          basic_ostream *param_1)

{
  long lVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_68;
  
  uVar5 = *(ulong *)this;
  if ((int)*(uint *)(uVar5 + 0xf) >> 1 != 0) {
    uVar6 = uVar5 & 0xffffffff00000000;
    lVar7 = (long)((ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21;
    lVar1 = uVar5 + 7;
    iVar4 = 0x14;
    do {
      lVar8 = (long)iVar4;
      if ((*(uint *)(lVar1 + lVar8) != *(uint *)(uVar6 + 0xa0)) &&
         (uVar5 = uVar6 | *(uint *)(lVar1 + lVar8), *(int *)(uVar5 + 0xb) != *(int *)(uVar6 + 0xa8))
         ) {
        uVar2 = *(uint *)(uVar5 + 3);
        uVar5 = uVar6 | uVar2;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n   ",4);
        local_68 = uVar5;
        if (((uVar2 & 1) == 0) || (0x3f < *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
          internal::operator<<(param_1,(Brief *)&local_68);
        }
        else {
          String::StringPrint((String *)&local_68,param_1);
        }
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,": ",2);
        local_68 = uVar6 | *(uint *)((uVar6 | 0xb) + (ulong)*(uint *)(lVar8 + lVar1));
        pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,(Brief *)&local_68);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
        local_68 = CONCAT44(local_68._4_4_,*(int *)((uVar6 | *(uint *)(lVar8 + lVar1)) + 7) >> 1);
        PropertyDetails::PrintAsSlowTo((PropertyDetails *)&local_68,param_1);
      }
      lVar7 = lVar7 + -1;
      iVar4 = iVar4 + 4;
    } while (lVar7 != 0);
  }
  return;
}

