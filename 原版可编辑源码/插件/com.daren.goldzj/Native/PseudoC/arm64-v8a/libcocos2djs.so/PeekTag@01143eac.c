
/* v8::internal::ValueDeserializer::PeekTag() const */

ulong __thiscall v8::internal::ValueDeserializer::PeekTag(ValueDeserializer *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 0x10);
  do {
    if (*(byte **)(this + 0x18) <= pbVar2) {
      return 0;
    }
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while ((ulong)bVar1 == 0);
  return (ulong)bVar1 << 8 | 1;
}

