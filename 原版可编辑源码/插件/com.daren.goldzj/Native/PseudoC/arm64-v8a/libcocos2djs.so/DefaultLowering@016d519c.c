
/* v8::internal::compiler::Int64Lowering::DefaultLowering(v8::internal::compiler::Node*, bool) */

undefined4 __thiscall
v8::internal::compiler::Int64Lowering::DefaultLowering
          (Int64Lowering *this,Node *param_1,bool param_2)

{
  Node *pNVar1;
  uint uVar2;
  Node *this_00;
  undefined4 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong uVar6;
  Node *pNVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = NodeProperties::PastValueIndex(param_1);
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar6 = (ulong)uVar2;
    uVar3 = 0;
    pNVar1 = param_1 + 0x20;
    lVar9 = -(uVar6 << 0x20);
    do {
      uVar2 = *(uint *)(param_1 + 0x14) & 0xf000000;
      pNVar7 = pNVar1;
      if (uVar2 == 0xf000000) {
        pNVar7 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar8 = *(long *)(pNVar7 + uVar6 * 8 + -8);
      pNVar7 = *(Node **)(*(long *)(this + 0x78) +
                         ((ulong)*(uint *)(lVar8 + 0x14) & 0xffffff) * 0x10);
      if (pNVar7 != (Node *)0x0) {
        pNVar4 = pNVar1;
        if (uVar2 == 0xf000000) {
          pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        this_00 = *(Node **)(pNVar4 + uVar6 * 8 + -8);
        if (this_00 == pNVar7) {
          uVar3 = 1;
        }
        else {
          pNVar5 = param_1;
          if (uVar2 == 0xf000000) {
            pNVar5 = *(Node **)pNVar1;
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,(Use *)(pNVar5 + (lVar9 >> 0x20) * 0x18));
          }
          *(Node **)(pNVar4 + uVar6 * 8 + -8) = pNVar7;
          Node::AppendUse(pNVar7,(Use *)(pNVar5 + (lVar9 >> 0x20) * 0x18));
          uVar3 = 1;
        }
      }
      if ((!param_2) &&
         (pNVar7 = *(Node **)(*(long *)(this + 0x78) +
                              ((ulong)*(uint *)(lVar8 + 0x14) & 0xffffff) * 0x10 + 8),
         pNVar7 != (Node *)0x0)) {
        Node::InsertInput(param_1,*(Zone **)this,(int)uVar6,pNVar7);
        uVar3 = 1;
      }
      uVar6 = uVar6 - 1;
      lVar9 = lVar9 + 0x100000000;
    } while (0 < (long)uVar6);
  }
  return uVar3;
}

