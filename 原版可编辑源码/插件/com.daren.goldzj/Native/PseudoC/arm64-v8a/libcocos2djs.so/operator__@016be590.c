
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::FrameStateType) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,undefined4 param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  switch(param_2) {
  case 0:
    pcVar1 = "INTERPRETED_FRAME";
    uVar2 = 0x11;
    break;
  case 1:
    pcVar1 = "ARGUMENTS_ADAPTOR";
    uVar2 = 0x11;
    break;
  case 2:
    pcVar1 = "CONSTRUCT_STUB";
    uVar2 = 0xe;
    break;
  case 3:
    pcVar1 = "BUILTIN_CONTINUATION_FRAME";
    uVar2 = 0x1a;
    break;
  case 4:
    pcVar1 = "JAVA_SCRIPT_BUILTIN_CONTINUATION_FRAME";
    uVar2 = 0x26;
    break;
  case 5:
    pcVar1 = "JAVA_SCRIPT_BUILTIN_CONTINUATION_WITH_CATCH_FRAME";
    uVar2 = 0x31;
    break;
  default:
    goto switchD_016be5c0_default;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
switchD_016be5c0_default:
  return param_1;
}

