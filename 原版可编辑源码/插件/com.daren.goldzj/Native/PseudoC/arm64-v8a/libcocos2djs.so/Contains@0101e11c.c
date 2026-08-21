
/* v8::internal::LargeObjectSpace::Contains(v8::internal::HeapObject) */

bool __thiscall v8::internal::LargeObjectSpace::Contains(LargeObjectSpace *this,ulong param_2)

{
  return this == *(LargeObjectSpace **)(param_2 & 0xfffffffffffc0000 | 0x58);
}

