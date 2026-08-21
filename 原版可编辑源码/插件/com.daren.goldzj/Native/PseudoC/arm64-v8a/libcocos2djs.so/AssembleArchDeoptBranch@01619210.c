
/* v8::internal::compiler::CodeGenerator::AssembleArchDeoptBranch(v8::internal::compiler::Instruction*,
   v8::internal::compiler::BranchInfo*) */

void v8::internal::compiler::CodeGenerator::AssembleArchDeoptBranch
               (Instruction *param_1,BranchInfo *param_2)

{
  BranchInfo *in_x2;
  
  AssembleArchBranch((CodeGenerator *)param_1,(Instruction *)param_2,in_x2);
  return;
}

