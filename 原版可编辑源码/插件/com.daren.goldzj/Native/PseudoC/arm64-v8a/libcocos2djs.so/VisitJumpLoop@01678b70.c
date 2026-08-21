
/* v8::internal::compiler::BytecodeGraphBuilder::VisitJumpLoop() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitJumpLoop(BytecodeGraphBuilder *this)

{
  int iVar1;
  
  iVar1 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                    ((BytecodeArrayAccessor *)(this + 0x88));
  MergeIntoSuccessorEnvironment(this,iVar1);
  return;
}

