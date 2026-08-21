
/* v8::internal::compiler::NodeHashCache::Constructor::MutableNode() */

long __thiscall v8::internal::compiler::NodeHashCache::Constructor::MutableNode(Constructor *this)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  long *plVar6;
  Node *this_00;
  uint uVar7;
  Node *this_01;
  ulong uVar8;
  int iVar9;
  Node *pNVar10;
  
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 == 0) {
    puVar5 = *(undefined8 **)this;
    if (puVar5[8] == puVar5[9]) {
      lVar3 = Graph::CloneNode((Graph *)*puVar5,*(Node **)(this + 8));
      *(long *)(this + 0x10) = lVar3;
    }
    else {
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(puVar5[9] + -8);
      puVar5[9] = puVar5[9] + -8;
      uVar7 = *(uint *)(*(long *)(this + 8) + 0x14);
      if ((~uVar7 & 0xf000000) == 0) {
        uVar7 = *(uint *)(*(long *)(*(long *)(this + 8) + 0x20) + 8);
      }
      else {
        uVar7 = uVar7 >> 0x18 & 0xf;
      }
      pNVar4 = *(Node **)(this + 0x10);
      if ((~*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0) {
        uVar2 = *(uint *)(*(long *)(pNVar4 + 0x20) + 8);
      }
      else {
        uVar2 = *(uint *)(pNVar4 + 0x14) >> 0x18 & 0xf;
      }
      if ((int)uVar7 <= (int)uVar2) {
        Node::TrimInputCount(pNVar4,uVar7);
      }
      if (0 < (int)uVar7) {
        uVar8 = 0;
        iVar9 = -1;
        do {
          pNVar4 = *(Node **)(this + 0x10);
          if ((long)uVar8 < (long)(int)uVar2) {
            plVar6 = (long *)(*(long *)(this + 8) + 0x20);
            if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
              plVar6 = (long *)(*plVar6 + 0x10);
            }
            this_01 = (Node *)plVar6[uVar8];
            pNVar1 = pNVar4 + 0x20;
            pNVar10 = pNVar1;
            if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar10 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            this_00 = *(Node **)(pNVar10 + uVar8 * 8);
            if (this_00 != this_01) {
              if ((*(uint *)(pNVar4 + 0x14) & 0xf000000) == 0xf000000) {
                pNVar4 = *(Node **)pNVar1;
              }
              if (this_00 != (Node *)0x0) {
                Node::RemoveUse(this_00,(Use *)(pNVar4 + (long)iVar9 * 0x18));
              }
              *(Node **)(pNVar10 + uVar8 * 8) = this_01;
              if (this_01 != (Node *)0x0) {
                Node::AppendUse(this_01,(Use *)(pNVar4 + (long)iVar9 * 0x18));
              }
            }
          }
          else {
            plVar6 = (long *)(*(long *)(this + 8) + 0x20);
            if ((~*(uint *)(*(long *)(this + 8) + 0x14) & 0xf000000) == 0) {
              plVar6 = (long *)(*plVar6 + 0x10);
            }
            Node::AppendInput(pNVar4,*(Zone **)**(undefined8 **)this,(Node *)plVar6[uVar8]);
          }
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (uVar7 != uVar8);
      }
      *(undefined8 *)(*(long *)(this + 0x10) + 8) = *(undefined8 *)(*(long *)(this + 8) + 8);
      NodeProperties::ChangeOp(*(Node **)(this + 0x10),(Operator *)**(undefined8 **)(this + 8));
      lVar3 = *(long *)(this + 0x10);
    }
  }
  return lVar3;
}

