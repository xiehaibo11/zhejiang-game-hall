
/* v8::internal::interpreter::BytecodeArrayBuilder::Bind(v8::internal::interpreter::BytecodeJumpTable*,
   int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Bind
          (BytecodeArrayBuilder *this,BytecodeJumpTable *param_1,int param_2)

{
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
  }
  BytecodeArrayWriter::BindJumpTableEntry((BytecodeArrayWriter *)(this + 0x110),param_1,param_2);
  return this;
}

