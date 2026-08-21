
/* v8::internal::FreeList::EvictFreeListItems(v8::internal::Page*) */

long __thiscall v8::internal::FreeList::EvictFreeListItems(FreeList *this,Page *param_1)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  long local_28;
  
  local_28 = 0;
  if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8)) {
    lVar2 = 0;
    do {
      piVar1 = *(int **)(*(long *)(param_1 + 0xf0) + lVar2 * 8);
      puVar3 = (uint *)(piVar1 + 1);
      local_28 = local_28 + (ulong)*puVar3;
      (**(code **)(*(long *)this + 0x40))(this,piVar1);
      if ((((*(long *)(piVar1 + 4) != 0) || (*(long *)(piVar1 + 6) != 0)) ||
          (*(int **)(*(long *)(this + 0x20) + (long)*piVar1 * 8) == piVar1)) && (piVar1[2] != 0)) {
        *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - (ulong)*puVar3;
      }
      puVar3[0] = 0;
      puVar3[1] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[7] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x60) + 8));
  }
  return local_28;
}

