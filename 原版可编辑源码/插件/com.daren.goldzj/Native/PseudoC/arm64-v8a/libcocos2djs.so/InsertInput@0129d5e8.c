
/* v8::internal::compiler::Node::InsertInput(v8::internal::Zone*, int,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Node::InsertInput(Node *this,Zone *param_1,int param_2,Node *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  Node *pNVar6;
  Node *pNVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  Node *pNVar12;
  Node *pNVar13;
  
  if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
    uVar4 = *(uint *)(*(long *)(this + 0x20) + 8);
    pNVar6 = (Node *)(*(long *)(this + 0x20) + 0x10);
  }
  else {
    pNVar6 = this + 0x20;
    uVar4 = *(uint *)(this + 0x14) >> 0x18 & 0xf;
  }
  pNVar7 = this + 0x20;
  AppendInput(this,param_1,*(Node **)(pNVar6 + (long)(int)(uVar4 - 1) * 8));
  uVar4 = *(uint *)(this + 0x14);
  if ((~uVar4 & 0xf000000) == 0) {
    uVar9 = *(uint *)(*(long *)pNVar7 + 8);
  }
  else {
    uVar9 = uVar4 >> 0x18 & 0xf;
  }
  if (param_2 < (int)(uVar9 - 1)) {
    lVar5 = (long)(int)(uVar9 - 1);
    iVar8 = uVar9 - 2;
    iVar10 = -uVar9;
    while( true ) {
      pNVar6 = pNVar7;
      if ((uVar4 & 0xf000000) == 0xf000000) {
        pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      lVar11 = *(long *)(pNVar6 + (long)iVar8 * 8);
      lVar2 = *(long *)(pNVar6 + lVar5 * 8);
      if (lVar2 != lVar11) {
        pNVar12 = this;
        if ((uVar4 & 0xf000000) == 0xf000000) {
          pNVar12 = *(Node **)pNVar7;
        }
        pNVar13 = pNVar12 + (long)iVar10 * 0x18;
        if (lVar2 != 0) {
          puVar3 = *(undefined8 **)(pNVar12 + (long)iVar10 * 0x18 + 8);
          puVar1 = (undefined8 *)(lVar2 + 0x18);
          if (puVar3 != (undefined8 *)0x0) {
            puVar1 = puVar3;
          }
          *puVar1 = *(undefined8 *)pNVar13;
          if (*(long *)pNVar13 != 0) {
            *(undefined8 *)(*(long *)pNVar13 + 8) =
                 *(undefined8 *)(pNVar12 + (long)iVar10 * 0x18 + 8);
          }
        }
        *(long *)(pNVar6 + lVar5 * 8) = lVar11;
        if (lVar11 != 0) {
          *(undefined8 *)pNVar13 = *(undefined8 *)(lVar11 + 0x18);
          *(undefined8 *)(pNVar12 + (long)iVar10 * 0x18 + 8) = 0;
          if (*(long *)(lVar11 + 0x18) != 0) {
            *(Node **)(*(long *)(lVar11 + 0x18) + 8) = pNVar13;
          }
          *(Node **)(lVar11 + 0x18) = pNVar13;
        }
      }
      lVar5 = lVar5 + -1;
      if (lVar5 <= param_2) break;
      uVar4 = *(uint *)(this + 0x14);
      iVar8 = iVar8 + -1;
      iVar10 = iVar10 + 1;
    }
    uVar4 = *(uint *)(this + 0x14);
  }
  pNVar6 = pNVar7;
  if ((uVar4 & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  pNVar12 = *(Node **)(pNVar6 + (long)param_2 * 8);
  if (pNVar12 != param_3) {
    if ((uVar4 & 0xf000000) == 0xf000000) {
      this = *(Node **)pNVar7;
    }
    uVar4 = ~param_2;
    pNVar7 = this + (long)(int)uVar4 * 0x18;
    if (pNVar12 != (Node *)0x0) {
      pNVar13 = *(Node **)(this + (long)(int)uVar4 * 0x18 + 8);
      pNVar12 = pNVar12 + 0x18;
      if (pNVar13 != (Node *)0x0) {
        pNVar12 = pNVar13;
      }
      *(undefined8 *)pNVar12 = *(undefined8 *)pNVar7;
      if (*(long *)pNVar7 != 0) {
        *(undefined8 *)(*(long *)pNVar7 + 8) = *(undefined8 *)(this + (long)(int)uVar4 * 0x18 + 8);
      }
    }
    *(Node **)(pNVar6 + (long)param_2 * 8) = param_3;
    if (param_3 != (Node *)0x0) {
      *(undefined8 *)pNVar7 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(this + (long)(int)uVar4 * 0x18 + 8) = 0;
      if (*(long *)(param_3 + 0x18) != 0) {
        *(Node **)(*(long *)(param_3 + 0x18) + 8) = pNVar7;
      }
      *(Node **)(param_3 + 0x18) = pNVar7;
    }
  }
  return;
}

