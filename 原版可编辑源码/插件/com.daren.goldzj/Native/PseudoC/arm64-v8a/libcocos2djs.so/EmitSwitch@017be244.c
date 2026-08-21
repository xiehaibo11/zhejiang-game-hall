
/* v8::internal::interpreter::BytecodeArrayWriter::EmitSwitch(v8::internal::interpreter::BytecodeNode*,
   v8::internal::interpreter::BytecodeJumpTable*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::EmitSwitch
          (BytecodeArrayWriter *this,BytecodeNode *param_1,BytecodeJumpTable *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  if (1 < (byte)param_1[0x1c]) {
    lVar1 = lVar1 + 1;
  }
  *(long *)(param_2 + 8) = lVar1;
  EmitBytecode(this,param_1);
  return;
}

