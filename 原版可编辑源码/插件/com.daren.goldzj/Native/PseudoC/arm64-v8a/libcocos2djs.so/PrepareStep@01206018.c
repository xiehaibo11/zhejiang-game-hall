
/* v8::internal::WasmDebugInfo::PrepareStep(v8::internal::StepAction) */

void __thiscall v8::internal::WasmDebugInfo::PrepareStep(WasmDebugInfo *this,undefined1 param_2)

{
  undefined4 uVar1;
  Thread *this_00;
  long lVar2;
  
  lVar2 = **(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                (ulong)*(uint *)(*(ulong *)this + 7)) + 3) + 0x18);
  *(undefined1 *)(lVar2 + 0x58) = param_2;
  this_00 = (Thread *)wasm::WasmInterpreter::GetThread((WasmInterpreter *)(lVar2 + 0x10),0);
  uVar1 = wasm::WasmInterpreter::Thread::GetFrameCount(this_00);
  *(undefined4 *)(lVar2 + 0x5c) = uVar1;
  return;
}

