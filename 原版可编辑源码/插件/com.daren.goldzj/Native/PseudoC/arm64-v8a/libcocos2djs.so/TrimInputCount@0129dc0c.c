
/* v8::internal::compiler::Node::TrimInputCount(int) */

void __thiscall v8::internal::compiler::Node::TrimInputCount(Node *this,int param_1)

{
  Node *pNVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  Node *pNVar5;
  Node *pNVar6;
  long lVar7;
  
  uVar4 = *(uint *)(this + 0x14);
  if ((uVar4 & 0xf000000) == 0xf000000) {
    iVar3 = *(int *)(*(long *)(this + 0x20) + 8) - param_1;
  }
  else {
    iVar3 = (uVar4 >> 0x18 & 0xf) - param_1;
  }
  if (iVar3 == 0) {
    return;
  }
  pNVar1 = this + 0x20;
  if ((uVar4 & 0xf000000) == 0xf000000) {
    pNVar6 = *(Node **)pNVar1;
    pNVar5 = pNVar6 + (long)param_1 * 8 + 0x10;
  }
  else {
    pNVar5 = pNVar1 + (long)param_1 * 8;
    pNVar6 = this;
  }
  if (0 < iVar3) {
    pNVar6 = pNVar6 + (long)~param_1 * 0x18 + 8;
    do {
      lVar7 = *(long *)pNVar5;
      iVar3 = iVar3 + -1;
      *(undefined8 *)pNVar5 = 0;
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0x18);
        if (*(undefined8 **)pNVar6 != (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)pNVar6;
        }
        *puVar2 = *(undefined8 *)(pNVar6 + -8);
        if (*(long *)(pNVar6 + -8) != 0) {
          *(undefined8 *)(*(long *)(pNVar6 + -8) + 8) = *(undefined8 *)pNVar6;
        }
      }
      pNVar5 = pNVar5 + 8;
      pNVar6 = pNVar6 + -0x18;
    } while (0 < iVar3);
    uVar4 = *(uint *)(this + 0x14);
  }
  if ((~uVar4 & 0xf000000) != 0) {
    *(uint *)(this + 0x14) = uVar4 & 0xf0ffffff | param_1 << 0x18;
    return;
  }
  *(int *)(*(long *)pNVar1 + 8) = param_1;
  return;
}

