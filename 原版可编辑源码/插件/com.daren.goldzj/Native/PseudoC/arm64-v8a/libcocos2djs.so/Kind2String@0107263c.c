
/* v8::internal::Code::Kind2String(v8::internal::Code::Kind) */

undefined * v8::internal::Code::Kind2String(uint param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_s_OPTIMIZED_FUNCTION_019d1195_0x16_01cb2748)[(int)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

