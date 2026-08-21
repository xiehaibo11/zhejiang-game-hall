
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CreateArrayIteratorParameters const&)
    */

void v8::internal::compiler::operator<<
               (basic_ostream *param_1,CreateArrayIteratorParameters *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_2;
  if (iVar1 == 2) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"IterationKind::kEntries",0x17);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"IterationKind::kKeys",0x14);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"IterationKind::kValues",0x16);
  return;
}

