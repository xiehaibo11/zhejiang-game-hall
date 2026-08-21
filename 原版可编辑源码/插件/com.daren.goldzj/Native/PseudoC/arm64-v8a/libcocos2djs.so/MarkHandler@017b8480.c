
/* v8::internal::interpreter::BytecodeArrayBuilder::MarkHandler(int,
   v8::internal::HandlerTable::CatchPrediction) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::MarkHandler
          (BytecodeArrayBuilder *this,int param_1,undefined4 param_3)

{
  BytecodeArrayWriter::BindHandlerTarget
            ((BytecodeArrayWriter *)(this + 0x110),(HandlerTableBuilder *)(this + 0xd8),param_1);
  HandlerTableBuilder::SetPrediction((HandlerTableBuilder *)(this + 0xd8),param_1,param_3);
  return this;
}

