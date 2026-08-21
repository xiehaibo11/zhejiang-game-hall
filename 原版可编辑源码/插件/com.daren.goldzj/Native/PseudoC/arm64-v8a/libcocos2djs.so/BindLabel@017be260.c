
/* v8::internal::interpreter::BytecodeArrayWriter::BindLabel(v8::internal::interpreter::BytecodeLabel*)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BindLabel
          (BytecodeArrayWriter *this,BytecodeLabel *param_1)

{
  PatchJump(this,*(long *)(this + 0x18) - *(long *)(this + 0x10),*(ulong *)(param_1 + 8));
  *param_1 = (BytecodeLabel)0x1;
  this[0x78] = (BytecodeArrayWriter)0xb6;
  this[0x8a] = (BytecodeArrayWriter)0x0;
  return;
}

