
/* v8::internal::compiler::Int64Lowering::LowerMemoryBaseAndIndex(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Int64Lowering::LowerMemoryBaseAndIndex(Int64Lowering *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  long lVar5;
  Node *pNVar6;
  Node *pNVar7;
  Use *pUVar8;
  
  pNVar1 = param_1 + 0x20;
  uVar2 = *(uint *)(param_1 + 0x14) & 0xf000000;
  pNVar6 = pNVar1;
  if (uVar2 == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  lVar3 = *(long *)(pNVar6 + 8);
  lVar5 = *(long *)(this + 0x78);
  pNVar6 = *(Node **)(lVar5 + ((ulong)*(uint *)(*(long *)pNVar6 + 0x14) & 0xffffff) * 0x10);
  if (pNVar6 != (Node *)0x0) {
    pNVar7 = pNVar1;
    if (uVar2 == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)pNVar7;
    if (pNVar4 != pNVar6) {
      if (uVar2 == 0xf000000) {
        pUVar8 = (Use *)(*(long *)pNVar1 + -0x18);
      }
      else {
        pUVar8 = (Use *)(param_1 + -0x18);
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,pUVar8);
      }
      *(Node **)pNVar7 = pNVar6;
      Node::AppendUse(pNVar6,pUVar8);
      lVar5 = *(long *)(this + 0x78);
    }
  }
  pNVar6 = *(Node **)(lVar5 + ((ulong)*(uint *)(lVar3 + 0x14) & 0xffffff) * 0x10);
  if (pNVar6 != (Node *)0x0) {
    pNVar7 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar4 = *(Node **)(pNVar7 + 8);
    if (pNVar4 != pNVar6) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        param_1 = *(Node **)pNVar1;
      }
      if (pNVar4 != (Node *)0x0) {
        Node::RemoveUse(pNVar4,(Use *)(param_1 + -0x30));
      }
      *(Node **)(pNVar7 + 8) = pNVar6;
      Node::AppendUse(pNVar6,(Use *)(param_1 + -0x30));
      return;
    }
  }
  return;
}

