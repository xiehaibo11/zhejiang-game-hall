
/* v8::internal::Heap::EnsureFillerObjectAtTop() */

void __thiscall v8::internal::Heap::EnsureFillerObjectAtTop(Heap *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(*(long *)(this + 0xe8) + 0x68);
  if (((*(undefined4 **)(((ulong)(puVar2 + -1) & 0xfffffffffffc0000) + 0x20) <= puVar2) &&
      (puVar3 = *(undefined4 **)(((ulong)(puVar2 + -1) & 0xfffffffffffc0000) + 0x28),
      puVar2 < puVar3)) && (iVar1 = (int)puVar3 - (int)puVar2, iVar1 != 0)) {
    if (iVar1 == 4) {
      *puVar2 = *(undefined4 *)(this + -0x87c8);
      return;
    }
    if (iVar1 == 8) {
      *puVar2 = *(undefined4 *)(this + -0x87c0);
      return;
    }
    *puVar2 = *(undefined4 *)(this + -0x87d0);
    puVar2[1] = iVar1 * 2;
  }
  return;
}

