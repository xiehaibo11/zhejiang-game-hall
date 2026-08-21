
/* v8::internal::compiler::BytecodeGraphBuilder::BuildJump() */

void __thiscall v8::internal::compiler::BytecodeGraphBuilder::BuildJump(BytecodeGraphBuilder *this)

{
  int iVar1;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                    ((BytecodeArrayAccessor *)(this + 0x88));
  MergeIntoSuccessorEnvironment(this,iVar1);
  return;
}

