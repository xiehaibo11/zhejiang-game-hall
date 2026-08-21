
/* v8::internal::RelocInfo::RelocModeName(v8::internal::RelocInfo::Mode) */

char * v8::internal::RelocInfo::RelocModeName(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "no reloc";
  switch(param_1) {
  case 0:
    return "code target";
  case 1:
    return "relative code target";
  case 2:
    return "compressed embedded object";
  case 3:
    return "full embedded object";
  case 4:
    return "internal wasm call";
  case 5:
    return "wasm stub call";
  case 6:
    return "runtime entry";
  case 7:
    return "external reference";
  case 8:
    return "internal reference";
  case 9:
    return "encoded internal reference";
  case 10:
    return "off heap target";
  case 0xb:
    return "constant pool";
  case 0xc:
    return "veneer pool";
  case 0xd:
    return "deopt script offset";
  case 0xe:
    return "deopt inlining id";
  case 0xf:
    return "deopt reason";
  case 0x10:
    return "deopt index";
  case 0x11:
  case 0x12:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x13:
    break;
  default:
    pcVar1 = "unknown relocation type";
  }
  return pcVar1;
}

