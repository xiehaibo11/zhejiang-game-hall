
/* v8::internal::ReadOnlyDeserializer::DeserializeInto(v8::internal::Isolate*) */

void __thiscall
v8::internal::ReadOnlyDeserializer::DeserializeInto(ReadOnlyDeserializer *this,Isolate *param_1)

{
  ulong uVar1;
  int *piVar2;
  ReadOnlyHeap *this_00;
  Isolate *local_18;
  
  Deserializer::Initialize((Deserializer *)this,param_1);
  uVar1 = DeserializerAllocator::ReserveSpace((DeserializerAllocator *)(this + 0x148));
  if ((uVar1 & 1) != 0) {
    this_00 = *(ReadOnlyHeap **)(param_1 + 0x9478);
    local_18 = param_1 + 0x80;
    ReadOnlyRoots::Iterate((ReadOnlyRoots *)&local_18,(RootVisitor *)this);
    ReadOnlySpace::RepairFreeListsAfterDeserialization(*(ReadOnlySpace **)(this_00 + 8));
    do {
      piVar2 = (int *)ReadOnlyHeap::ExtendReadOnlyObjectCache(this_00);
      (**(code **)(*(long *)this + 0x10))(this,0x13,0,piVar2,piVar2 + 2);
    } while (*piVar2 != *(int *)(local_18 + 0x20));
    Deserializer::DeserializeDeferredObjects((Deserializer *)this);
    if ((FLAG_rehash_snapshot != '\0') && (this[0x251] != (ReadOnlyDeserializer)0x0)) {
      Heap::InitializeHashSeed((Heap *)(*(long *)(this + 0x50) + 0x8850));
      Deserializer::Rehash((Deserializer *)this);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory(param_1,"ReadOnlyDeserializer",false);
}

