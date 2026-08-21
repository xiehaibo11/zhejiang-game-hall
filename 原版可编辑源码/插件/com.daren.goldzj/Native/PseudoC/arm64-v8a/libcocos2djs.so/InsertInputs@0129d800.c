
/* v8::internal::compiler::Node::InsertInputs(v8::internal::Zone*, int, int) */

void __thiscall
v8::internal::compiler::Node::InsertInputs(Node *this,Zone *param_1,int param_2,int param_3)

{
  Node *pNVar1;
  undefined8 *puVar2;
  uint uVar3;
  Node *pNVar4;
  Node *pNVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  Node *pNVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  uVar14 = (ulong)(uint)param_3;
  iVar15 = 0;
  pNVar1 = this + 0x20;
  while( true ) {
    uVar12 = *(uint *)(this + 0x14);
    if ((uVar12 & 0xf000000) == 0xf000000) {
      uVar3 = *(uint *)(*(long *)pNVar1 + 8);
    }
    else {
      uVar3 = uVar12 >> 0x18 & 0xf;
    }
    if (param_3 <= iVar15) break;
    pNVar10 = pNVar1;
    if ((uVar12 & 0xf000000) == 0xf000000) {
      pNVar10 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    AppendInput(this,param_1,
                *(Node **)(pNVar10 +
                          (ulong)(uVar3 - param_3 & ((int)(uVar3 - param_3) >> 0x1f ^ 0xffffffffU))
                          * 8));
    iVar15 = iVar15 + 1;
  }
  uVar3 = uVar3 + ~param_3;
  iVar15 = param_3;
  if (param_3 <= param_2) {
    iVar15 = param_2;
  }
  if (iVar15 <= (int)uVar3) {
    lVar9 = (long)(int)uVar3;
    lVar11 = (ulong)uVar3 << 0x20;
    while( true ) {
      pNVar10 = pNVar1;
      if ((uVar12 & 0xf000000) == 0xf000000) {
        pNVar10 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      lVar13 = *(long *)(pNVar10 + lVar9 * 8 + (long)param_3 * -8);
      lVar7 = *(long *)(pNVar10 + lVar9 * 8);
      if (lVar7 != lVar13) {
        pNVar5 = this;
        if ((uVar12 & 0xf000000) == 0xf000000) {
          pNVar5 = *(Node **)pNVar1;
        }
        uVar6 = lVar11 >> 0x20 ^ 0xffffffffffffffff;
        pNVar4 = pNVar5 + uVar6 * 0x18;
        if (lVar7 != 0) {
          puVar8 = *(undefined8 **)(pNVar5 + uVar6 * 0x18 + 8);
          puVar2 = (undefined8 *)(lVar7 + 0x18);
          if (puVar8 != (undefined8 *)0x0) {
            puVar2 = puVar8;
          }
          *puVar2 = *(undefined8 *)pNVar4;
          if (*(long *)pNVar4 != 0) {
            *(undefined8 *)(*(long *)pNVar4 + 8) = *(undefined8 *)(pNVar5 + uVar6 * 0x18 + 8);
          }
        }
        *(long *)(pNVar10 + lVar9 * 8) = lVar13;
        if (lVar13 != 0) {
          *(undefined8 *)pNVar4 = *(undefined8 *)(lVar13 + 0x18);
          *(undefined8 *)(pNVar5 + uVar6 * 0x18 + 8) = 0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            *(Node **)(*(long *)(lVar13 + 0x18) + 8) = pNVar4;
          }
          *(Node **)(lVar13 + 0x18) = pNVar4;
        }
      }
      if (lVar9 <= iVar15) break;
      uVar12 = *(uint *)(this + 0x14);
      lVar9 = lVar9 + -1;
      lVar11 = lVar11 + -0x100000000;
    }
  }
  if (0 < param_3) {
    lVar11 = (ulong)(uint)param_2 << 0x20;
    uVar6 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
    do {
      pNVar10 = pNVar1;
      if ((*(uint *)(this + 0x14) & 0xf000000) == 0xf000000) {
        pNVar10 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      if (*(long *)(pNVar10 + uVar6) != 0) {
        pNVar5 = this;
        if ((*(uint *)(this + 0x14) & 0xf000000) == 0xf000000) {
          pNVar5 = *(Node **)pNVar1;
        }
        lVar9 = (lVar11 >> 0x20 ^ 0xffffffffffffffffU) * 0x18;
        puVar8 = *(undefined8 **)(pNVar5 + lVar9 + 8);
        puVar2 = (undefined8 *)(*(long *)(pNVar10 + uVar6) + 0x18);
        if (puVar8 != (undefined8 *)0x0) {
          puVar2 = puVar8;
        }
        *puVar2 = *(undefined8 *)(pNVar5 + lVar9);
        if (*(long *)(pNVar5 + lVar9) != 0) {
          *(undefined8 *)(*(long *)(pNVar5 + lVar9) + 8) = *(undefined8 *)(pNVar5 + lVar9 + 8);
        }
        *(undefined8 *)(pNVar10 + uVar6) = 0;
      }
      lVar11 = lVar11 + 0x100000000;
      uVar14 = uVar14 - 1;
      uVar6 = uVar6 + 8;
    } while (uVar14 != 0);
  }
  return;
}

