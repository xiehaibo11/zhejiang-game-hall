
/* v8::internal::FreeListLegacy::FreeListLegacy() */

void __thiscall v8::internal::FreeListLegacy::FreeListLegacy(FreeListLegacy *this)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined8 *)(this + 8) = 0x500000006;
  *(undefined8 *)(this + 0x10) = 0xc;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__FreeListLegacy_01ca96b8;
  puVar1 = operator_new__(0x30);
  lVar2 = 0;
  iVar5 = 6;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 **)(this + 0x20) = puVar1;
  while (lVar2 = lVar2 + 1, lVar2 < iVar5) {
    piVar4 = *(int **)(*(long *)(this + 0x20) + lVar2 * 8);
    if (piVar4 != (int *)0x0) {
      do {
        piVar3 = *(int **)(piVar4 + 6);
        if (((piVar3 != (int *)0x0 || *(long *)(piVar4 + 4) != 0) ||
            (*(int **)(*(long *)(this + 0x20) + (long)*piVar4 * 8) == piVar4)) && (piVar4[2] != 0))
        {
          *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - (ulong)(uint)piVar4[1];
        }
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[7] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4 = piVar3;
      } while (piVar3 != (int *)0x0);
      iVar5 = *(int *)(this + 8);
    }
  }
  if (0 < iVar5) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x20) + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 8));
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

