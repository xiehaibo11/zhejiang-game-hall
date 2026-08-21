
/* v8::internal::compiler::LoopVariableOptimizer::ChangeToPhisAndInsertGuards() */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::ChangeToPhisAndInsertGuards
          (LoopVariableOptimizer *this)

{
  uint uVar1;
  Graph *this_00;
  bool bVar2;
  Node *pNVar3;
  Node *pNVar4;
  Operator *pOVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  LoopVariableOptimizer *pLVar11;
  long *plVar12;
  LoopVariableOptimizer *pLVar13;
  long *plVar14;
  long local_80;
  Node *local_78;
  undefined8 uStack_70;
  long local_68;
  
  pLVar13 = *(LoopVariableOptimizer **)(this + 0x60);
  while (pLVar13 != this + 0x68) {
    plVar14 = *(long **)(pLVar13 + 0x28);
    if (*(short *)(*(long *)*plVar14 + 0x10) == 0x25) {
      pNVar3 = (Node *)NodeProperties::GetControlInput((Node *)*plVar14,0);
      Node::TrimInputCount((Node *)*plVar14,3);
      lVar9 = *plVar14;
      uVar1 = *(uint *)(lVar9 + 0x14) & 0xf000000;
      plVar10 = (long *)(lVar9 + 0x20);
      plVar12 = plVar10;
      if (uVar1 == 0xf000000) {
        plVar12 = (long *)(*plVar10 + 0x10);
      }
      pNVar4 = (Node *)plVar12[2];
      if (pNVar4 != pNVar3) {
        if (uVar1 == 0xf000000) {
          lVar9 = *plVar10;
        }
        if (pNVar4 != (Node *)0x0) {
          Node::RemoveUse(pNVar4,(Use *)(lVar9 + -0x48));
        }
        plVar12[2] = (long)pNVar3;
        if (pNVar3 != (Node *)0x0) {
          Node::AppendUse(pNVar3,(Use *)(lVar9 + -0x48));
        }
      }
      pNVar3 = (Node *)*plVar14;
      pOVar5 = (Operator *)CommonOperatorBuilder::Phi(*(CommonOperatorBuilder **)(this + 0x10),8,2);
      NodeProperties::ChangeOp(pNVar3,pOVar5);
      plVar10 = (long *)(*plVar14 + 0x20);
      if ((~*(uint *)(*plVar14 + 0x14) & 0xf000000) == 0) {
        plVar10 = (long *)(*plVar10 + 0x10);
      }
      pNVar3 = (Node *)plVar10[1];
      local_80 = *(long *)(pNVar3 + 8);
      lVar9 = *(long *)(*plVar14 + 8);
      if ((local_80 != lVar9) && (uVar6 = Type::SlowIs((Type *)&local_80,lVar9), (uVar6 & 1) == 0))
      {
        lVar7 = NodeProperties::GetControlInput((Node *)*plVar14,0);
        plVar10 = (long *)(lVar7 + 0x20);
        if ((~*(uint *)(lVar7 + 0x14) & 0xf000000) == 0) {
          plVar10 = (long *)(*plVar10 + 0x10);
        }
        lVar7 = plVar10[1];
        uVar8 = NodeProperties::GetEffectInput((Node *)plVar14[1],1);
        this_00 = *(Graph **)(this + 8);
        pOVar5 = (Operator *)
                 CommonOperatorBuilder::TypeGuard(*(CommonOperatorBuilder **)(this + 0x10),lVar9);
        local_78 = pNVar3;
        uStack_70 = uVar8;
        local_68 = lVar7;
        pNVar3 = (Node *)Graph::NewNode(this_00,pOVar5,3,&local_78,false);
        lVar9 = plVar14[1];
        uVar1 = *(uint *)(lVar9 + 0x14) & 0xf000000;
        plVar10 = (long *)(lVar9 + 0x20);
        plVar12 = plVar10;
        if (uVar1 == 0xf000000) {
          plVar12 = (long *)(*plVar10 + 0x10);
        }
        pNVar4 = (Node *)plVar12[1];
        if (pNVar4 != pNVar3) {
          if (uVar1 == 0xf000000) {
            lVar9 = *plVar10;
          }
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,(Use *)(lVar9 + -0x30));
          }
          plVar12[1] = (long)pNVar3;
          if (pNVar3 != (Node *)0x0) {
            Node::AppendUse(pNVar3,(Use *)(lVar9 + -0x30));
          }
        }
        lVar9 = *plVar14;
        uVar1 = *(uint *)(lVar9 + 0x14) & 0xf000000;
        plVar14 = (long *)(lVar9 + 0x20);
        plVar10 = plVar14;
        if (uVar1 == 0xf000000) {
          plVar10 = (long *)(*plVar14 + 0x10);
        }
        pNVar4 = (Node *)plVar10[1];
        if (pNVar4 != pNVar3) {
          if (uVar1 == 0xf000000) {
            lVar9 = *plVar14;
          }
          if (pNVar4 != (Node *)0x0) {
            Node::RemoveUse(pNVar4,(Use *)(lVar9 + -0x30));
          }
          plVar10[1] = (long)pNVar3;
          if (pNVar3 != (Node *)0x0) {
            Node::AppendUse(pNVar3,(Use *)(lVar9 + -0x30));
          }
        }
      }
    }
    pLVar11 = *(LoopVariableOptimizer **)(pLVar13 + 8);
    if (*(LoopVariableOptimizer **)(pLVar13 + 8) == (LoopVariableOptimizer *)0x0) {
      pLVar11 = pLVar13 + 0x10;
      bVar2 = *(LoopVariableOptimizer **)*(LoopVariableOptimizer **)pLVar11 != pLVar13;
      pLVar13 = *(LoopVariableOptimizer **)pLVar11;
      if (bVar2) {
        do {
          lVar9 = *(long *)pLVar11;
          pLVar11 = (LoopVariableOptimizer *)(lVar9 + 0x10);
          pLVar13 = *(LoopVariableOptimizer **)pLVar11;
        } while (*(long *)pLVar13 != lVar9);
      }
    }
    else {
      do {
        pLVar13 = pLVar11;
        pLVar11 = *(LoopVariableOptimizer **)pLVar13;
      } while (*(LoopVariableOptimizer **)pLVar13 != (LoopVariableOptimizer *)0x0);
    }
  }
  return;
}

