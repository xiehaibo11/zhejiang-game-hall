
/* v8::internal::interpreter::BytecodeArrayBuilder::MarkTryEnd(int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::MarkTryEnd(BytecodeArrayBuilder *this,int param_1)

{
  BytecodeArrayWriter::BindTryRegionEnd
            ((BytecodeArrayWriter *)(this + 0x110),(HandlerTableBuilder *)(this + 0xd8),param_1);
  return this;
}

