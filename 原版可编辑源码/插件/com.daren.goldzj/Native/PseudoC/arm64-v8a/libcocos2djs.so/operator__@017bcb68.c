
/* v8::internal::interpreter::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::interpreter::BytecodeArrayBuilder::ToBooleanMode
   const&) */

void v8::internal::interpreter::operator<<(basic_ostream *param_1,ToBooleanMode *param_2)

{
  if (*(int *)param_2 == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"ConvertToBoolean",0x10);
    return;
  }
  if (*(int *)param_2 == 1) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"AlreadyBoolean",0xe);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

