
/* v8::internal::compiler::JSInliningHeuristic::DuplicateStateValuesAndRename(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::JSInliningHeuristic::StateCloneMode) */

Node * __thiscall
v8::internal::compiler::JSInliningHeuristic::DuplicateStateValuesAndRename
          (JSInliningHeuristic *this,Node *param_1,Node *param_2,Node *param_3,int param_5)

{
  Node *pNVar1;
  Use *pUVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Node *this_00;
  Node *pNVar6;
  Node *this_01;
  long lVar7;
  Node *pNVar8;
  Node *pNVar9;
  long lVar10;
  
  iVar5 = Node::UseCount(param_1);
  if (iVar5 < 2) {
    lVar10 = 0;
    pNVar1 = param_1 + 0x20;
    lVar7 = -0x18;
    pNVar6 = param_1;
    if (param_5 != 1) {
      pNVar6 = (Node *)0x0;
    }
    while( true ) {
      uVar3 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar3 == 0xf000000) {
        uVar4 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      }
      if ((int)uVar4 <= lVar10) break;
      pNVar9 = pNVar1;
      if (uVar3 == 0xf000000) {
        pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      pNVar9 = *(Node **)(pNVar9 + lVar10 * 8);
      if (*(short *)(*(long *)pNVar9 + 0x10) == 0x2a) {
        this_00 = (Node *)DuplicateStateValuesAndRename(this,pNVar9,param_2,param_3,param_5);
      }
      else {
        this_00 = param_3;
        if (pNVar9 != param_2) {
          this_00 = pNVar9;
        }
      }
      if (this_00 != pNVar9) {
        if (pNVar6 == (Node *)0x0) {
          pNVar6 = (Node *)Graph::CloneNode((Graph *)**(undefined8 **)(this + 0x90),param_1);
        }
        pNVar9 = pNVar6 + 0x20;
        pNVar8 = pNVar9;
        if ((*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        this_01 = *(Node **)(pNVar8 + lVar10 * 8);
        if (this_01 != this_00) {
          if ((*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar2 = (Use *)(*(long *)pNVar9 + lVar7);
          }
          else {
            pUVar2 = (Use *)(pNVar6 + lVar7);
          }
          if (this_01 != (Node *)0x0) {
            Node::RemoveUse(this_01,pUVar2);
          }
          *(Node **)(pNVar8 + lVar10 * 8) = this_00;
          if (this_00 != (Node *)0x0) {
            Node::AppendUse(this_00,pUVar2);
          }
        }
      }
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + -0x18;
    }
    if (pNVar6 != (Node *)0x0) {
      param_1 = pNVar6;
    }
  }
  return param_1;
}

