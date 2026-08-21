
/* v8::internal::interpreter::BytecodeArrayWriter::BindJumpTableEntry(v8::internal::interpreter::BytecodeJumpTable*,
   int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::BindJumpTableEntry
          (BytecodeArrayWriter *this,BytecodeJumpTable *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (*(int *)(this + 0x18) - *(int *)(this + 0x10)) - *(int *)(param_1 + 8);
  ConstantArrayBuilder::SetJumpTableSmi
            (*(ConstantArrayBuilder **)(this + 0x70),
             (*(long *)param_1 + (long)param_2) - (long)*(int *)(param_1 + 0x14),
             -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1);
  this[0x78] = (BytecodeArrayWriter)0xb6;
  this[0x8a] = (BytecodeArrayWriter)0x0;
  return;
}

