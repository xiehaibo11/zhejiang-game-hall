
/* v8::internal::JSArrayBuffer::GetBackingStore() */

void __thiscall v8::internal::JSArrayBuffer::GetBackingStore(JSArrayBuffer *this)

{
  Heap::LookupBackingStore(*(ulong *)this & 0xffffffff00000000 | 0x8850);
  return;
}

