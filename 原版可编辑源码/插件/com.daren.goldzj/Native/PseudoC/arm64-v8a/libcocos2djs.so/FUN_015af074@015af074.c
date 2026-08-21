
undefined8 FUN_015af074(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  Mutex *this;
  byte *pbVar1;
  CodeEventListener *pCVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *this_00;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  CodeEventListener *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x22b);
  }
  if (DAT_01d47770 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47770 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d47770;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47770 & 5) != 0) {
    local_50 = (CodeEventListener *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar1,"V8.Runtime_Runtime_EnableCodeLoggingForTesting",0,0,0,0,0
                       ,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pCVar2 = local_50;
    local_50 = (CodeEventListener *)0x0;
    if (pCVar2 != (CodeEventListener *)0x0) {
      (**(code **)(*(long *)pCVar2 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_EnableCodeLoggingForTesting";
    local_98 = pbVar1;
    local_88 = uVar5;
  }
  if (((DAT_01d47780 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d47780), iVar3 != 0)) {
    DAT_01d47778 = &PTR__CodeEventListener_01cc93f0;
    __cxa_guard_release(&DAT_01d47780);
  }
  v8::internal::wasm::WasmEngine::EnableCodeLogging(*(WasmEngine **)(param_3 + 0xc770),param_3);
  this_00 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
              **)(param_3 + 0xb6d8);
  local_50 = (CodeEventListener *)&DAT_01d47778;
  this = (Mutex *)(this_00 + 0x28);
  v8::base::Mutex::Lock(this);
  std::__ndk1::
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  ::
  __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
            (this_00,&local_50,&local_50);
  v8::base::Mutex::Unlock(this);
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

