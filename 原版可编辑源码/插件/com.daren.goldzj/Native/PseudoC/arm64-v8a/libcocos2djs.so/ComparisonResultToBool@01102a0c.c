
/* v8::internal::ComparisonResultToBool(v8::internal::Operation, v8::internal::ComparisonResult) */

bool v8::internal::ComparisonResultToBool(undefined4 param_1,uint param_2)

{
  switch(param_1) {
  case 0x12:
    return param_2 == 0;
  case 0x13:
    return param_2 < 2;
  case 0x14:
    return param_2 == 2;
  case 0x15:
    return param_2 - 1 < 2;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

