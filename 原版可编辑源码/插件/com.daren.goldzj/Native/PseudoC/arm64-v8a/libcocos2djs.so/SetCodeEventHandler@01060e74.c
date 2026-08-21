
/* v8::internal::Logger::SetCodeEventHandler(unsigned int, void (*)(v8::JitCodeEvent const*)) */

void __thiscall
v8::internal::Logger::SetCodeEventHandler
          (Logger *this,uint param_1,_func_void_JitCodeEvent_ptr *param_2)

{
  Mutex *this_00;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  WasmEngine *this_01;
  CodeEventListener *pCVar4;
  undefined4 *puVar5;
  ulong extraout_x1;
  Isolate *pIVar6;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *this_02;
  CodeEventListener *local_28;
  
  if (*(CodeEventListener **)(this + 0x48) != (CodeEventListener *)0x0) {
    CodeEventDispatcher::RemoveListener
              (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),
               *(CodeEventListener **)(this + 0x48));
    plVar3 = *(long **)(this + 0x48);
    *(undefined8 *)(this + 0x48) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (param_2 != (_func_void_JitCodeEvent_ptr *)0x0) {
    this_01 = *(WasmEngine **)(*(Isolate **)(this + 8) + 0xc770);
    if (this_01 != (WasmEngine *)0x0) {
      wasm::WasmEngine::EnableCodeLogging(this_01,*(Isolate **)(this + 8));
    }
    pCVar4 = operator_new(0x48);
    *(undefined8 *)(pCVar4 + 8) = *(undefined8 *)(this + 8);
    puVar5 = operator_new(0x204);
    *puVar5 = 0;
    *(undefined4 **)(pCVar4 + 0x10) = puVar5;
    *(_func_void_JitCodeEvent_ptr **)(pCVar4 + 0x18) = param_2;
    *(undefined ***)pCVar4 = &PTR__JitLogger_01cb21d0;
    base::Mutex::Mutex((Mutex *)(pCVar4 + 0x20));
    plVar3 = *(long **)(this + 0x48);
    *(CodeEventListener **)(this + 0x48) = pCVar4;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      pCVar4 = *(CodeEventListener **)(this + 0x48);
    }
    this_02 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                **)(*(long *)(this + 8) + 0xb6d8);
    this_00 = (Mutex *)(this_02 + 0x28);
    local_28 = pCVar4;
    base::Mutex::Lock(this_00);
    std::__ndk1::
    __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
    ::
    __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
              (this_02,&local_28,&local_28);
    base::Mutex::Unlock(this_00);
    if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","result");
    }
    if ((param_1 & 1) != 0) {
      pIVar6 = *(Isolate **)(this + 8);
      uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
      lVar2 = *(long *)(pIVar6 + 0x95a8);
      *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
      ExistingCodeLogger::LogCodeObjects((ExistingCodeLogger *)(this + 0x70));
      ExistingCodeLogger::LogCompiledFunctions((ExistingCodeLogger *)(this + 0x70));
      if (pIVar6 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
        *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
        if (*(long *)(pIVar6 + 0x95a8) != lVar2) {
          *(long *)(pIVar6 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar6);
        }
      }
    }
  }
  return;
}

