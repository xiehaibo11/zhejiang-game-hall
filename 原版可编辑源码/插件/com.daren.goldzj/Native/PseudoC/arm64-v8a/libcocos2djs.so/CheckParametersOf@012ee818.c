
/* v8::internal::compiler::CheckParametersOf(v8::internal::compiler::Operator const*) */

Operator * v8::internal::compiler::CheckParametersOf(Operator *param_1)

{
  switch(*(undefined2 *)(param_1 + 0x10)) {
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x67:
  case 0x69:
  case 0x6d:
  case 0x6e:
  case 0xbf:
  case 0xd4:
  case 0xd7:
  case 0xdb:
  case 0xdd:
    return param_1 + 0x30;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(CHECKED_WITH_FEEDBACK_OP_LIST(MAKE_OR) false)");
  }
}

