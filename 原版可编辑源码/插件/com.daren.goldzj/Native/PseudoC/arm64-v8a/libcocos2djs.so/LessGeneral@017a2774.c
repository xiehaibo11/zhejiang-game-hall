
/* v8::internal::compiler::Truncation::LessGeneral(v8::internal::compiler::Truncation::TruncationKind,
   v8::internal::compiler::Truncation::TruncationKind) */

bool v8::internal::compiler::Truncation::LessGeneral(undefined1 param_1,byte param_2)

{
  switch(param_1) {
  case 0:
    return true;
  case 1:
    param_2 = param_2 | 4;
    break;
  case 2:
    return (byte)(param_2 - 2) < 4;
  case 3:
    return (byte)(param_2 - 3) < 3;
  case 4:
    param_2 = param_2 | 1;
    break;
  case 5:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return param_2 == 5;
}

