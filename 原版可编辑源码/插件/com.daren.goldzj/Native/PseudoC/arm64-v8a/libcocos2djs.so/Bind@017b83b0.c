
/* v8::internal::interpreter::BytecodeArrayBuilder::Bind(v8::internal::interpreter::BytecodeLabel*)
    */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Bind
          (BytecodeArrayBuilder *this,BytecodeLabel *param_1)

{
  if (*(long *)(param_1 + 8) != -1) {
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
    }
    BytecodeArrayWriter::BindLabel((BytecodeArrayWriter *)(this + 0x110),param_1);
  }
  return this;
}

