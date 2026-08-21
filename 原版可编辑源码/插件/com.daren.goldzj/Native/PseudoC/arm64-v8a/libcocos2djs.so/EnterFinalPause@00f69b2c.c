
/* v8::internal::LocalEmbedderHeapTracer::EnterFinalPause() */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::EnterFinalPause(LocalEmbedderHeapTracer *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}

