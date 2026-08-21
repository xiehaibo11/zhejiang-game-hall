
/* v8::internal::ReadOnlySerializer::MustBeDeferred(v8::internal::HeapObject) */

bool __thiscall
v8::internal::ReadOnlySerializer::MustBeDeferred(ReadOnlySerializer *this,ulong param_2)

{
  if ((~*(uint *)(this + 0x1d0) & 7) == 0) {
    return false;
  }
  return *(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0xa2;
}

