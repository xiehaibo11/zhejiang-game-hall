
/* v8::internal::ReadOnlyHeap::Contains(unsigned long) */

byte v8::internal::ReadOnlyHeap::Contains(ulong param_1)

{
  return *(byte *)((param_1 & 0xfffffffffffc0000) + 10) >> 5 & 1;
}

