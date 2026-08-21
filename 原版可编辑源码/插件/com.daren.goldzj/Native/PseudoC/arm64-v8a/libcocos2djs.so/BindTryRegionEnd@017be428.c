
/* v8::internal::interpreter::BytecodeArrayWriter::BindTryRegionEnd(v8::internal::interpreter::HandlerTableBuilder*,
   int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BindTryRegionEnd
          (BytecodeArrayWriter *this,HandlerTableBuilder *param_1,int param_2)

{
  this[0x78] = (BytecodeArrayWriter)0xb6;
  HandlerTableBuilder::SetTryRegionEnd
            (param_1,param_2,*(long *)(this + 0x18) - *(long *)(this + 0x10));
  return;
}

