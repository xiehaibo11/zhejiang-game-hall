
/* v8::internal::wasm::WasmInterpreter::Run() */

void __thiscall v8::internal::wasm::WasmInterpreter::Run(WasmInterpreter *this)

{
  InterpreterCode *pIVar1;
  
  pIVar1 = *(InterpreterCode **)(*(long *)(this + 0x40) + 0x50);
  *(undefined4 *)(pIVar1 + 0x58) = 1;
  ThreadImpl::Execute(pIVar1,*(ulong *)(*(long *)(pIVar1 + 0x40) + -0x18),
                      (int)*(undefined8 *)(*(long *)(pIVar1 + 0x40) + -0x10));
  return;
}

