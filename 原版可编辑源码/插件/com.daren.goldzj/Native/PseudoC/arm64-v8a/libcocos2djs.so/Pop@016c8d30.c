
/* v8::internal::compiler::GraphReducer::Pop() */

void __thiscall v8::internal::compiler::GraphReducer::Pop(GraphReducer *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar3 = (*(long *)(this + 200) + *(long *)(this + 0xc0)) - 1;
  *(int *)(*(long *)(*(long *)(*(long *)(this + 0x98) + (uVar3 >> 5 & 0x7fffffffffffff8)) +
                    (uVar3 & 0xff) * 0x10) + 0x10) = *(int *)(this + 0x18) + 3;
  lVar4 = *(long *)(this + 0xa0);
  lVar2 = *(long *)(this + 200);
  lVar1 = 0;
  if (lVar4 - *(long *)(this + 0x98) != 0) {
    lVar1 = (lVar4 - *(long *)(this + 0x98)) * 0x20 + -1;
  }
  *(long *)(this + 200) = lVar2 + -1;
  if (0x1ff < (lVar1 - (lVar2 + *(long *)(this + 0xc0))) + 1U) {
    puVar5 = *(undefined8 **)(lVar4 + -8);
    if ((*(long *)(this + 0xd8) == 0) || (*(ulong *)(*(long *)(this + 0xd8) + 8) < 0x101)) {
      puVar5[1] = 0x100;
      *puVar5 = *(undefined8 *)(this + 0xd8);
      lVar4 = *(long *)(this + 0xa0);
      *(undefined8 **)(this + 0xd8) = puVar5;
    }
    *(long *)(this + 0xa0) = lVar4 + -8;
  }
  return;
}

