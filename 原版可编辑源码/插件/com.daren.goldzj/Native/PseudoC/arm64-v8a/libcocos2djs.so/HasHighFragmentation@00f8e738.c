
/* v8::internal::Heap::HasHighFragmentation(unsigned long, unsigned long) */

bool __thiscall v8::internal::Heap::HasHighFragmentation(Heap *this,ulong param_1,ulong param_2)

{
  return param_1 + 0x1000000 < param_2 - param_1;
}

