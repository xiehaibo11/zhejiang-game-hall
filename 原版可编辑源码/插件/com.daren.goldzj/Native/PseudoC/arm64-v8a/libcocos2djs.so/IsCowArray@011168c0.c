
/* v8::internal::FixedArrayBase::IsCowArray() const */

bool __thiscall v8::internal::FixedArrayBase::IsCowArray(FixedArrayBase *this)

{
  return *(int *)(*(ulong *)this - 1) == *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xe8);
}

