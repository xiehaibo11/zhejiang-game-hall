
/* v8::internal::ExternalReference::Create(v8::internal::Runtime::Function const*) */

undefined8 v8::internal::ExternalReference::Create(Function *param_1)

{
  if ((int)(char)param_1[0x19] - 1U < 2) {
    return *(undefined8 *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

