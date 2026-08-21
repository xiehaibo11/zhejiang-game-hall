
/* v8::internal::FreeList::Reset() */

void __thiscall v8::internal::FreeList::Reset(FreeList *this)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 8);
  if (0 < iVar4) {
    lVar1 = 0;
    do {
      piVar2 = *(int **)(*(long *)(this + 0x20) + lVar1 * 8);
      if (piVar2 != (int *)0x0) {
        do {
          piVar3 = *(int **)(piVar2 + 6);
          if (((piVar3 != (int *)0x0 || *(long *)(piVar2 + 4) != 0) ||
              (*(int **)(*(long *)(this + 0x20) + (long)*piVar2 * 8) == piVar2)) && (piVar2[2] != 0)
             ) {
            *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - (ulong)(uint)piVar2[1];
          }
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[7] = 0;
          piVar2[5] = 0;
          piVar2[6] = 0;
          piVar2 = piVar3;
        } while (piVar3 != (int *)0x0);
        iVar4 = *(int *)(this + 8);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar4);
    if (0 < iVar4) {
      lVar1 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(this + 8));
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

