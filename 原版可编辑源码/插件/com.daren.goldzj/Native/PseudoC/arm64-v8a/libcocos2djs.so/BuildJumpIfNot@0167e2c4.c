
/* v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfNot(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildJumpIfNot
          (BytecodeGraphBuilder *this,Node *param_1)

{
  int iVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *local_28;
  
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Branch
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,2);
  local_28 = param_1;
  MakeNode(this,pOVar2,1,&local_28,false);
  uVar3 = Environment::Copy(*(Environment **)(this + 0xa8));
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar2,0,(Node **)0x0,false);
  iVar1 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                    ((BytecodeArrayAccessor *)(this + 0x88));
  MergeIntoSuccessorEnvironment(this,iVar1);
  *(undefined8 *)(this + 0xa8) = uVar3;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar2,0,(Node **)0x0,false);
  return;
}

