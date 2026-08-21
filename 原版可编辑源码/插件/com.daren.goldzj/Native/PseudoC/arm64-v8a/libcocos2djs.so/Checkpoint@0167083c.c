
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::Checkpoint(v8::internal::BailoutId,
   v8::internal::compiler::OutputFrameStateCombine, v8::internal::compiler::BytecodeLivenessState
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::Checkpoint
          (Environment *this,undefined4 param_2,ulong param_3,long param_4)

{
  BitVector *pBVar1;
  uint uVar2;
  Node **ppNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Operator *pOVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  Node **ppNVar10;
  ulong *puVar11;
  Graph *pGVar12;
  ulong uVar13;
  Graph *this_00;
  undefined8 uVar14;
  BytecodeGraphBuilder *this_01;
  Node *pNVar15;
  Node *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  uVar2 = *(uint *)(this + 0xc);
  if (uVar2 == *(uint *)(this + 8)) {
    if (*(Node ***)(this + 0x30) == *(Node ***)(this + 0x28)) goto LAB_01670ae8;
    uVar4 = StateValuesCache::GetNodeForValues
                      ((StateValuesCache *)(*(long *)this + 400),*(Node ***)(this + 0x28),
                       (long)(int)uVar2,(BitVector *)0x0,0);
LAB_0167094c:
    *(undefined8 *)(this + 0x48) = uVar4;
  }
  else {
    ppNVar3 = *(Node ***)(this + 0x28);
    if (*(Node ***)(this + 0x30) == ppNVar3) goto LAB_01670ae8;
    lVar7 = *(long *)(this + 0x48);
    if (lVar7 == 0) {
LAB_01670910:
      pOVar5 = (Operator *)
               CommonOperatorBuilder::StateValues
                         (*(CommonOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 8),
                          (ulong)uVar2,0);
      uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(*(long *)this + 0x10),pOVar5,uVar2,ppNVar3,
                             false);
      goto LAB_0167094c;
    }
    plVar8 = (long *)(lVar7 + 0x20);
    uVar9 = *(byte *)(lVar7 + 0x17) & 0xf;
    if (uVar9 == 0xf) {
      uVar9 = *(uint *)(*plVar8 + 8);
      plVar8 = (long *)(*plVar8 + 0x10);
    }
    if (uVar9 != uVar2) goto LAB_01670910;
    ppNVar10 = ppNVar3;
    uVar13 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      do {
        if ((Node *)*plVar8 != *ppNVar10) goto LAB_01670910;
        uVar13 = uVar13 - 1;
        plVar8 = plVar8 + 1;
        ppNVar10 = ppNVar10 + 1;
      } while (uVar13 != 0);
    }
  }
  if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <=
      (ulong)(long)*(int *)(this + 0x58)) goto LAB_01670ae8;
  pBVar1 = (BitVector *)(param_4 + 8);
  if (param_4 == 0) {
    pBVar1 = (BitVector *)0x0;
  }
  uVar4 = StateValuesCache::GetNodeForValues
                    ((StateValuesCache *)(*(long *)this + 400),
                     (Node **)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x58) * 8),
                     (long)*(int *)(this + 8),pBVar1,0);
  uVar13 = param_3;
  if (param_4 == 0) {
joined_r0x01670a04:
    if (uVar13 != 0) {
      if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <=
          (ulong)(long)*(int *)(this + 0x5c)) {
LAB_01670ae8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = *(undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8);
      goto LAB_01670a18;
    }
  }
  else {
    uVar2 = *(int *)(param_4 + 8) - 1;
    puVar11 = (ulong *)(param_4 + 0x10);
    if (*(int *)(param_4 + 0xc) != 1) {
      uVar9 = *(int *)(param_4 + 8) + 0x3e;
      if (-1 < (int)uVar2) {
        uVar9 = uVar2;
      }
      puVar11 = (ulong *)(*puVar11 + (long)((int)uVar9 >> 6) * 8);
    }
    if (param_3 != 0) {
      uVar13 = *puVar11 & 1L << ((ulong)uVar2 & 0x3f);
      goto joined_r0x01670a04;
    }
  }
  uVar14 = JSGraph::OptimizedOutConstant(*(JSGraph **)(*(long *)this + 0x10));
LAB_01670a18:
  pOVar5 = (Operator *)
           CommonOperatorBuilder::FrameState
                     (*(CommonOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 8),param_2,
                      param_3,*(undefined8 *)(*(long *)this + 0x78));
  this_01 = *(BytecodeGraphBuilder **)this;
  pNVar15 = *(Node **)(this + 0x48);
  uStack_68 = *(undefined8 *)(this + 0x10);
  local_60 = *(long *)(this_01 + 0x168);
  this_00 = (Graph *)**(undefined8 **)(this_01 + 0x10);
  pGVar12 = this_00;
  if (local_60 == 0) {
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Parameter
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this_01 + 0x10))[1],-1,"%closure"
                       );
    local_80 = *(Node **)(**(long **)(this_01 + 0x10) + 8);
    local_60 = MakeNode(this_01,pOVar6,1,&local_80,false);
    *(long *)(this_01 + 0x168) = local_60;
    pGVar12 = (Graph *)**(long **)(*(long *)this + 0x10);
  }
  uStack_58 = *(undefined8 *)(pGVar12 + 8);
  local_80 = pNVar15;
  uStack_78 = uVar4;
  local_70 = uVar14;
  Graph::NewNode(this_00,pOVar5,6,&local_80,false);
  return;
}

