
/* v8::internal::Deserializer::Rehash() */

void __thiscall v8::internal::Deserializer::Rehash(Deserializer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  puVar2 = *(undefined8 **)(this + 0x260);
  for (puVar1 = *(undefined8 **)(this + 600); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    local_18 = *puVar1;
    HeapObject::RehashBasedOnMap(&local_18,*(long *)(this + 0x50) + 0x80);
  }
  return;
}

