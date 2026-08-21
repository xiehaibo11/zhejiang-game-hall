
/* v8::internal::FreeList::RemoveCategory(v8::internal::FreeListCategory*) */

void __thiscall v8::internal::FreeList::RemoveCategory(FreeList *this,FreeListCategory *param_1)

{
  int iVar1;
  FreeListCategory *pFVar2;
  long lVar3;
  FreeListCategory *pFVar4;
  
  iVar1 = *(int *)param_1;
  pFVar4 = *(FreeListCategory **)(*(long *)(this + 0x20) + (long)iVar1 * 8);
  pFVar2 = param_1 + 0x10;
  if (((*(long *)pFVar2 != 0) || (pFVar4 == param_1)) || (*(long *)(param_1 + 0x18) != 0)) {
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - (ulong)*(uint *)(param_1 + 4);
  }
  if (pFVar4 == param_1) {
    *(undefined8 *)(*(long *)(this + 0x20) + (long)iVar1 * 8) = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(long *)pFVar2;
  }
  else {
    lVar3 = *(long *)pFVar2;
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)pFVar2;
  }
  *(long *)pFVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

