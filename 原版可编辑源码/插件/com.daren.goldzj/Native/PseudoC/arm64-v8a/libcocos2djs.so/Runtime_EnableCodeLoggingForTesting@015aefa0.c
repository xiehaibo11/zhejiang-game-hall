
/* v8::internal::Runtime_EnableCodeLoggingForTesting(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_EnableCodeLoggingForTesting(int param_1,ulong *param_2,Isolate *param_3)

{
  Mutex *this;
  int iVar1;
  undefined8 uVar2;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *this_00;
  CodeEventListener *local_18;
  
  if (TracingFlags::runtime_stats == 0) {
    if (((DAT_01d47780 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d47780), iVar1 != 0)) {
      DAT_01d47778 = &PTR__CodeEventListener_01cc93f0;
      __cxa_guard_release(&DAT_01d47780);
    }
    wasm::WasmEngine::EnableCodeLogging(*(WasmEngine **)(param_3 + 0xc770),param_3);
    this_00 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                **)(param_3 + 0xb6d8);
    local_18 = (CodeEventListener *)&DAT_01d47778;
    this = (Mutex *)(this_00 + 0x28);
    base::Mutex::Lock(this);
    std::__ndk1::
    __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
    ::
    __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
              (this_00,&local_18,&local_18);
    base::Mutex::Unlock(this);
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar2 = FUN_015af074(param_1,param_2,param_3);
  return uVar2;
}

