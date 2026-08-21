
/* v8::internal::compiler::SimdScalarLowering::DefaultLowering(v8::internal::compiler::Node*) */

undefined4 __thiscall
v8::internal::compiler::SimdScalarLowering::DefaultLowering(SimdScalarLowering *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  Node *this_00;
  undefined4 uVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Node *pNVar8;
  Node *pNVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = NodeProperties::PastValueIndex(param_1);
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    pNVar1 = param_1 + 0x20;
    uVar10 = (ulong)uVar2;
    do {
      uVar11 = uVar10 - 1;
      uVar2 = *(uint *)(param_1 + 0x14) & 0xf000000;
      pNVar8 = pNVar1;
      if (uVar2 == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar12 = *(long *)(pNVar8 + uVar11 * 8);
      puVar5 = *(undefined8 **)
                (*(long *)(this + 0x60) + ((ulong)*(uint *)(lVar12 + 0x14) & 0xffffff) * 0x10);
      if ((puVar5 != (undefined8 *)0x0) && (pNVar8 = (Node *)*puVar5, pNVar8 != (Node *)0x0)) {
        pNVar9 = pNVar1;
        if (uVar2 == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar1 + 0x10);
        }
        this_00 = *(Node **)(pNVar9 + uVar11 * 8);
        if (this_00 != pNVar8) {
          pNVar4 = param_1;
          if (uVar2 == 0xf000000) {
            pNVar4 = *(Node **)pNVar1;
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,(Use *)(pNVar4 + ((long)-(uVar10 << 0x20) >> 0x20) * 0x18));
          }
          *(Node **)(pNVar9 + uVar11 * 8) = pNVar8;
          Node::AppendUse(pNVar8,(Use *)(pNVar4 + ((long)-(uVar10 << 0x20) >> 0x20) * 0x18));
        }
        uVar3 = 1;
      }
      uVar6 = (ulong)*(uint *)(lVar12 + 0x14) & 0xffffff;
      lVar7 = *(long *)(*(long *)(this + 0x60) + uVar6 * 0x10);
      if ((lVar7 != 0) && (pNVar8 = *(Node **)(lVar7 + 8), pNVar8 != (Node *)0x0)) {
        if (1 < *(int *)(*(long *)(this + 0x60) + uVar6 * 0x10 + 0xc)) {
          lVar7 = 2;
          while( true ) {
            Node::InsertInput(param_1,*(Zone **)**(undefined8 **)this,(int)uVar10 + (int)lVar7 + -2,
                              pNVar8);
            uVar6 = (ulong)*(uint *)(lVar12 + 0x14) & 0xffffff;
            if (*(int *)(*(long *)(this + 0x60) + uVar6 * 0x10 + 0xc) <= lVar7) break;
            pNVar8 = *(Node **)(*(long *)(*(long *)(this + 0x60) + uVar6 * 0x10) + lVar7 * 8);
            lVar7 = lVar7 + 1;
          }
        }
        uVar3 = 1;
      }
      uVar10 = uVar11;
    } while (0 < (long)uVar11);
  }
  return uVar3;
}

