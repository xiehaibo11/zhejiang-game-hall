
/* v8::internal::StartupDeserializer::DeserializeInto(v8::internal::Isolate*) */

void __thiscall
v8::internal::StartupDeserializer::DeserializeInto(StartupDeserializer *this,Isolate *param_1)

{
  Heap *this_00;
  ulong uVar1;
  Logger *this_01;
  long lVar2;
  
  Deserializer::Initialize((Deserializer *)this,param_1);
  uVar1 = DeserializerAllocator::ReserveSpace((DeserializerAllocator *)(this + 0x148));
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory(param_1,"StartupDeserializer",false);
  }
  this_00 = (Heap *)(param_1 + 0x8850);
  Heap::IterateSmiRoots(this_00,(RootVisitor *)this);
  Heap::IterateStrongRoots(this_00,this,6);
  SerializerDeserializer::Iterate(param_1,(RootVisitor *)this);
  Heap::IterateWeakRoots(this_00,this,6);
  Deserializer::DeserializeDeferredObjects((Deserializer *)this);
  SerializerDeserializer::RestoreExternalReferenceRedirectors
            ((SerializerDeserializer *)this,(vector *)(this + 0xd0));
  SerializerDeserializer::RestoreExternalReferenceRedirectors
            ((SerializerDeserializer *)this,(vector *)(this + 0xe8));
  for (lVar2 = *(long *)(*(long *)(*(long *)(this + 0x50) + 0x8948) + 0x20); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0xe0)) {
    FlushInstructionCache
              (*(void **)(lVar2 + 0x20),*(long *)(lVar2 + 0x28) - (long)*(void **)(lVar2 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x8e38) = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0x8e40) == 0) {
    *(undefined8 *)(param_1 + 0x8e40) = *(undefined8 *)(param_1 + 0xa0);
  }
  param_1[0x9e08] = (Isolate)0x1;
  if (FLAG_trace_maps != '\0') {
    this_01 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar1 = Logger::is_logging(this_01);
    if ((uVar1 & 1) != 0) {
      Logger::LogAllMaps(this_01);
    }
  }
  if ((FLAG_rehash_snapshot != '\0') && (this[0x251] != (StartupDeserializer)0x0)) {
    Deserializer::Rehash((Deserializer *)this);
    return;
  }
  return;
}

