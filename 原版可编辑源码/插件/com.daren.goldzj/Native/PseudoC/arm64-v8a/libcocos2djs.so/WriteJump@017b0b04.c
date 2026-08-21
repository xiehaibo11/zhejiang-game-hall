
/* v8::internal::interpreter::BytecodeArrayBuilder::WriteJump(v8::internal::interpreter::BytecodeNode*,
   v8::internal::interpreter::BytecodeLabel*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::WriteJump
          (BytecodeArrayBuilder *this,BytecodeNode *param_1,BytecodeLabel *param_2)

{
  if (this[0x1b0] != (BytecodeArrayBuilder)0x0) {
    if (param_1[0x20] == (BytecodeNode)0x0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x1b0);
    }
    else if ((this[0x1b0] == (BytecodeArrayBuilder)0x2) && (param_1[0x20] == (BytecodeNode)0x1)) {
      param_1[0x20] = (BytecodeNode)0x2;
    }
    this[0x1b0] = (BytecodeArrayBuilder)0x0;
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  BytecodeArrayWriter::WriteJump((BytecodeArrayWriter *)(this + 0x110),param_1,param_2);
  return;
}

