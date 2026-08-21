
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupContextSlot(v8::internal::TypeofMode)
    */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupContextSlot
          (BytecodeGraphBuilder *this,int param_2)

{
  BytecodeArrayAccessor *this_00;
  Environment *pEVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Node *pNVar8;
  Node *pNVar9;
  BytecodeLivenessState *pBVar10;
  undefined4 uVar11;
  long lVar12;
  Environment *this_01;
  undefined8 uVar13;
  long *plVar14;
  JSGraph *this_02;
  Node *local_50 [2];
  
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand(this_00,2);
  lVar4 = CheckContextExtensions(this,uVar3);
  uVar5 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
  pOVar6 = (Operator *)
           JSOperatorBuilder::LoadContext
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),(ulong)uVar3,
                      uVar5 & 0xffffffff,false);
  lVar12 = *(long *)(this + 0xa8);
  uVar7 = MakeNode(this,pOVar6,0,(Node **)0x0,false);
  if ((ulong)(long)*(int *)(lVar12 + 0x5c) <
      (ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 3)) {
    *(undefined8 *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(lVar12 + 0x5c) * 8) = uVar7;
    if (lVar4 != 0) {
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Merge
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),1);
      MakeNode(this,pOVar6,0,(Node **)0x0,true);
      this_02 = *(JSGraph **)(this + 0x10);
      this_01 = *(Environment **)(this + 0xa8);
      *(long *)(this + 0xa8) = lVar4;
      uVar13 = *(undefined8 *)this;
      uVar7 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                        (this_00,0,*(Isolate **)(this_02 + 0x168));
      ObjectRef::ObjectRef((ObjectRef *)local_50,uVar13,uVar7,1);
      local_50[0] = (Node *)JSGraph::Constant(this_02,(ObjectRef *)local_50);
      uVar11 = 0x130;
      if (param_2 != 1) {
        uVar11 = 0x131;
      }
      pOVar6 = (Operator *)
               JSOperatorBuilder::CallRuntime
                         (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar11);
      pNVar8 = (Node *)MakeNode(this,pOVar6,1,local_50,false);
      plVar14 = *(long **)(this + 0xa8);
      lVar4 = *plVar14;
      uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar8);
      if ((uVar5 & 1) != 0) {
        iVar2 = *(int *)(lVar4 + 0x90);
        uVar7 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar4 + 0xa0),iVar2);
        pNVar9 = (Node *)Environment::Checkpoint(*(Environment **)(lVar4 + 0xa8),iVar2,0,uVar7);
        NodeProperties::ReplaceFrameStateInput(pNVar8,pNVar9);
      }
      if ((ulong)(plVar14[6] - plVar14[5] >> 3) <= (ulong)(long)*(int *)((long)plVar14 + 0x5c))
      goto LAB_0167b448;
      *(Node **)(plVar14[5] + (long)*(int *)((long)plVar14 + 0x5c) * 8) = pNVar8;
      pEVar1 = *(Environment **)(this + 0xa8);
      pBVar10 = (BytecodeLivenessState *)
                BytecodeAnalysis::GetOutLivenessFor
                          (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
      Environment::Merge(this_01,pEVar1,pBVar10);
      *(Environment **)(this + 0xa8) = this_01;
      this[0x160] = (BytecodeGraphBuilder)0x1;
    }
    return;
  }
LAB_0167b448:
                    /* WARNING: Subroutine does not return */
  abort();
}

