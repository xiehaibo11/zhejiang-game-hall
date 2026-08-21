
/* v8::internal::wasm::WasmInterpreter::Thread::NumActivations() */

ulong __thiscall v8::internal::wasm::WasmInterpreter::Thread::NumActivations(Thread *this)

{
  return (ulong)(*(long *)(this + 0x80) - *(long *)(this + 0x78)) >> 4;
}

