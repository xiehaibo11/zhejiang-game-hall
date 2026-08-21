
/* v8::internal::WasmDebugInfo::PrepareStepIn(v8::internal::Handle<v8::internal::WasmDebugInfo>,
   int) */

void v8::internal::WasmDebugInfo::PrepareStepIn(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  Thread *this;
  int local_24;
  
  local_24 = param_2;
  lVar2 = FUN_01205bac((ulong)*(uint *)(param_1 + 4) << 0x20,param_1);
  RedirectToInterpreter(param_1,&local_24,1);
  wasm::WasmInterpreter::PrepareStepIn
            ((WasmInterpreter *)(lVar2 + 0x10),
             (WasmFunction *)(*(long *)(*(long *)(lVar2 + 8) + 0x88) + (long)local_24 * 0x20));
  *(undefined1 *)(lVar2 + 0x58) = 2;
  this = (Thread *)wasm::WasmInterpreter::GetThread((WasmInterpreter *)(lVar2 + 0x10),0);
  uVar1 = wasm::WasmInterpreter::Thread::GetFrameCount(this);
  *(undefined4 *)(lVar2 + 0x5c) = uVar1;
  return;
}

