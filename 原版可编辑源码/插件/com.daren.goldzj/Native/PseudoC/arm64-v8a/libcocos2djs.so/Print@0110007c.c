
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Print
          (Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
          basic_ostream *param_1)

{
  long lVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong local_68;
  
  uVar4 = *(ulong *)this;
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
    uVar5 = uVar4 & 0xffffffff00000000;
    lVar6 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    lVar1 = uVar4 + 7;
    lVar7 = 0x1800000000;
    lVar8 = 0x1400000000;
    lVar9 = 0x1000000000;
    do {
      uVar2 = *(uint *)(lVar1 + (lVar9 >> 0x20));
      if ((uVar2 != *(uint *)(uVar5 + 0xa8)) && (uVar2 != *(uint *)(uVar5 + 0xa0))) {
        uVar4 = uVar5 | uVar2;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n   ",4);
        local_68 = uVar4;
        if (((uVar2 & 1) == 0) || (0x3f < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
          internal::operator<<(param_1,(Brief *)&local_68);
        }
        else {
          String::StringPrint((String *)&local_68,param_1);
        }
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,": ",2);
        local_68 = uVar5 | *(uint *)(lVar1 + (lVar8 >> 0x20));
        pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,(Brief *)&local_68);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
        local_68 = CONCAT44(local_68._4_4_,*(int *)(lVar1 + (lVar7 >> 0x20)) >> 1);
        PropertyDetails::PrintAsSlowTo((PropertyDetails *)&local_68,param_1);
      }
      lVar7 = lVar7 + 0xc00000000;
      lVar8 = lVar8 + 0xc00000000;
      lVar6 = lVar6 + -1;
      lVar9 = lVar9 + 0xc00000000;
    } while (lVar6 != 0);
  }
  return;
}

