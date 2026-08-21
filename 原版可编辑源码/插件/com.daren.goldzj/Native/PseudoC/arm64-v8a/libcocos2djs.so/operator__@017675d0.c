
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CallDescriptor::Kind const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,Kind *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    pcVar1 = "Code";
    uVar2 = 4;
    break;
  case 1:
    pcVar1 = "JS";
    uVar2 = 2;
    break;
  case 2:
    pcVar1 = "Addr";
    uVar2 = 4;
    break;
  case 3:
    pcVar1 = "WasmExit";
    uVar2 = 8;
    break;
  case 4:
    pcVar1 = "WasmFunction";
    uVar2 = 0xc;
    break;
  case 5:
    pcVar1 = "WasmImportWrapper";
    uVar2 = 0x11;
    break;
  case 6:
    pcVar1 = "BuiltinPointer";
    uVar2 = 0xe;
    break;
  default:
    goto switchD_01767600_default;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
switchD_01767600_default:
  return param_1;
}

