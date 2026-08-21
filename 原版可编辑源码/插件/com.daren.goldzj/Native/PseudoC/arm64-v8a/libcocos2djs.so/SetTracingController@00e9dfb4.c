
/* v8::platform::SetTracingController(v8::Platform*, v8::platform::tracing::TracingController*) */

void v8::platform::SetTracingController(Platform *param_1,TracingController *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x60);
  *(TracingController **)(param_1 + 0x60) = param_2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e9dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

