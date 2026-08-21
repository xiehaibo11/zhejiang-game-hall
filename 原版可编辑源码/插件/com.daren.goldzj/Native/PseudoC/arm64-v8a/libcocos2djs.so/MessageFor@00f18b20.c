
/* v8::internal::Deoptimizer::MessageFor(v8::internal::DeoptimizeKind) */

undefined * v8::internal::Deoptimizer::MessageFor(byte param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_eager_01ca49d8)[(char)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Unsupported deopt kind");
}

