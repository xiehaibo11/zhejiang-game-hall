
/* v8::internal::JsonParser<unsigned short>::AdvanceToNonDecimal() */

void __thiscall
v8::internal::JsonParser<unsigned_short>::AdvanceToNonDecimal(JsonParser<unsigned_short> *this)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = *(ushort **)(this + 0x30);
  puVar2 = puVar1;
  for (; (puVar1 != *(ushort **)(this + 0x38) && (puVar2 = puVar1, *puVar1 - 0x30 < 10));
      puVar1 = puVar1 + 1) {
    puVar2 = *(ushort **)(this + 0x38);
  }
  *(ushort **)(this + 0x30) = puVar2;
  return;
}

