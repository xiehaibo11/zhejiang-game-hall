
/* v8::internal::Heap::IsLargeObject(v8::internal::HeapObject) */

byte v8::internal::Heap::IsLargeObject(ulong param_1)

{
  return *(byte *)((param_1 & 0xfffffffffffc0000) + 8) >> 5 & 1;
}

