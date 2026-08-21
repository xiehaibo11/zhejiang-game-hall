
/* v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensionAtDepth(v8::internal::compiler::BytecodeGraphBuilder::Environment*,
   unsigned int) */

Environment * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensionAtDepth
          (BytecodeGraphBuilder *this,Environment *param_1,uint param_2)

{
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  BytecodeLivenessState *pBVar4;
  Environment *pEVar5;
  Node *local_40;
  undefined8 uStack_38;
  
  pOVar1 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),(ulong)param_2,2,false
                     );
  pNVar2 = (Node *)MakeNode(this,pOVar1,0,(Node **)0x0,false);
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::ReferenceEqual
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  uStack_38 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  local_40 = pNVar2;
  pNVar2 = (Node *)MakeNode(this,pOVar1,2,&local_40,false);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Branch
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,1);
  local_40 = pNVar2;
  MakeNode(this,pOVar1,1,&local_40,false);
  uVar3 = Environment::Copy(*(Environment **)(this + 0xa8));
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar1,0,(Node **)0x0,false);
  pEVar5 = *(Environment **)(this + 0xa8);
  if (param_1 == (Environment *)0x0) {
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),1)
    ;
    MakeNode(this,pOVar1,0,(Node **)0x0,true);
  }
  else {
    pBVar4 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor
                       (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
    Environment::Merge(param_1,pEVar5,pBVar4);
    pEVar5 = param_1;
  }
  *(undefined8 *)(this + 0xa8) = uVar3;
  pOVar1 = (Operator *)
           CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
  MakeNode(this,pOVar1,0,(Node **)0x0,false);
  return pEVar5;
}

