
/* v8::internal::PagedSpace::ResetFreeList() */

void __thiscall v8::internal::PagedSpace::ResetFreeList(PagedSpace *this)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  for (lVar4 = *(long *)(this + 0x20); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0xe0)) {
    plVar2 = *(long **)(this + 0x60);
    if (0 < *(int *)(*(long *)(*(long *)(lVar4 + 0x58) + 0x60) + 8)) {
      lVar5 = 0;
      do {
        piVar3 = *(int **)(*(long *)(lVar4 + 0xf0) + lVar5 * 8);
        puVar1 = (uint *)(piVar3 + 1);
        (**(code **)(*plVar2 + 0x40))(plVar2,piVar3);
        if ((((*(long *)(piVar3 + 4) != 0) || (*(long *)(piVar3 + 6) != 0)) ||
            (*(int **)(plVar2[4] + (long)*piVar3 * 8) == piVar3)) && (piVar3[2] != 0)) {
          plVar2[5] = plVar2[5] - (ulong)*puVar1;
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[7] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(*(long *)(*(long *)(lVar4 + 0x58) + 0x60) + 8));
    }
  }
  return;
}

