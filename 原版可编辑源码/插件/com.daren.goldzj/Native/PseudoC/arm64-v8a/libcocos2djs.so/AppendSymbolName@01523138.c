
/* v8::internal::Log::MessageBuilder::AppendSymbolName(v8::internal::Symbol) */

void __thiscall
v8::internal::Log::MessageBuilder::AppendSymbolName(MessageBuilder *this,ulong param_2)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  ulong local_38;
  
  pbVar2 = (basic_ostream *)(*(long *)this + 0x10);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"symbol(",7);
  if (*(int *)(param_2 + 0xb) != *(int *)((param_2 & 0xffffffff00000000) + 0xa0)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\"",1);
    if (*(uint *)(param_2 + 0xb) != 0) {
      uVar3 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
      uVar1 = *(uint *)(uVar3 + 7);
      if (0xfff < (int)uVar1) {
        uVar1 = 0x1000;
      }
      AppendString(this,uVar3,(ulong)uVar1 << 0x20 | 1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\" ",2);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,"hash ",5);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 8;
  if ((*(uint *)(param_2 + 3) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 3) >> 3;
  }
  else {
    local_38 = param_2;
    uVar1 = String::ComputeAndSetHash((String *)&local_38);
  }
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar1);
  *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
       *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 2;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
  return;
}

