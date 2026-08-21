
/* v8::internal::compiler::JSInliningHeuristic::DuplicateFrameStateAndRename(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::JSInliningHeuristic::StateCloneMode) */

Node * __thiscall
v8::internal::compiler::JSInliningHeuristic::DuplicateFrameStateAndRename
          (JSInliningHeuristic *this,Node *param_1,long param_2,Node *param_3,int param_5)

{
  bool bVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  uint uVar6;
  Use *pUVar7;
  Node *pNVar8;
  Node *pNVar9;
  
  iVar2 = Node::UseCount(param_1);
  if (iVar2 < 2) {
    uVar6 = *(uint *)(param_1 + 0x14);
    pNVar3 = param_1 + 0x20;
    pNVar4 = param_1;
    if (param_5 != 1) {
      pNVar4 = (Node *)0x0;
    }
    pNVar9 = pNVar3;
    if ((~uVar6 & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    if (*(long *)(pNVar9 + 0x10) == param_2) {
      bVar1 = pNVar4 == (Node *)0x0;
      pNVar9 = pNVar3;
      pNVar4 = param_1;
      if (bVar1) {
        pNVar4 = (Node *)Graph::CloneNode((Graph *)**(undefined8 **)(this + 0x90),param_1);
        uVar6 = *(uint *)(pNVar4 + 0x14);
        pNVar9 = pNVar4 + 0x20;
      }
      pNVar8 = pNVar9;
      if ((uVar6 & 0xf000000) == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar5 = *(Node **)(pNVar8 + 0x10);
      if (pNVar5 != param_3) {
        if ((uVar6 & 0xf000000) == 0xf000000) {
          pUVar7 = (Use *)(*(long *)pNVar9 + -0x48);
        }
        else {
          pUVar7 = (Use *)(pNVar4 + -0x48);
        }
        if (pNVar5 != (Node *)0x0) {
          Node::RemoveUse(pNVar5,pUVar7);
        }
        *(Node **)(pNVar8 + 0x10) = param_3;
        if (param_3 != (Node *)0x0) {
          Node::AppendUse(param_3,pUVar7);
        }
      }
    }
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    pNVar9 = *(Node **)(pNVar3 + 8);
    pNVar3 = (Node *)DuplicateStateValuesAndRename(this,pNVar9,param_2,param_3,param_5);
    if (pNVar3 != pNVar9) {
      if (pNVar4 == (Node *)0x0) {
        pNVar4 = (Node *)Graph::CloneNode((Graph *)**(undefined8 **)(this + 0x90),param_1);
      }
      pNVar9 = pNVar4 + 0x20;
      pNVar8 = pNVar9;
      if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar5 = *(Node **)(pNVar8 + 8);
      if (pNVar5 != pNVar3) {
        if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar7 = (Use *)(*(long *)pNVar9 + -0x30);
        }
        else {
          pUVar7 = (Use *)(pNVar4 + -0x30);
        }
        if (pNVar5 != (Node *)0x0) {
          Node::RemoveUse(pNVar5,pUVar7);
        }
        *(Node **)(pNVar8 + 8) = pNVar3;
        if (pNVar3 != (Node *)0x0) {
          Node::AppendUse(pNVar3,pUVar7);
        }
      }
    }
    if (pNVar4 != (Node *)0x0) {
      param_1 = pNVar4;
    }
  }
  return param_1;
}

