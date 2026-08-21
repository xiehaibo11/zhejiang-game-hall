
/* v8::internal::interpreter::TryFinallyBuilder::EndTry() */

void __thiscall v8::internal::interpreter::TryFinallyBuilder::EndTry(TryFinallyBuilder *this)

{
  BytecodeArrayBuilder::MarkTryEnd(*(BytecodeArrayBuilder **)(this + 8),*(int *)(this + 0x10));
  return;
}

