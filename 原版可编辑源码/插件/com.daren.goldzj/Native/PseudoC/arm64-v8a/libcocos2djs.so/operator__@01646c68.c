
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AddressingMode const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,AddressingMode *param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    return;
  case 1:
    pcVar1 = "MRI";
    goto LAB_01646ce8;
  case 2:
    pcVar1 = "MRR";
LAB_01646ce8:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,3);
    return;
  case 3:
    pcVar1 = "Operand2_R_LSL_I";
    goto LAB_01646d20;
  case 4:
    pcVar1 = "Operand2_R_LSR_I";
    goto LAB_01646d20;
  case 5:
    pcVar1 = "Operand2_R_ASR_I";
    goto LAB_01646d20;
  case 6:
    pcVar1 = "Operand2_R_ROR_I";
LAB_01646d20:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0x10);
    return;
  case 7:
    pcVar1 = "Operand2_R_UXTB";
    break;
  case 8:
    pcVar1 = "Operand2_R_UXTH";
    break;
  case 9:
    pcVar1 = "Operand2_R_SXTB";
    break;
  case 10:
    pcVar1 = "Operand2_R_SXTH";
    break;
  case 0xb:
    pcVar1 = "Operand2_R_SXTW";
    break;
  case 0xc:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"Root",4);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,0xf);
  return;
}

