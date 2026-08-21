
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Brief const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,Brief *param_2)

{
  ulong uVar1;
  ulong local_8;
  
  uVar1 = *(ulong *)param_2;
  local_8 = 0;
  if ((uVar1 & 1) == 0) {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,(int)uVar1 >> 1);
  }
  else if ((int)uVar1 == 3) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"[cleared]",9);
  }
  else {
    if ((uVar1 & 3) != 1) {
      if ((uVar1 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_8 = uVar1 & 0xfffffffffffffffd;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"[weak] ",7);
      uVar1 = local_8;
    }
    local_8 = uVar1;
    HeapObject::HeapObjectShortPrint((HeapObject *)&local_8,param_1);
  }
  return param_1;
}

