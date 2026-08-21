
/* v8::internal::LocalEmbedderHeapTracer::Trace(double) */

undefined8 v8::internal::LocalEmbedderHeapTracer::Trace(double param_1)

{
  long in_x0;
  undefined8 uVar1;
  
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f69b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(in_x0 + 8) + 0x20))();
    return uVar1;
  }
  return 1;
}

