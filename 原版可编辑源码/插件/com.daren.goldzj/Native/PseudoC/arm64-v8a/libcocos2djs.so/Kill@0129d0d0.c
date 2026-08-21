
/* v8::internal::compiler::Node::Kill() */

void __thiscall v8::internal::compiler::Node::Kill(Node *this)

{
  undefined8 *puVar1;
  uint uVar2;
  Node *pNVar3;
  Node *pNVar4;
  long lVar5;
  
  if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
    this = *(Node **)(this + 0x20);
    uVar2 = *(uint *)(this + 8);
    pNVar3 = this + 0x10;
    if ((int)uVar2 < 1) {
      return;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0x14) >> 0x18 & 0xf;
    pNVar3 = this + 0x20;
    if (uVar2 == 0) {
      return;
    }
  }
  do {
    pNVar4 = this + -0x18;
    lVar5 = *(long *)pNVar3;
    uVar2 = uVar2 - 1;
    *(undefined8 *)pNVar3 = 0;
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0x18);
      if (*(undefined8 **)(this + -0x10) != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(this + -0x10);
      }
      *puVar1 = *(undefined8 *)pNVar4;
      if (*(long *)pNVar4 != 0) {
        *(undefined8 *)(*(long *)pNVar4 + 8) = *(undefined8 *)(this + -0x10);
      }
    }
    pNVar3 = pNVar3 + 8;
    this = pNVar4;
  } while (0 < (int)uVar2);
  return;
}

