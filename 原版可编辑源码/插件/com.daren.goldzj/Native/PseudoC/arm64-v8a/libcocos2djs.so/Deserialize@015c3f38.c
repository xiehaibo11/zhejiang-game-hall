
/* v8::internal::PartialDeserializer::Deserialize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSGlobalProxy>, v8::DeserializeInternalFieldsCallback) */

void v8::internal::PartialDeserializer::Deserialize
               (Deserializer *param_1,Isolate *param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong local_58;
  
  Deserializer::Initialize(param_1,param_2);
  uVar1 = DeserializerAllocator::ReserveSpace((DeserializerAllocator *)(param_1 + 0x148));
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory(param_2,"PartialDeserializer",false);
  }
  if (*(ulong **)(param_1 + 0x60) == *(ulong **)(param_1 + 0x68)) {
    local_58 = param_3;
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::HeapObject>const&>
              ((vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
                *)(param_1 + 0x58),(Handle *)&local_58);
  }
  else {
    **(ulong **)(param_1 + 0x60) = param_3;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
  }
  lVar3 = *(long *)(param_2 + 0x8948);
  lVar4 = *(long *)(lVar3 + 0x68);
  local_58 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,0x12,0,&local_58,&stack0xffffffffffffffb0);
  Deserializer::DeserializeDeferredObjects(param_1);
  DeserializeEmbedderFields(param_1,param_4,param_5);
  DeserializerAllocator::RegisterDeserializedObjectsForBlackAllocation
            ((DeserializerAllocator *)(param_1 + 0x148));
  if (lVar4 == *(long *)(lVar3 + 0x68)) {
    if ((FLAG_rehash_snapshot != '\0') && (param_1[0x251] != (Deserializer)0x0)) {
      Deserializer::Rehash(param_1);
    }
    Deserializer::LogNewMapEvents(param_1);
    uVar1 = local_58;
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_2 + 0x95a0);
      if (puVar2 == *(ulong **)(param_2 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_2);
      }
      *(ulong **)(param_2 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_2 + 0x95b8),local_58);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start_address == code_space->top()");
}

