
/* v8::Isolate::RequestGarbageCollectionForTesting(v8::Isolate::GarbageCollectionType) */

void __thiscall v8::Isolate::RequestGarbageCollectionForTesting(Isolate *this,int param_2)

{
  if (internal::FLAG_expose_gc != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i::FLAG_expose_gc");
  }
  if (param_2 == 1) {
    internal::Heap::CollectGarbage();
    return;
  }
  internal::Heap::PreciseCollectAllGarbage((Heap *)(this + 0x8850),0,0x15,4);
  return;
}

