
/* v8::internal::ReadOnlyHeap::Contains(v8::internal::HeapObject) */

byte v8::internal::ReadOnlyHeap::Contains(ulong param_1)

{
  return *(byte *)((param_1 & 0xfffffffffffc0000) + 10) >> 5 & 1;
}

