
/* v8::internal::interpreter::BytecodeArrayWriter::BindHandlerTarget(v8::internal::interpreter::HandlerTableBuilder*,
   int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BindHandlerTarget
          (BytecodeArrayWriter *this,HandlerTableBuilder *param_1,int param_2)

{
  this[0x78] = (BytecodeArrayWriter)0xb6;
  this[0x8a] = (BytecodeArrayWriter)0x0;
  HandlerTableBuilder::SetHandlerTarget
            (param_1,param_2,*(long *)(this + 0x18) - *(long *)(this + 0x10));
  return;
}

