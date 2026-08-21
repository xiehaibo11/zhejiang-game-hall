
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::PrepareForLoop(v8::internal::compiler::BytecodeLoopAssignments
   const&, v8::internal::compiler::BytecodeLivenessState const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::PrepareForLoop
          (Environment *this,BytecodeLoopAssignments *param_1,BytecodeLivenessState *param_2)

{
  uint uVar1;
  Graph *this_00;
  undefined8 *puVar2;
  int iVar3;
  Operator *pOVar4;
  Node *pNVar5;
  undefined8 uVar6;
  ulong uVar7;
  Zone *pZVar8;
  ulong uVar9;
  Node **ppNVar10;
  BytecodeLivenessState *pBVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  BytecodeGraphBuilder *this_01;
  uint uVar16;
  long lVar17;
  Node *pNVar18;
  Node *pNVar19;
  long lVar20;
  Node *local_70;
  Node *pNStack_68;
  
  this_01 = *(BytecodeGraphBuilder **)this;
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Loop(*(CommonOperatorBuilder **)(*(long *)(this_01 + 0x10) + 8),1)
  ;
  pNVar5 = (Node *)MakeNode(this_01,pOVar4,0,(Node **)0x0,true);
  lVar17 = *(long *)this;
  pNVar18 = *(Node **)(this + 0x20);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     (*(CommonOperatorBuilder **)(*(long *)(lVar17 + 0x10) + 8),1);
  if (*(int *)(lVar17 + 0x154) < 2) {
    pZVar8 = *(Zone **)(lVar17 + 8);
    uVar16 = *(int *)(lVar17 + 0x154) + 0x42;
    uVar7 = -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3;
    ppNVar10 = *(Node ***)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)ppNVar10) < uVar7) {
      ppNVar10 = (Node **)Zone::NewExpand(pZVar8,uVar7);
    }
    else {
      *(ulong *)(pZVar8 + 0x10) = (long)ppNVar10 + uVar7;
    }
    *(Node ***)(lVar17 + 0x158) = ppNVar10;
    *(uint *)(lVar17 + 0x154) = uVar16;
  }
  else {
    ppNVar10 = *(Node ***)(lVar17 + 0x158);
  }
  *ppNVar10 = pNVar18;
  ppNVar10[1] = pNVar5;
  pNVar18 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(lVar17 + 0x10),pOVar4,2,ppNVar10,true)
  ;
  lVar17 = *(long *)this;
  *(Node **)(this + 0x20) = pNVar18;
  pNVar19 = *(Node **)(this + 0x10);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(*(long *)(lVar17 + 0x10) + 8),8,1)
  ;
  if (*(int *)(lVar17 + 0x154) < 2) {
    pZVar8 = *(Zone **)(lVar17 + 8);
    uVar16 = *(int *)(lVar17 + 0x154) + 0x42;
    uVar7 = -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3;
    ppNVar10 = *(Node ***)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)ppNVar10) < uVar7) {
      ppNVar10 = (Node **)Zone::NewExpand(pZVar8,uVar7);
    }
    else {
      *(ulong *)(pZVar8 + 0x10) = (long)ppNVar10 + uVar7;
    }
    *(Node ***)(lVar17 + 0x158) = ppNVar10;
    *(uint *)(lVar17 + 0x154) = uVar16;
  }
  else {
    ppNVar10 = *(Node ***)(lVar17 + 0x158);
  }
  *ppNVar10 = pNVar19;
  ppNVar10[1] = pNVar5;
  uVar6 = Graph::NewNode((Graph *)**(undefined8 **)(lVar17 + 0x10),pOVar4,2,ppNVar10,true);
  *(undefined8 *)(this + 0x10) = uVar6;
  if (0 < *(int *)(this + 0xc)) {
    lVar17 = 0;
    do {
      uVar7 = BytecodeLoopAssignments::ContainsParameter(param_1,(int)lVar17);
      if ((uVar7 & 1) != 0) {
        lVar20 = *(long *)this;
        pNVar19 = *(Node **)(*(long *)(this + 0x28) + lVar17 * 8);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Phi
                           (*(CommonOperatorBuilder **)(*(long *)(lVar20 + 0x10) + 8),8,1);
        if (*(int *)(lVar20 + 0x154) < 2) {
          pZVar8 = *(Zone **)(lVar20 + 8);
          uVar16 = *(int *)(lVar20 + 0x154) + 0x42;
          uVar7 = -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3;
          ppNVar10 = *(Node ***)(pZVar8 + 0x10);
          if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)ppNVar10) < uVar7) {
            ppNVar10 = (Node **)Zone::NewExpand(pZVar8,uVar7);
          }
          else {
            *(ulong *)(pZVar8 + 0x10) = (long)ppNVar10 + uVar7;
          }
          *(Node ***)(lVar20 + 0x158) = ppNVar10;
          *(uint *)(lVar20 + 0x154) = uVar16;
        }
        else {
          ppNVar10 = *(Node ***)(lVar20 + 0x158);
        }
        *ppNVar10 = pNVar19;
        ppNVar10[1] = pNVar5;
        uVar6 = Graph::NewNode((Graph *)**(undefined8 **)(lVar20 + 0x10),pOVar4,2,ppNVar10,true);
        *(undefined8 *)(*(long *)(this + 0x28) + lVar17 * 8) = uVar6;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(this + 0xc));
  }
  if (0 < *(int *)(this + 8)) {
    uVar7 = 0;
    do {
      uVar16 = (uint)uVar7;
      uVar9 = BytecodeLoopAssignments::ContainsLocal(param_1,uVar16);
      if ((uVar9 & 1) != 0) {
        if (param_2 != (BytecodeLivenessState *)0x0) {
          pBVar11 = param_2 + 0x10;
          if (*(int *)(param_2 + 0xc) != 1) {
            pBVar11 = (BytecodeLivenessState *)
                      (*(long *)(param_2 + 0x10) + (ulong)(uVar16 >> 6) * 8);
          }
          if ((*(ulong *)pBVar11 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_0166fe74;
        }
        lVar17 = *(long *)this;
        iVar3 = *(int *)(this + 0x58);
        pNVar19 = *(Node **)(*(long *)(this + 0x28) + (long)(int)(uVar16 + iVar3) * 8);
        pOVar4 = (Operator *)
                 CommonOperatorBuilder::Phi
                           (*(CommonOperatorBuilder **)(*(long *)(lVar17 + 0x10) + 8),8,1);
        if (*(int *)(lVar17 + 0x154) < 2) {
          pZVar8 = *(Zone **)(lVar17 + 8);
          ppNVar10 = *(Node ***)(pZVar8 + 0x10);
          uVar1 = *(int *)(lVar17 + 0x154) + 0x42;
          uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)ppNVar10) < uVar7) {
            ppNVar10 = (Node **)Zone::NewExpand(pZVar8,uVar7);
          }
          else {
            *(ulong *)(pZVar8 + 0x10) = (long)ppNVar10 + uVar7;
          }
          *(uint *)(lVar17 + 0x154) = uVar1;
          *(Node ***)(lVar17 + 0x158) = ppNVar10;
        }
        else {
          ppNVar10 = *(Node ***)(lVar17 + 0x158);
        }
        *ppNVar10 = pNVar19;
        ppNVar10[1] = pNVar5;
        uVar6 = Graph::NewNode((Graph *)**(undefined8 **)(lVar17 + 0x10),pOVar4,2,ppNVar10,true);
        *(undefined8 *)(*(long *)(this + 0x28) + (long)(int)(uVar16 + iVar3) * 8) = uVar6;
      }
LAB_0166fe74:
      uVar7 = (ulong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < *(int *)(this + 8));
  }
  pNVar19 = *(Node **)(this + 0x50);
  if (pNVar19 != (Node *)0x0) {
    lVar17 = *(long *)this;
    pOVar4 = (Operator *)
             CommonOperatorBuilder::Phi
                       (*(CommonOperatorBuilder **)(*(long *)(lVar17 + 0x10) + 8),8,1);
    if (*(int *)(lVar17 + 0x154) < 2) {
      pZVar8 = *(Zone **)(lVar17 + 8);
      uVar16 = *(int *)(lVar17 + 0x154) + 0x42;
      uVar7 = -(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3;
      ppNVar10 = *(Node ***)(pZVar8 + 0x10);
      if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)ppNVar10) < uVar7) {
        ppNVar10 = (Node **)Zone::NewExpand(pZVar8,uVar7);
      }
      else {
        *(ulong *)(pZVar8 + 0x10) = (long)ppNVar10 + uVar7;
      }
      *(Node ***)(lVar17 + 0x158) = ppNVar10;
      *(uint *)(lVar17 + 0x154) = uVar16;
    }
    else {
      ppNVar10 = *(Node ***)(lVar17 + 0x158);
    }
    *ppNVar10 = pNVar19;
    ppNVar10[1] = pNVar5;
    uVar6 = Graph::NewNode((Graph *)**(undefined8 **)(lVar17 + 0x10),pOVar4,2,ppNVar10,true);
    *(undefined8 *)(this + 0x50) = uVar6;
  }
  this_00 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pOVar4 = (Operator *)
           CommonOperatorBuilder::Terminate
                     ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1]);
  local_70 = pNVar18;
  pNStack_68 = pNVar5;
  uVar6 = Graph::NewNode(this_00,pOVar4,2,&local_70,false);
  lVar17 = *(long *)this;
  puVar13 = *(undefined8 **)(lVar17 + 0x178);
  if (puVar13 == *(undefined8 **)(lVar17 + 0x180)) {
    lVar20 = (long)puVar13 - *(long *)(lVar17 + 0x170) >> 3;
    uVar7 = lVar20 + 1;
    if (uVar7 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar12 = (long)*(undefined8 **)(lVar17 + 0x180) - *(long *)(lVar17 + 0x170);
    uVar9 = lVar12 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar12 >> 3)) {
      uVar7 = 0xfffffff;
    }
    if (uVar7 == 0) {
      lVar12 = 0;
    }
    else {
      pZVar8 = *(Zone **)(lVar17 + 0x188);
      uVar9 = uVar7 * 8;
      lVar12 = *(long *)(pZVar8 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar12) ||
          uVar9 - (*(long *)(pZVar8 + 0x18) - lVar12) == 0) {
        *(ulong *)(pZVar8 + 0x10) = lVar12 + uVar9;
      }
      else {
        lVar12 = Zone::NewExpand(pZVar8,uVar9);
      }
    }
    puVar13 = (undefined8 *)(lVar12 + lVar20 * 8);
    puVar14 = puVar13 + 1;
    *puVar13 = uVar6;
    puVar2 = *(undefined8 **)(lVar17 + 0x170);
    puVar15 = *(undefined8 **)(lVar17 + 0x178);
    while (puVar15 != puVar2) {
      puVar15 = puVar15 + -1;
      puVar13 = puVar13 + -1;
      *puVar13 = *puVar15;
    }
    *(undefined8 **)(lVar17 + 0x170) = puVar13;
    *(undefined8 **)(lVar17 + 0x178) = puVar14;
    *(ulong *)(lVar17 + 0x180) = lVar12 + uVar7 * 8;
  }
  else {
    *puVar13 = uVar6;
    *(long *)(lVar17 + 0x178) = *(long *)(lVar17 + 0x178) + 8;
  }
  return;
}

