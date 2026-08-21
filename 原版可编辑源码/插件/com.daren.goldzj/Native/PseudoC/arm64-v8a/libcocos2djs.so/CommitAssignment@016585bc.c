
/* v8::internal::compiler::RegisterAllocationData::PhiMapValue::CommitAssignment(v8::internal::compiler::InstructionOperand
   const&) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::PhiMapValue::CommitAssignment
          (PhiMapValue *this,InstructionOperand *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  for (puVar2 = *(undefined8 **)(this + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    *(undefined8 *)*puVar2 = *(undefined8 *)param_1;
  }
  return;
}

