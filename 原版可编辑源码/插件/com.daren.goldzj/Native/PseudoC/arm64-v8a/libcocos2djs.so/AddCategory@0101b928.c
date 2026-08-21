
/* v8::internal::FreeList::AddCategory(v8::internal::FreeListCategory*) */

undefined8 __thiscall v8::internal::FreeList::AddCategory(FreeList *this,FreeListCategory *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)param_1;
    lVar2 = *(long *)(*(long *)(this + 0x20) + (long)iVar1 * 8);
    if (lVar2 != 0) {
      *(FreeListCategory **)(lVar2 + 0x10) = param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
    *(FreeListCategory **)(*(long *)(this + 0x20) + (long)iVar1 * 8) = param_1;
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + (ulong)*(uint *)(param_1 + 4);
    return 1;
  }
  return 0;
}

