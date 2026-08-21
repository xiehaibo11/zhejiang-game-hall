
/* v8::internal::Heap::AddGCPrologueCallback(void (*)(v8::Isolate*, v8::GCType, v8::GCCallbackFlags,
   void*), v8::GCType, void*) */

void __thiscall
v8::internal::Heap::AddGCPrologueCallback
          (Heap *this,undefined8 param_1,undefined4 param_3,void *param_4)

{
  undefined8 *puVar1;
  void *local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  puVar1 = *(undefined8 **)(this + 0x618);
  if (puVar1 < *(undefined8 **)(this + 0x620)) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = param_3;
    puVar1[2] = param_4;
    *(long *)(this + 0x618) = *(long *)(this + 0x618) + 0x18;
  }
  else {
    local_28 = param_4;
    local_1c = param_3;
    local_18 = param_1;
    std::__ndk1::
    vector<v8::internal::Heap::GCCallbackTuple,std::__ndk1::allocator<v8::internal::Heap::GCCallbackTuple>>
    ::
    __emplace_back_slow_path<void(*&)(v8::Isolate*,v8::GCType,v8::GCCallbackFlags,void*),v8::GCType&,void*&>
              ((vector<v8::internal::Heap::GCCallbackTuple,std::__ndk1::allocator<v8::internal::Heap::GCCallbackTuple>>
                *)(this + 0x610),(_func_void_Isolate_ptr_GCType_GCCallbackFlags_void_ptr *)&local_18
               ,(GCType *)&local_1c,&local_28);
  }
  return;
}

