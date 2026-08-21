
/* v8::internal::interpreter::BytecodeGenerator::GetRegisterForLocalVariable(v8::internal::Variable*)
    */

undefined4 __thiscall
v8::internal::interpreter::BytecodeGenerator::GetRegisterForLocalVariable
          (BytecodeGenerator *this,Variable *param_1)

{
  undefined4 uVar1;
  
  uVar1 = BytecodeArrayBuilder::Local
                    ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 0x20));
  return uVar1;
}

