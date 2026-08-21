
/* v8::internal::compiler::CodeGenerator::AssembleBlock(v8::internal::compiler::InstructionBlock
   const*) */

undefined8 __thiscall
v8::internal::compiler::CodeGenerator::AssembleBlock(CodeGenerator *this,InstructionBlock *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 < *(int *)(param_1 + 0x74)) {
    do {
      uVar1 = AssembleInstruction(this,iVar2,param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x74));
  }
  return 0;
}

