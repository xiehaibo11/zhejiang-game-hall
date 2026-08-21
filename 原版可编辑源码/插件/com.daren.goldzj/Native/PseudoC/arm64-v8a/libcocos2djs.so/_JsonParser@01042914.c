
/* v8::internal::JsonParser<unsigned char>::~JsonParser() */

void __thiscall
v8::internal::JsonParser<unsigned_char>::~JsonParser(JsonParser<unsigned_char> *this)

{
  if ((*(ushort *)
        ((**(ulong **)(this + 0x28) & 0xffffffff00000000 |
         (ulong)*(uint *)(**(ulong **)(this + 0x28) - 1)) + 7) & 7) == 2) {
    return;
  }
  Heap::RemoveGCEpilogueCallback((Heap *)(*(long *)this + 0x8850),UpdatePointersCallback,this);
  return;
}

