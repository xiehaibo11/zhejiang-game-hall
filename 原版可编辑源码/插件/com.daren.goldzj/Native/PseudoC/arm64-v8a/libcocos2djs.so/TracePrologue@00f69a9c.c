
/* v8::internal::LocalEmbedderHeapTracer::TracePrologue(v8::EmbedderHeapTracer::TraceFlags) */

void v8::internal::LocalEmbedderHeapTracer::TracePrologue(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f69ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}

