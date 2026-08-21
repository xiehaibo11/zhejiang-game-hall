
/* v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensionsSlowPath(unsigned int) */

Environment * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::CheckContextExtensionsSlowPath
          (BytecodeGraphBuilder *this,uint param_1)

{
  Environment *this_00;
  Operator *pOVar1;
  Node *pNVar2;
  undefined8 uVar3;
  BytecodeLivenessState *pBVar4;
  ulong uVar5;
  Environment *pEVar6;
  Environment *pEVar7;
  Node *local_38;
  
  if (param_1 == 0) {
    pEVar6 = (Environment *)0x0;
  }
  else {
    uVar5 = 0;
    pEVar6 = (Environment *)0x0;
    do {
      pOVar1 = (Operator *)
               JSOperatorBuilder::HasContextExtension
                         (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar5);
      pNVar2 = (Node *)MakeNode(this,pOVar1,0,(Node **)0x0,false);
      pOVar1 = (Operator *)
               CommonOperatorBuilder::Branch
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),0,1);
      local_38 = pNVar2;
      MakeNode(this,pOVar1,1,&local_38,false);
      uVar3 = Environment::Copy(*(Environment **)(this + 0xa8));
      pOVar1 = (Operator *)
               CommonOperatorBuilder::IfTrue
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
      MakeNode(this,pOVar1,0,(Node **)0x0,false);
      pEVar6 = (Environment *)CheckContextExtensionAtDepth(this,pEVar6,(uint)uVar5);
      pEVar7 = *(Environment **)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = uVar3;
      pOVar1 = (Operator *)
               CommonOperatorBuilder::IfFalse
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8));
      MakeNode(this,pOVar1,0,(Node **)0x0,false);
      this_00 = *(Environment **)(this + 0xa8);
      pBVar4 = (BytecodeLivenessState *)
               BytecodeAnalysis::GetInLivenessFor
                         (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
      Environment::Merge(this_00,pEVar7,pBVar4);
      uVar5 = uVar5 + 1;
      this[0x160] = (BytecodeGraphBuilder)0x1;
    } while (param_1 != uVar5);
  }
  return pEVar6;
}

