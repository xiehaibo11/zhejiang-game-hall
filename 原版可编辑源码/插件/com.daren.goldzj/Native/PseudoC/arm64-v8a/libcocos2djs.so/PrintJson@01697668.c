
/* v8::internal::compiler::SourcePositionTable::PrintJson(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::compiler::SourcePositionTable::PrintJson
          (SourcePositionTable *this,basic_ostream *param_1)

{
  long lVar1;
  bool bVar2;
  basic_ostream *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong local_58;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  lVar4 = *(long *)(this + 0x18);
  lVar1 = *(long *)(this + 0x20) - lVar4;
  if (lVar1 != 0) {
    bVar2 = false;
    uVar5 = 0;
    while( true ) {
      local_58 = *(ulong *)(lVar4 + uVar5 * 8);
      if ((local_58 & 0x7fffffffffff) != 0) {
        if (bVar2) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        }
        bVar2 = true;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\"",1);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar5);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\" : ",4)
        ;
        SourcePosition::PrintJson((SourcePosition *)&local_58,param_1);
      }
      if ((lVar1 >> 3) - 1U == uVar5) break;
      lVar4 = *(long *)(this + 0x18);
      uVar5 = uVar5 + 1;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return;
}

