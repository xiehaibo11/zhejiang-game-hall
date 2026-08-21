
/* std::__ndk1::set<v8::internal::HeapObject, v8::internal::Object::Comparer,
   std::__ndk1::allocator<v8::internal::HeapObject> >*
   v8::internal::MemoryChunk::AllocateInvalidatedSlots<(v8::internal::RememberedSetType)1>() */

set * __thiscall
v8::internal::MemoryChunk::AllocateInvalidatedSlots<(v8::internal::RememberedSetType)1>
          (MemoryChunk *this)

{
  set *psVar1;
  
  psVar1 = operator_new(0x18);
  *(undefined8 *)(psVar1 + 8) = 0;
  *(undefined8 *)(psVar1 + 0x10) = 0;
  *(set **)psVar1 = psVar1 + 8;
  *(set **)(this + 0x90) = psVar1;
  return psVar1;
}

