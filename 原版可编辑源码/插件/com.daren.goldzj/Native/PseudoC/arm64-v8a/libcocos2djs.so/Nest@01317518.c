
/* v8::internal::compiler::Diamond::Nest(v8::internal::compiler::Diamond const&, bool) */

void __thiscall v8::internal::compiler::Diamond::Nest(Diamond *this,Diamond *param_1,bool param_2)

{
  long *plVar1;
  uint uVar2;
  Node *pNVar3;
  long lVar4;
  Use *pUVar5;
  Node *pNVar6;
  long *plVar7;
  
  lVar4 = *(long *)(this + 0x10);
  if (param_2) {
    pNVar6 = *(Node **)(param_1 + 0x18);
    plVar1 = (long *)(lVar4 + 0x20);
    uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
    plVar7 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar7 = (long *)(*plVar1 + 0x10);
    }
    pNVar3 = (Node *)plVar7[1];
    if (pNVar3 != pNVar6) {
      if (uVar2 == 0xf000000) {
        lVar4 = *plVar1;
      }
      if (pNVar3 != (Node *)0x0) {
        Node::RemoveUse(pNVar3,(Use *)(lVar4 + -0x30));
      }
      plVar7[1] = (long)pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,(Use *)(lVar4 + -0x30));
      }
    }
    lVar4 = *(long *)(param_1 + 0x28);
    pNVar6 = *(Node **)(this + 0x28);
    plVar1 = (long *)(lVar4 + 0x20);
    uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
    plVar7 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar7 = (long *)(*plVar1 + 0x10);
    }
    pNVar3 = (Node *)*plVar7;
    if (pNVar3 == pNVar6) {
      return;
    }
    if (uVar2 == 0xf000000) {
      lVar4 = *plVar1;
    }
    pUVar5 = (Use *)(lVar4 + -0x18);
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar5);
    }
    *plVar7 = (long)pNVar6;
  }
  else {
    pNVar6 = *(Node **)(param_1 + 0x20);
    plVar1 = (long *)(lVar4 + 0x20);
    uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
    plVar7 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar7 = (long *)(*plVar1 + 0x10);
    }
    pNVar3 = (Node *)plVar7[1];
    if (pNVar3 != pNVar6) {
      if (uVar2 == 0xf000000) {
        lVar4 = *plVar1;
      }
      if (pNVar3 != (Node *)0x0) {
        Node::RemoveUse(pNVar3,(Use *)(lVar4 + -0x30));
      }
      plVar7[1] = (long)pNVar6;
      if (pNVar6 != (Node *)0x0) {
        Node::AppendUse(pNVar6,(Use *)(lVar4 + -0x30));
      }
    }
    lVar4 = *(long *)(param_1 + 0x28);
    pNVar6 = *(Node **)(this + 0x28);
    plVar1 = (long *)(lVar4 + 0x20);
    uVar2 = *(uint *)(lVar4 + 0x14) & 0xf000000;
    plVar7 = plVar1;
    if (uVar2 == 0xf000000) {
      plVar7 = (long *)(*plVar1 + 0x10);
    }
    pNVar3 = (Node *)plVar7[1];
    if (pNVar3 == pNVar6) {
      return;
    }
    if (uVar2 == 0xf000000) {
      lVar4 = *plVar1;
    }
    pUVar5 = (Use *)(lVar4 + -0x30);
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar5);
    }
    plVar7[1] = (long)pNVar6;
  }
  if (pNVar6 == (Node *)0x0) {
    return;
  }
  Node::AppendUse(pNVar6,pUVar5);
  return;
}

