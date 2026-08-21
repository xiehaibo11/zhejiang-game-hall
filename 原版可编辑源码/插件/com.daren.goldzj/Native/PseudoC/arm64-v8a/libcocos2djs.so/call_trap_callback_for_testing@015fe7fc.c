
/* v8::internal::wasm::call_trap_callback_for_testing() */

void v8::internal::wasm::call_trap_callback_for_testing(void)

{
  if (DAT_01d478e0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015fe808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_01d478e0)();
    return;
  }
  return;
}

