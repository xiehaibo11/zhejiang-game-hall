
/* v8::internal::wasm::WasmEngine::ReportLiveCodeForGC(v8::internal::Isolate*,
   v8::internal::Vector<v8::internal::wasm::WasmCode*>) */

void v8::internal::wasm::WasmEngine::ReportLiveCodeForGC
               (WasmEngine *param_1,Isolate *param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  if (DAT_01d3fcb8 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fcb8 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.wasm");
  }
  pbVar1 = DAT_01d3fcb8;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3fcb8 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,0x58,pbVar1,"ReportLiveCodeForGC",0,0,0,0,0,0,0,&local_60,0);
    plVar2 = local_58;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_60;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_80 = &local_78;
    local_70 = "ReportLiveCodeForGC";
    local_78 = pbVar1;
    local_68 = uVar3;
  }
  if (FLAG_trace_wasm_code_gc != '\0') {
    PrintF("[wasm-gc] Isolate %d reporting %zu live code objects.\n",
           (ulong)*(uint *)(param_2 + 0x9480),param_4);
  }
  base::Mutex::Lock((Mutex *)(param_1 + 0x100));
  if ((*(long *)(param_1 + 0x1b8) != 0) &&
     (uVar4 = RemoveIsolateFromCurrentGC(param_1,param_2), (uVar4 & 1) != 0)) {
    Histogram::AddSample((int)*(undefined8 *)(param_2 + 0x9520) + 0x800);
    if (param_4 != 0) {
      param_4 = param_4 << 3;
      do {
        local_60 = (long *)*param_3;
        FUN_0120b648(*(long *)(param_1 + 0x1b8) + 0x28,&local_60);
        param_4 = param_4 + -8;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
    }
    PotentiallyFinishCurrentGC(param_1);
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x100));
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_78,local_70,local_68);
  }
  return;
}

