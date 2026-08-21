
/* v8::internal::Heap_GenerationalBarrierForCodeSlow(v8::internal::Code, v8::internal::RelocInfo*,
   v8::internal::HeapObject) */

void v8::internal::Heap_GenerationalBarrierForCodeSlow(void)

{
  Heap::GenerationalBarrierForCodeSlow();
  return;
}

