
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FlagsCondition const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,FlagsCondition *param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"equal",5);
    return;
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"not equal",9);
    return;
  case 2:
    pcVar1 = "signed less than";
    break;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"signed greater than or equal",0x1c);
    return;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"signed less than or equal",0x19);
    return;
  case 5:
    pcVar1 = "signed greater than";
    goto LAB_01646fd4;
  case 6:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"unsigned less than",0x12);
    return;
  case 7:
    pcVar1 = "unsigned greater than or equal";
    goto LAB_01646f78;
  case 8:
    pcVar1 = "unsigned less than or equal";
    goto LAB_01646f64;
  case 9:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"unsigned greater than",0x15);
    return;
  case 10:
    pcVar1 = "less than or unordered (FP)";
LAB_01646f64:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1b);
    return;
  case 0xb:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"greater than or equal (FP)",0x1a);
    return;
  case 0xc:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"less than or equal (FP)",0x17);
    return;
  case 0xd:
    pcVar1 = "greater than or unordered (FP)";
LAB_01646f78:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x1e);
    return;
  case 0xe:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"less than (FP)",0xe);
    return;
  case 0xf:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"greater than, equal or unordered (FP)",0x25);
    return;
  case 0x10:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"less than, equal or unordered (FP)",0x22);
    return;
  case 0x11:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"greater than (FP)",0x11);
    return;
  case 0x12:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"unordered equal",0xf);
    return;
  case 0x13:
    pcVar1 = "unordered not equal";
LAB_01646fd4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x13);
    return;
  case 0x14:
    pcVar1 = "overflow";
    goto LAB_01646fe8;
  case 0x15:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"not overflow",0xc);
    return;
  case 0x16:
    pcVar1 = "positive or zero";
    break;
  case 0x17:
    pcVar1 = "negative";
LAB_01646fe8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,8);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x10);
  return;
}

