
/* v8::internal::wasm::JSToWasmWrapperCompilationUnit::Execute() */

void __thiscall
v8::internal::wasm::JSToWasmWrapperCompilationUnit::Execute(JSToWasmWrapperCompilationUnit *this)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (DAT_01d47870 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d47870 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.wasm");
  }
  pbVar1 = DAT_01d47870;
  local_60 = (byte **)0x0;
  if ((*DAT_01d47870 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"CompileJSToWasmWrapper",0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_60 = &local_58;
    local_50 = "CompileJSToWasmWrapper";
    local_58 = pbVar1;
    local_48 = uVar4;
  }
  iVar2 = OptimizedCompilationJob::ExecuteJob
                    (*(OptimizedCompilationJob **)(this + 0x10),(RuntimeCallStats *)0x0);
  if (iVar2 == 0) {
    if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
      plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_58,local_50,local_48);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","status == CompilationJob::SUCCEEDED");
}

