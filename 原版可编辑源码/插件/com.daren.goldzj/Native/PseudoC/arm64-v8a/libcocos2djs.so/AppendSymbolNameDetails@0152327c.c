
/* v8::internal::Log::MessageBuilder::AppendSymbolNameDetails(v8::internal::String, bool) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendSymbolNameDetails
          (MessageBuilder *this,ulong param_2,ulong param_3)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  char local_28 [4];
  char local_24 [4];
  
  if ((int)param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 7);
    if (0xfff < (int)uVar1) {
      uVar1 = 0x1000;
    }
    if ((param_3 & 1) != 0) {
      uVar3 = param_2 & 0xffffffff00000000;
      pbVar2 = (basic_ostream *)(*(long *)this + 0x10);
      local_44[0] = '2';
      if ((*(ushort *)((uVar3 | 7) + (ulong)*(uint *)(param_2 - 1)) & 8) != 0) {
        local_44[0] = 'a';
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,local_44,1);
      if ((*(ushort *)((uVar3 | *(uint *)(param_2 - 1)) + 7) & 7) == 2) {
        local_24[0] = 'e';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar2,local_24,1);
      }
      if (*(ushort *)((uVar3 | *(uint *)(param_2 - 1)) + 7) < 0x20) {
        local_28[0] = '#';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar2,local_28,1);
      }
      local_48[0] = ':';
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,local_48,1);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                          *(int *)(param_2 + 7));
      local_4c[0] = ':';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,local_4c,1);
    }
    AppendString(this,param_2,(ulong)uVar1 << 0x20 | 1);
  }
  return;
}

