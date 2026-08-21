
/* v8::internal::HeapEntry::TypeAsString() */

undefined * __thiscall v8::internal::HeapEntry::TypeAsString(HeapEntry *this)

{
  if ((uint)((ulong)*(uint *)this & 0xf) < 0xe) {
    return (&PTR_s__hidden__01cb7668)[(ulong)*(uint *)this & 0xf];
  }
  return &DAT_01896be7;
}

