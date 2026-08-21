
/* v8::internal::JSRegExpStringIterator::JSRegExpStringIteratorPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSRegExpStringIterator::JSRegExpStringIteratorPrint
          (JSRegExpStringIterator *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSRegExpStringIterator");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - regex: ",0xb);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - string: ",0xc);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - done: ",10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             (bool)((byte)(*(uint *)(*(long *)this + 0x13) >> 1) & 1));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - global: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             (bool)((byte)(*(uint *)(*(long *)this + 0x13) >> 2) & 1));
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - unicode: ",0xd);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             (bool)((byte)(*(uint *)(*(long *)this + 0x13) >> 3) & 1));
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

