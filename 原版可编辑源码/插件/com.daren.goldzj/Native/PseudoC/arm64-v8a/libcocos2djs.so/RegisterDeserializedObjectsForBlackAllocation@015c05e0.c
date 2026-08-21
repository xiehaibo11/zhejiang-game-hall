
/* v8::internal::DeserializerAllocator::RegisterDeserializedObjectsForBlackAllocation() */

void __thiscall
v8::internal::DeserializerAllocator::RegisterDeserializedObjectsForBlackAllocation
          (DeserializerAllocator *this)

{
  Heap::RegisterDeserializedObjectsForBlackAllocation
            (*(Heap **)(this + 0x100),(vector *)this,(vector *)(this + 0xe8),(vector *)(this + 0xd0)
            );
  return;
}

