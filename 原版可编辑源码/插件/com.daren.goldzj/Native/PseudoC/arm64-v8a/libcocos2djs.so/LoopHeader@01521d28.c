
/* v8::internal::interpreter::LoopBuilder::LoopHeader() */

void __thiscall v8::internal::interpreter::LoopBuilder::LoopHeader(LoopBuilder *this)

{
  BytecodeArrayBuilder::Bind
            (*(BytecodeArrayBuilder **)(this + 8),(BytecodeLoopHeader *)(this + 0x48));
  return;
}

