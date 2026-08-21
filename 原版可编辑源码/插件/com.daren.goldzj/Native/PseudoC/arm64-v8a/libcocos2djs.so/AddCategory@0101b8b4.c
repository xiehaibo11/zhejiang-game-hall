
/* v8::internal::FreeListManyCached::AddCategory(v8::internal::FreeListCategory*) */

undefined8 __thiscall
v8::internal::FreeListManyCached::AddCategory(FreeListManyCached *this,FreeListCategory *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar3 = *(int *)param_1;
  lVar5 = *(long *)(*(long *)(this + 0x20) + (long)iVar3 * 8);
  if (lVar5 != 0) {
    *(FreeListCategory **)(lVar5 + 0x10) = param_1;
  }
  *(long *)(param_1 + 0x18) = lVar5;
  *(FreeListCategory **)(*(long *)(this + 0x20) + (long)iVar3 * 8) = param_1;
  *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + (ulong)*(uint *)(param_1 + 4);
  uVar2 = *(uint *)param_1;
  uVar4 = uVar2;
  if (-1 < (int)uVar2) {
    do {
      if ((int)*(uint *)(this + (ulong)uVar4 * 4 + 0x30) <= (int)uVar2) {
        return 1;
      }
      *(uint *)(this + (ulong)uVar4 * 4 + 0x30) = uVar2;
      bVar1 = 0 < (int)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return 1;
}

