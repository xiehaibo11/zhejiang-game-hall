
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::BasicBlock::Control const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,Control *param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    pcVar1 = "none";
    break;
  case 1:
    pcVar1 = "goto";
    break;
  case 2:
    pcVar1 = "call";
    break;
  case 3:
    pcVar1 = "branch";
    goto LAB_012b0e3c;
  case 4:
    pcVar1 = "switch";
    goto LAB_012b0e3c;
  case 5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"deoptimize",10);
    return;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"tailcall",8)
    ;
    return;
  case 7:
    pcVar1 = "return";
LAB_012b0e3c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,6);
    return;
  case 8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"throw",5);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,4);
  return;
}

