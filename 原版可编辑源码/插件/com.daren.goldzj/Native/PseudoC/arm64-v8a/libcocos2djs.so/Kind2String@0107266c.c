
/* v8::internal::AbstractCode::Kind2String(v8::internal::AbstractCode::Kind) */

char * v8::internal::AbstractCode::Kind2String(uint param_1)

{
  if ((int)param_1 < 0xc) {
    if (param_1 < 0xc) {
      return (&PTR_s_OPTIMIZED_FUNCTION_019d1195_0x16_01cb2748)[(int)param_1];
    }
  }
  else if (param_1 == 0xc) {
    return "INTERPRETED_FUNCTION";
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

