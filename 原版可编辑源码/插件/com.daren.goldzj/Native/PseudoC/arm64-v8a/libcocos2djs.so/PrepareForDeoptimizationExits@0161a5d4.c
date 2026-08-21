
/* v8::internal::compiler::CodeGenerator::PrepareForDeoptimizationExits(int) */

void __thiscall
v8::internal::compiler::CodeGenerator::PrepareForDeoptimizationExits
          (CodeGenerator *this,int param_1)

{
  ConstantPool::Check((ConstantPool *)(this + 0x208),1,0,0);
  Assembler::CheckVeneerPool((Assembler *)(this + 0xd0),false,false,(long)param_1 * 4);
  return;
}

