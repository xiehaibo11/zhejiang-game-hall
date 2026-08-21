
/* v8::internal::interpreter::BytecodeArrayWriter::UpdateSourcePositionTable(v8::internal::interpreter::BytecodeNode
   const*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::UpdateSourcePositionTable
          (BytecodeArrayWriter *this,BytecodeNode *param_1)

{
  if (param_1[0x20] != (BytecodeNode)0x0) {
    SourcePositionTableBuilder::AddPosition
              ((SourcePositionTableBuilder *)(this + 0x38),
               (long)(*(int *)(this + 0x18) - *(int *)(this + 0x10)),
               (long)*(int *)(param_1 + 0x24) * 2 + 2U & 0xffff80007fffffff,
               param_1[0x20] == (BytecodeNode)0x2);
    return;
  }
  return;
}

