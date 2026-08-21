
/* v8::internal::WasmDebugInfo::NumInterpretedCalls() */

undefined8 __thiscall v8::internal::WasmDebugInfo::NumInterpretedCalls(WasmDebugInfo *this)

{
  uint uVar1;
  Thread *this_00;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(ulong *)this + 7);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  if ((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(uVar4 + 0xa0))) &&
     (lVar3 = **(long **)(*(long *)((uVar4 | uVar1) + 3) + 0x18), lVar3 != 0)) {
    this_00 = (Thread *)wasm::WasmInterpreter::GetThread((WasmInterpreter *)(lVar3 + 0x10),0);
    uVar2 = wasm::WasmInterpreter::Thread::NumInterpretedCalls(this_00);
    return uVar2;
  }
  return 0;
}

