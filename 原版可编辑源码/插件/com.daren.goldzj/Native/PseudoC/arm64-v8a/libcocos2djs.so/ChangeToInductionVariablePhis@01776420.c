
/* v8::internal::compiler::LoopVariableOptimizer::ChangeToInductionVariablePhis() */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::ChangeToInductionVariablePhis
          (LoopVariableOptimizer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  Node *pNVar4;
  Operator *pOVar5;
  uint uVar6;
  LoopVariableOptimizer *pLVar7;
  long lVar8;
  undefined8 *puVar9;
  LoopVariableOptimizer *pLVar10;
  
  pLVar10 = *(LoopVariableOptimizer **)(this + 0x60);
  while (pLVar10 != this + 0x68) {
    puVar9 = *(undefined8 **)(pLVar10 + 0x28);
    if ((puVar9[10] != puVar9[9]) || (puVar9[6] != puVar9[5])) {
      pNVar4 = (Node *)*puVar9;
      if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
        uVar6 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
      }
      else {
        uVar6 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
      }
      Node::InsertInput(pNVar4,(Zone *)**(undefined8 **)(this + 8),uVar6 - 1,(Node *)puVar9[3]);
      puVar2 = (undefined8 *)puVar9[6];
      for (puVar1 = (undefined8 *)puVar9[5]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
        pNVar4 = (Node *)*puVar9;
        if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
          uVar6 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
        }
        else {
          uVar6 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
        }
        Node::InsertInput(pNVar4,(Zone *)**(undefined8 **)(this + 8),uVar6 - 1,(Node *)*puVar1);
      }
      puVar2 = (undefined8 *)puVar9[10];
      for (puVar1 = (undefined8 *)puVar9[9]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
        pNVar4 = (Node *)*puVar9;
        if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
          uVar6 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
        }
        else {
          uVar6 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
        }
        Node::InsertInput(pNVar4,(Zone *)**(undefined8 **)(this + 8),uVar6 - 1,(Node *)*puVar1);
      }
      pNVar4 = (Node *)*puVar9;
      if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
        uVar6 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
      }
      else {
        uVar6 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
      }
      pOVar5 = (Operator *)
               CommonOperatorBuilder::InductionVariablePhi
                         (*(CommonOperatorBuilder **)(this + 0x10),uVar6 - 1);
      NodeProperties::ChangeOp(pNVar4,pOVar5);
    }
    pLVar7 = *(LoopVariableOptimizer **)(pLVar10 + 8);
    if (*(LoopVariableOptimizer **)(pLVar10 + 8) == (LoopVariableOptimizer *)0x0) {
      pLVar7 = pLVar10 + 0x10;
      bVar3 = *(LoopVariableOptimizer **)*(LoopVariableOptimizer **)pLVar7 != pLVar10;
      pLVar10 = *(LoopVariableOptimizer **)pLVar7;
      if (bVar3) {
        do {
          lVar8 = *(long *)pLVar7;
          pLVar7 = (LoopVariableOptimizer *)(lVar8 + 0x10);
          pLVar10 = *(LoopVariableOptimizer **)pLVar7;
        } while (*(long *)pLVar10 != lVar8);
      }
    }
    else {
      do {
        pLVar10 = pLVar7;
        pLVar7 = *(LoopVariableOptimizer **)pLVar10;
      } while (*(LoopVariableOptimizer **)pLVar10 != (LoopVariableOptimizer *)0x0);
    }
  }
  return;
}

