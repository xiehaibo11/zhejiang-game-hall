
/* v8::internal::compiler::Node::ClearInputs(int, int) */

void __thiscall v8::internal::compiler::Node::ClearInputs(Node *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  Node *pNVar2;
  Node *pNVar3;
  long lVar4;
  
  if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
    this = *(Node **)(this + 0x20);
    pNVar2 = this + (long)param_1 * 8 + 0x10;
  }
  else {
    pNVar2 = this + 0x20 + (long)param_1 * 8;
  }
  if (0 < param_2) {
    pNVar3 = this + (long)~param_1 * 0x18 + 8;
    do {
      lVar4 = *(long *)pNVar2;
      param_2 = param_2 + -1;
      *(undefined8 *)pNVar2 = 0;
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0x18);
        if (*(undefined8 **)pNVar3 != (undefined8 *)0x0) {
          puVar1 = *(undefined8 **)pNVar3;
        }
        *puVar1 = *(undefined8 *)(pNVar3 + -8);
        if (*(long *)(pNVar3 + -8) != 0) {
          *(undefined8 *)(*(long *)(pNVar3 + -8) + 8) = *(undefined8 *)pNVar3;
        }
      }
      pNVar2 = pNVar2 + 8;
      pNVar3 = pNVar3 + -0x18;
    } while (0 < param_2);
  }
  return;
}

