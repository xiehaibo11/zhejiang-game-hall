
/* v8::internal::ObjectDeserializer::DeserializeSharedFunctionInfo(v8::internal::Isolate*,
   v8::internal::SerializedCodeData const*, v8::internal::Handle<v8::internal::String>) */

undefined8
v8::internal::ObjectDeserializer::DeserializeSharedFunctionInfo
          (Isolate *param_1,SerializedCodeData *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_2c0;
  undefined **appuStack_2b8 [11];
  vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
  avStack_260 [8];
  undefined8 *local_258;
  undefined8 *puStack_250;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Deserializer::Deserializer<v8::internal::SerializedCodeData_const>
            ((Deserializer *)appuStack_2b8,param_2,true);
  appuStack_2b8[0] = &PTR__Deserializer_01cbb8c0;
  local_2c0 = param_3;
  if (local_258 == puStack_250) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::HeapObject>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::HeapObject>const&>
              (avStack_260,(Handle *)&local_2c0);
  }
  else {
    *local_258 = param_3;
    local_258 = local_258 + 1;
  }
  uVar2 = Deserialize((ObjectDeserializer *)appuStack_2b8,param_1);
  Deserializer::~Deserializer((Deserializer *)appuStack_2b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

