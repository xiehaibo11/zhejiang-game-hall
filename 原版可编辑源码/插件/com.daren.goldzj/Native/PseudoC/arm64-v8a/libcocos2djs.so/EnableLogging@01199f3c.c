
/* v8::internal::CpuProfiler::EnableLogging() */

void __thiscall v8::internal::CpuProfiler::EnableLogging(CpuProfiler *this)

{
  ProfilerListener *pPVar1;
  long *plVar2;
  Isolate *pIVar3;
  long lVar4;
  long lVar5;
  Logger *this_00;
  long *plVar6;
  
  if (*(long *)(this + 0x40) == 0) {
    if (*(long *)(this + 0x38) == 0) {
      pPVar1 = operator_new(0x38);
      ProfilerListener::ProfilerListener
                (pPVar1,*(undefined8 *)this,this + 0x48,*(undefined4 *)(this + 8));
      plVar2 = *(long **)(this + 0x38);
      *(ProfilerListener **)(this + 0x38) = pPVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = operator_new(0x10);
    lVar4 = *(long *)this;
    lVar5 = *(long *)(this + 0x38);
    *plVar2 = lVar4;
    plVar2[1] = lVar5;
    *(long *)(lVar4 + 0xb800) = *(long *)(lVar4 + 0xb800) + 1;
    *(undefined1 *)(*plVar2 + 0xb7fc) = 1;
    pIVar3 = (Isolate *)*plVar2;
    wasm::WasmEngine::EnableCodeLogging(*(WasmEngine **)(pIVar3 + 0xc770),pIVar3);
    this_00 = *(Logger **)(pIVar3 + 0x9558);
    Logger::AddCodeEventListener(this_00,(CodeEventListener *)plVar2[1]);
    if (FLAG_prof_browser_mode == '\0') {
      Logger::LogCodeObjects(this_00);
    }
    Logger::LogCompiledFunctions(this_00);
    Logger::LogAccessorCallbacks(this_00);
    plVar6 = *(long **)(this + 0x40);
    *(long **)(this + 0x40) = plVar2;
    if (plVar6 != (long *)0x0) {
      Logger::RemoveCodeEventListener(*(Logger **)(*plVar6 + 0x9558),(CodeEventListener *)plVar6[1])
      ;
      lVar4 = *(long *)(*plVar6 + 0xb800) + -1;
      *(long *)(*plVar6 + 0xb800) = lVar4;
      if (lVar4 == 0) {
        *(undefined1 *)(*plVar6 + 0xb7fc) = 0;
      }
      operator_delete(plVar6);
      return;
    }
  }
  return;
}

