
/* v8::internal::interpreter::TryCatchBuilder::BeginTry(v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::TryCatchBuilder::BeginTry(TryCatchBuilder *this,undefined4 param_2)

{
  BytecodeArrayBuilder::MarkTryBegin
            (*(BytecodeArrayBuilder **)(this + 8),*(undefined4 *)(this + 0x10),param_2);
  return;
}

