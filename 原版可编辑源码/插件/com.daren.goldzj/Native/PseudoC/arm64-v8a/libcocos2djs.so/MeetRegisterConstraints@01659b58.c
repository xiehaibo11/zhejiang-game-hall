
/* v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraints(v8::internal::compiler::InstructionBlock
   const*) */

void __thiscall
v8::internal::compiler::ConstraintBuilder::MeetRegisterConstraints
          (ConstraintBuilder *this,InstructionBlock *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar2 < iVar1) {
    do {
      MeetConstraintsBefore(this,iVar2);
      if (iVar2 - iVar1 != -1) {
        MeetConstraintsAfter(this,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar1);
  }
  MeetRegisterConstraintsForLastInstructionInBlock(this,param_1);
  return;
}

