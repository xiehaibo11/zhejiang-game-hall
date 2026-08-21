
/* v8::internal::interpreter::TryFinallyBuilder::BeginHandler() */

void __thiscall v8::internal::interpreter::TryFinallyBuilder::BeginHandler(TryFinallyBuilder *this)

{
  BytecodeArrayBuilder::Bind(*(BytecodeArrayBuilder **)(this + 8),(BytecodeLabel *)(this + 0x18));
  BytecodeArrayBuilder::MarkHandler
            (*(BytecodeArrayBuilder **)(this + 8),*(undefined4 *)(this + 0x10),
             *(undefined4 *)(this + 0x14));
  return;
}

