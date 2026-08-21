
/* v8::Isolate::AutomaticallyRestoreInitialHeapLimit(double) */

void __thiscall v8::Isolate::AutomaticallyRestoreInitialHeapLimit(Isolate *this,double param_1)

{
  internal::Heap::AutomaticallyRestoreInitialHeapLimit((Heap *)(this + 0x8850),param_1);
  return;
}

