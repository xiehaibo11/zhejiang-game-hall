
/* v8::internal::WasmDebugInfo::SetBreakpoint(v8::internal::Handle<v8::internal::WasmDebugInfo>,
   int, int) */

void v8::internal::WasmDebugInfo::SetBreakpoint(long param_1,int param_2,int param_3)

{
  long lVar1;
  int local_14;
  
  local_14 = param_2;
  lVar1 = FUN_01205bac((ulong)*(uint *)(param_1 + 4) << 0x20,param_1);
  RedirectToInterpreter(param_1,&local_14,1);
  wasm::WasmInterpreter::SetBreakpoint
            ((WasmInterpreter *)(lVar1 + 0x10),
             (WasmFunction *)(*(long *)(*(long *)(lVar1 + 8) + 0x88) + (long)local_14 * 0x20),
             (long)param_3,true);
  return;
}

