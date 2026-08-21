
/* v8::internal::interpreter::BytecodeArrayBuilder::MarkTryBegin(int,
   v8::internal::interpreter::Register) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::MarkTryBegin
          (BytecodeArrayBuilder *this,int param_1,undefined4 param_3)

{
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
    BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
  }
  BytecodeArrayWriter::BindTryRegionStart
            ((BytecodeArrayWriter *)(this + 0x110),(HandlerTableBuilder *)(this + 0xd8),param_1);
  HandlerTableBuilder::SetContextRegister((HandlerTableBuilder *)(this + 0xd8),param_1,param_3);
  return this;
}

