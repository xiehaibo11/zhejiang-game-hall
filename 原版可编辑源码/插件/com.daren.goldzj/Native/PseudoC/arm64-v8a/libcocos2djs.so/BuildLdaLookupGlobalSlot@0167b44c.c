
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupGlobalSlot(v8::internal::TypeofMode)
    */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLdaLookupGlobalSlot
          (BytecodeGraphBuilder *this,int param_2)

{
  BytecodeArrayAccessor *this_00;
  Environment *pEVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Node *pNVar10;
  BytecodeLivenessState *pBVar11;
  undefined8 uVar12;
  JSOperatorBuilder *pJVar13;
  Environment *this_01;
  JSGraph *this_02;
  long *plVar14;
  long lVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  Node *local_60 [2];
  
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar3 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand(this_00,2);
  lVar5 = CheckContextExtensions(this,uVar3);
  PrepareEagerCheckpoint(this);
  uVar12 = *(undefined8 *)this;
  uVar6 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    (this_00,0,*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  ObjectRef::ObjectRef((ObjectRef *)&local_88,uVar12,uVar6,0);
  uVar7 = ObjectRef::IsName((ObjectRef *)&local_88);
  if ((uVar7 & 1) != 0) {
    uVar4 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,1);
    local_70 = local_88;
    uStack_68 = uStack_80;
    FeedbackSource::FeedbackSource
              ((FeedbackSource *)local_60,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),
               uVar4);
    pJVar13 = *(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170);
    local_78 = NameRef::object((NameRef *)&local_70);
    pOVar8 = (Operator *)JSOperatorBuilder::LoadGlobal(pJVar13,&local_78,local_60,param_2);
    pNVar9 = (Node *)MakeNode(this,pOVar8,0,(Node **)0x0,false);
    plVar14 = *(long **)(this + 0xa8);
    lVar15 = *plVar14;
    uVar7 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar9);
    if ((uVar7 & 1) != 0) {
      iVar2 = *(int *)(lVar15 + 0x90);
      uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar15 + 0xa0),iVar2);
      pNVar10 = (Node *)Environment::Checkpoint(*(Environment **)(lVar15 + 0xa8),iVar2,0,uVar6);
      NodeProperties::ReplaceFrameStateInput(pNVar9,pNVar10);
    }
    if ((ulong)(plVar14[6] - plVar14[5] >> 3) <= (ulong)(long)*(int *)((long)plVar14 + 0x5c)) {
LAB_0167b70c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(Node **)(plVar14[5] + (long)*(int *)((long)plVar14 + 0x5c) * 8) = pNVar9;
    if (lVar5 != 0) {
      pOVar8 = (Operator *)
               CommonOperatorBuilder::Merge
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),1);
      MakeNode(this,pOVar8,0,(Node **)0x0,true);
      this_02 = *(JSGraph **)(this + 0x10);
      this_01 = *(Environment **)(this + 0xa8);
      *(long *)(this + 0xa8) = lVar5;
      uVar12 = *(undefined8 *)this;
      uVar6 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                        (this_00,0,*(Isolate **)(this_02 + 0x168));
      ObjectRef::ObjectRef((ObjectRef *)local_60,uVar12,uVar6,0);
      uVar7 = ObjectRef::IsName((ObjectRef *)local_60);
      if ((uVar7 & 1) == 0) goto LAB_0167b6f8;
      local_60[0] = (Node *)JSGraph::Constant(this_02,(ObjectRef *)local_60);
      uVar4 = 0x130;
      if (param_2 != 1) {
        uVar4 = 0x131;
      }
      pOVar8 = (Operator *)
               JSOperatorBuilder::CallRuntime
                         (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),uVar4);
      pNVar9 = (Node *)MakeNode(this,pOVar8,1,local_60,false);
      plVar14 = *(long **)(this + 0xa8);
      lVar5 = *plVar14;
      uVar7 = OperatorProperties::HasFrameStateInput(*(Operator **)pNVar9);
      if ((uVar7 & 1) != 0) {
        iVar2 = *(int *)(lVar5 + 0x90);
        uVar6 = BytecodeAnalysis::GetOutLivenessFor(*(BytecodeAnalysis **)(lVar5 + 0xa0),iVar2);
        pNVar10 = (Node *)Environment::Checkpoint(*(Environment **)(lVar5 + 0xa8),iVar2,0,uVar6);
        NodeProperties::ReplaceFrameStateInput(pNVar9,pNVar10);
      }
      if ((ulong)(plVar14[6] - plVar14[5] >> 3) <= (ulong)(long)*(int *)((long)plVar14 + 0x5c))
      goto LAB_0167b70c;
      *(Node **)(plVar14[5] + (long)*(int *)((long)plVar14 + 0x5c) * 8) = pNVar9;
      pEVar1 = *(Environment **)(this + 0xa8);
      pBVar11 = (BytecodeLivenessState *)
                BytecodeAnalysis::GetOutLivenessFor
                          (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
      Environment::Merge(this_01,pEVar1,pBVar11);
      *(Environment **)(this + 0xa8) = this_01;
      this[0x160] = (BytecodeGraphBuilder)0x1;
    }
    return;
  }
LAB_0167b6f8:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

