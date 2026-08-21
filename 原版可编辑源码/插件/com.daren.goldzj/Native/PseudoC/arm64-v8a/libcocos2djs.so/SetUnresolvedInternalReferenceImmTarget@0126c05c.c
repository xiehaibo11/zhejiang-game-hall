
/* v8::internal::Instruction::SetUnresolvedInternalReferenceImmTarget(v8::internal::AssemblerOptions
   const&, v8::internal::Instruction*) */

void v8::internal::Instruction::SetUnresolvedInternalReferenceImmTarget
               (AssemblerOptions *param_1,Instruction *param_2)

{
  long lVar1;
  undefined **local_1d0 [47];
  Assembler *local_58;
  BlockScope aBStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PatchingAssembler::PatchingAssembler
            ((PatchingAssembler *)local_1d0,(AssemblerOptions *)param_2,(uchar *)param_1,2);
  Assembler::brk((int)local_1d0);
  Assembler::brk((int)local_1d0);
  local_1d0[0] = &PTR__PatchingAssembler_01cbcf38;
  Assembler::EndBlockVeneerPool(local_58);
  ConstantPool::BlockScope::~BlockScope(aBStack_50);
  Assembler::~Assembler((Assembler *)local_1d0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

