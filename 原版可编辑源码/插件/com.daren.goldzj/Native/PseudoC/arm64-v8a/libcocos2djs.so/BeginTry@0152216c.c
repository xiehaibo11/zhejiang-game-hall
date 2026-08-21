
/* v8::internal::interpreter::TryFinallyBuilder::BeginTry(v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::TryFinallyBuilder::BeginTry(TryFinallyBuilder *this,undefined4 param_2)

{
  BytecodeArrayBuilder::MarkTryBegin
            (*(BytecodeArrayBuilder **)(this + 8),*(undefined4 *)(this + 0x10),param_2);
  return;
}

