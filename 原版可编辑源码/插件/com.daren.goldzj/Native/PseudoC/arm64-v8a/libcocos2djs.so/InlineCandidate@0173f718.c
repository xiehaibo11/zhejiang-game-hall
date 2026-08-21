
/* v8::internal::compiler::JSInliningHeuristic::InlineCandidate(v8::internal::compiler::JSInliningHeuristic::Candidate
   const&, bool) */

long __thiscall
v8::internal::compiler::JSInliningHeuristic::InlineCandidate
          (JSInliningHeuristic *this,Candidate *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  Zone *this_00;
  Operator *pOVar6;
  CommonOperatorBuilder *this_01;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  Node **ppNVar10;
  ulong uVar11;
  Node *pNVar12;
  ulong uVar13;
  Candidate *pCVar14;
  Candidate *this_02;
  Node *pNVar15;
  Graph *pGVar16;
  Node **ppNVar17;
  Node **ppNVar18;
  Node *apNStack_e8 [5];
  Node *local_c0;
  Node *apNStack_b8 [4];
  Node *local_98 [5];
  Node *local_70;
  Node *pNStack_68;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  uVar13 = (ulong)uVar1;
  pNVar15 = *(Node **)(param_1 + 0xe8);
  if (uVar1 == 1) {
    lVar4 = JSInliner::ReduceJSCall((JSInliner *)(this + 0x10),pNVar15);
    if (lVar4 != 0) {
      if (param_1[0x68] != (Candidate)0x1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      iVar3 = FixedArrayBaseRef::length((FixedArrayBaseRef *)(param_1 + 0x70));
      *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + iVar3;
    }
  }
  else {
    pNVar5 = (Node *)NodeProperties::GetValueInput(pNVar15,0);
    if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
      uVar2 = *(uint *)(*(long *)(pNVar15 + 0x20) + 8);
    }
    else {
      uVar2 = *(uint *)(pNVar15 + 0x14) >> 0x18 & 0xf;
    }
    uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    this_00 = *(Zone **)**(undefined8 **)(this + 0x90);
    ppNVar10 = *(Node ***)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar10) < uVar11) {
      ppNVar10 = (Node **)Zone::NewExpand(this_00,uVar11);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)ppNVar10 + uVar11;
    }
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        pNVar12 = pNVar15 + 0x20;
        if ((~*(uint *)(pNVar15 + 0x14) & 0xf000000) == 0) {
          pNVar12 = (Node *)(*(long *)(pNVar15 + 0x20) + 0x10);
        }
        *(undefined8 *)((long)ppNVar10 + lVar4) = *(undefined8 *)(pNVar12 + lVar4);
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar2 * 8 - lVar4 != 0);
    }
    CreateOrReuseDispatch(this,pNVar15,pNVar5,param_1,apNStack_b8,local_98,ppNVar10,uVar2);
    local_c0 = (Node *)0x0;
    uVar11 = NodeProperties::IsExceptionalCall(pNVar15,&local_c0);
    if ((uVar11 & 1) != 0) {
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
      this_01 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1];
      if (0 < (int)uVar1) {
        uVar11 = uVar13;
        ppNVar10 = apNStack_e8;
        ppNVar17 = apNStack_b8;
        ppNVar18 = local_98;
        do {
          pOVar6 = (Operator *)CommonOperatorBuilder::IfSuccess(this_01);
          local_70 = *ppNVar18;
          pNVar5 = (Node *)Graph::NewNode(pGVar16,pOVar6,1,&local_70,false);
          *ppNVar17 = pNVar5;
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
          pOVar6 = (Operator *)
                   CommonOperatorBuilder::IfException
                             ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1]);
          local_70 = *ppNVar18;
          pNStack_68 = local_70;
          pNVar5 = (Node *)Graph::NewNode(pGVar16,pOVar6,2,&local_70,false);
          *ppNVar10 = pNVar5;
          uVar11 = uVar11 - 1;
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
          this_01 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1];
          ppNVar10 = ppNVar10 + 1;
          ppNVar17 = ppNVar17 + 1;
          ppNVar18 = ppNVar18 + 1;
        } while (uVar11 != 0);
      }
      pOVar6 = (Operator *)CommonOperatorBuilder::Merge(this_01,uVar1);
      pNVar5 = (Node *)Graph::NewNode(pGVar16,pOVar6,uVar1,apNStack_e8,false);
      apNStack_e8[(int)uVar1] = pNVar5;
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::EffectPhi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],uVar1);
      uVar7 = Graph::NewNode(pGVar16,pOVar6,uVar1 + 1,apNStack_e8,false);
      pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::Phi
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],8,uVar1);
      uVar8 = Graph::NewNode(pGVar16,pOVar6,uVar1 + 1,apNStack_e8,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_c0,uVar8,uVar7,pNVar5);
    }
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],uVar1);
    pNVar5 = (Node *)Graph::NewNode(pGVar16,pOVar6,uVar1,apNStack_b8,false);
    local_98[(int)uVar1] = pNVar5;
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],uVar1);
    uVar7 = Graph::NewNode(pGVar16,pOVar6,uVar1 + 1,local_98,false);
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x90);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x90))[1],8,uVar1);
    lVar4 = Graph::NewNode(pGVar16,pOVar6,uVar1 + 1,local_98,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),pNVar15,lVar4,uVar7,pNVar5);
    if (0 < (int)uVar1) {
      pCVar14 = param_1 + 0x60;
      this_02 = param_1 + 0x70;
      ppNVar10 = local_98;
      do {
        if (FLAG_max_inlined_bytecode_size_absolute <= *(int *)(this + 0xa0)) {
          return lVar4;
        }
        if ((*pCVar14 != (Candidate)0x0) &&
           ((*(int *)(this + 0xa0) < FLAG_max_inlined_bytecode_size_cumulative || (param_2)))) {
          pNVar15 = *ppNVar10;
          lVar9 = JSInliner::ReduceJSCall((JSInliner *)(this + 0x10),pNVar15);
          if (lVar9 != 0) {
            iVar3 = FixedArrayBaseRef::length((FixedArrayBaseRef *)this_02);
            *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + iVar3;
            Node::Kill(pNVar15);
          }
        }
        ppNVar10 = ppNVar10 + 1;
        pCVar14 = pCVar14 + 1;
        uVar13 = uVar13 - 1;
        this_02 = this_02 + 0x18;
      } while (uVar13 != 0);
    }
  }
  return lVar4;
}

