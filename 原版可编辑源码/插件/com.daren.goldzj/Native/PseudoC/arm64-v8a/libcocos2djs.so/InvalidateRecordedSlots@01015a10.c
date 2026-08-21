
/* v8::internal::MemoryChunk::InvalidateRecordedSlots(v8::internal::HeapObject) */

void __thiscall
v8::internal::MemoryChunk::InvalidateRecordedSlots(MemoryChunk *this,undefined8 param_2)

{
  if ((1 < *(int *)(*(long *)(*(long *)(this + 0x18) + 0x828) + 0x58)) &&
     (*(char *)(*(long *)(*(long *)(this + 0x18) + 0x828) + 0x5c) != '\0')) {
    RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)1>(this,param_2);
  }
  if ((FLAG_always_promote_young_mc != '\0') && (*(long *)(this + 0x30) == 0)) {
    return;
  }
  RegisterObjectWithInvalidatedSlots<(v8::internal::RememberedSetType)0>(this,param_2);
  return;
}

