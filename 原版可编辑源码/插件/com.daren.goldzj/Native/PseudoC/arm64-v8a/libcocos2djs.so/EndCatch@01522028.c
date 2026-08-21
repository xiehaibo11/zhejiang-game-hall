
/* v8::internal::interpreter::TryCatchBuilder::EndCatch() */

void __thiscall v8::internal::interpreter::TryCatchBuilder::EndCatch(TryCatchBuilder *this)

{
  BytecodeArrayBuilder::Bind(*(BytecodeArrayBuilder **)(this + 8),(BytecodeLabel *)(this + 0x18));
  return;
}

