
/* v8::internal::JSPromise::Status(v8::Promise::PromiseState) */

undefined8 v8::internal::JSPromise::Status(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined8 *)(&DAT_01cb4e70 + (long)(int)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

