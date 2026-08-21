
/* v8::internal::wasm::WasmInterpreter::Thread::GetFrameCount() */

int __thiscall v8::internal::wasm::WasmInterpreter::Thread::GetFrameCount(Thread *this)

{
  return (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3) * -0x55555555;
}

