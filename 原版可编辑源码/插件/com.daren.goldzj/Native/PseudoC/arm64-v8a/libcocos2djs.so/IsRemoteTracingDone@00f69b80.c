
/* v8::internal::LocalEmbedderHeapTracer::IsRemoteTracingDone() */

undefined8 __thiscall
v8::internal::LocalEmbedderHeapTracer::IsRemoteTracingDone(LocalEmbedderHeapTracer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f69b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x28))();
    return uVar1;
  }
  return 1;
}

