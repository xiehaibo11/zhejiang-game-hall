
/* v8::internal::Heap::IsImmovable(v8::internal::HeapObject) */

bool __thiscall v8::internal::Heap::IsImmovable(undefined8 param_1,ulong param_2)

{
  return (*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0xa0) != 0;
}

