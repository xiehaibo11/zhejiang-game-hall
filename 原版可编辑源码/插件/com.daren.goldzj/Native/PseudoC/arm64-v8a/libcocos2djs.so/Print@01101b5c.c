
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::
Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::Print
          (Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  if ((int)*(uint *)(local_18 + 0xf) >> 1 != 0) {
    uVar5 = local_18 & 0xffffffff00000000;
    lVar3 = 0;
    iVar4 = 0xc;
    do {
      uVar1 = *(uint *)(local_18 + (long)iVar4 + 7);
      if ((uVar1 != *(uint *)(uVar5 + 0xa8)) && (uVar1 != *(uint *)(uVar5 + 0xa0))) {
        uVar6 = uVar5 | uVar1;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n   ",4);
        local_38 = uVar6;
        if (((uVar1 & 1) == 0) || (0x3f < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
          internal::operator<<(param_1,(Brief *)&local_38);
        }
        else {
          String::StringPrint((String *)&local_38,param_1);
        }
        pbVar2 = std::__ndk1::operator<<(param_1,": ");
        local_38 = ValueAt((Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                            *)&local_18,lVar3);
        pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_38);
        std::__ndk1::operator<<(pbVar2," ");
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar3 = lVar3 + 1;
      iVar4 = iVar4 + 8;
    } while ((long)((ulong)*(uint *)(local_18 + 0xf) << 0x20) >> 0x21 != lVar3);
  }
  return;
}

