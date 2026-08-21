
/* v8::internal::compiler::Node::RemoveInput(int) */

void __thiscall v8::internal::compiler::Node::RemoveInput(Node *this,int param_1)

{
  Node *pNVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  Node *pNVar6;
  Node *pNVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  Node *pNVar14;
  uint uVar15;
  
  pNVar1 = this + 0x20;
  lVar12 = (ulong)(uint)param_1 << 0x20;
  lVar13 = (long)param_1;
  while( true ) {
    uVar11 = *(uint *)(this + 0x14);
    uVar2 = uVar11 & 0xf000000;
    if (uVar2 == 0xf000000) {
      uVar15 = *(uint *)(*(long *)pNVar1 + 8);
    }
    else {
      uVar15 = uVar11 >> 0x18 & 0xf;
    }
    if ((int)(uVar15 - 1) <= lVar13) break;
    pNVar6 = pNVar1;
    if (uVar2 == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    lVar4 = *(long *)(pNVar6 + lVar13 * 8);
    lVar5 = *(long *)(pNVar6 + lVar13 * 8 + 8);
    if (lVar4 != lVar5) {
      pNVar7 = this;
      if (uVar2 == 0xf000000) {
        pNVar7 = *(Node **)pNVar1;
      }
      uVar8 = lVar12 >> 0x20 ^ 0xffffffffffffffff;
      pNVar14 = pNVar7 + uVar8 * 0x18;
      if (lVar4 != 0) {
        puVar9 = *(undefined8 **)(pNVar7 + uVar8 * 0x18 + 8);
        puVar3 = (undefined8 *)(lVar4 + 0x18);
        if (puVar9 != (undefined8 *)0x0) {
          puVar3 = puVar9;
        }
        *puVar3 = *(undefined8 *)pNVar14;
        if (*(long *)pNVar14 != 0) {
          *(undefined8 *)(*(long *)pNVar14 + 8) = *(undefined8 *)(pNVar7 + uVar8 * 0x18 + 8);
        }
      }
      *(long *)(pNVar6 + lVar13 * 8) = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)pNVar14 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(pNVar7 + uVar8 * 0x18 + 8) = 0;
        if (*(long *)(lVar5 + 0x18) != 0) {
          *(Node **)(*(long *)(lVar5 + 0x18) + 8) = pNVar14;
        }
        *(Node **)(lVar5 + 0x18) = pNVar14;
      }
    }
    lVar12 = lVar12 + 0x100000000;
    lVar13 = lVar13 + 1;
  }
  if (uVar2 == 0xf000000) {
    uVar11 = *(uint *)(*(long *)pNVar1 + 8);
  }
  else {
    uVar11 = uVar11 >> 0x18 & 0xf;
  }
  iVar10 = (int)((long)(int)uVar11 + -1);
  if (uVar2 == 0xf000000) {
    pNVar6 = *(Node **)pNVar1 + ((long)(int)uVar11 + -1) * 8 + 0x10;
    pNVar7 = *(Node **)pNVar1;
  }
  else {
    pNVar6 = pNVar1 + (long)iVar10 * 8;
    pNVar7 = this;
  }
  lVar12 = *(long *)pNVar6;
  *(undefined8 *)pNVar6 = 0;
  if (lVar12 != 0) {
    puVar9 = *(undefined8 **)(pNVar7 + (long)(int)-uVar11 * 0x18 + 8);
    puVar3 = (undefined8 *)(lVar12 + 0x18);
    if (puVar9 != (undefined8 *)0x0) {
      puVar3 = puVar9;
    }
    *puVar3 = *(undefined8 *)(pNVar7 + (long)(int)-uVar11 * 0x18);
    lVar12 = *(long *)(pNVar7 + (long)(int)-uVar11 * 0x18);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(pNVar7 + (long)(int)-uVar11 * 0x18 + 8);
    }
  }
  if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
    *(int *)(*(long *)pNVar1 + 8) = iVar10;
    return;
  }
  *(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xf0ffffff | iVar10 << 0x18;
  return;
}

