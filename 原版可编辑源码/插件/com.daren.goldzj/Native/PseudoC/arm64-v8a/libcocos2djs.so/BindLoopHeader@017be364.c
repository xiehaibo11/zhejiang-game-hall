
/* v8::internal::interpreter::BytecodeArrayWriter::BindLoopHeader(v8::internal::interpreter::BytecodeLoopHeader*)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BindLoopHeader
          (BytecodeArrayWriter *this,BytecodeLoopHeader *param_1)

{
  *(long *)param_1 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  this[0x78] = (BytecodeArrayWriter)0xb6;
  this[0x8a] = (BytecodeArrayWriter)0x0;
  return;
}

