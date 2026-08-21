
/* v8::internal::JsonParser<unsigned char>::UpdatePointers() */

void __thiscall
v8::internal::JsonParser<unsigned_char>::UpdatePointers(JsonParser<unsigned_char> *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x40);
  lVar1 = **(long **)(this + 0x28) + 0xb;
  if (lVar2 != lVar1) {
    *(long *)(this + 0x40) = lVar1;
    *(long *)(this + 0x30) = lVar1 + (*(long *)(this + 0x30) - lVar2);
    *(long *)(this + 0x38) = lVar1 + (*(long *)(this + 0x38) - lVar2);
  }
  return;
}

