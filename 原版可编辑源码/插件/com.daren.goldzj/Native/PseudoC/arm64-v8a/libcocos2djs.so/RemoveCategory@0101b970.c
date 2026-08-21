
/* v8::internal::FreeListManyCached::RemoveCategory(v8::internal::FreeListCategory*) */

void __thiscall
v8::internal::FreeListManyCached::RemoveCategory(FreeListManyCached *this,FreeListCategory *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  FreeListCategory *pFVar4;
  long lVar5;
  uint uVar6;
  FreeListCategory *pFVar7;
  
  iVar2 = *(int *)param_1;
  pFVar7 = *(FreeListCategory **)(*(long *)(this + 0x20) + (long)iVar2 * 8);
  pFVar4 = param_1 + 0x10;
  if (((*(long *)pFVar4 != 0) || (pFVar7 == param_1)) || (*(long *)(param_1 + 0x18) != 0)) {
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - (ulong)*(uint *)(param_1 + 4);
  }
  if (pFVar7 == param_1) {
    *(undefined8 *)(*(long *)(this + 0x20) + (long)iVar2 * 8) = *(undefined8 *)(param_1 + 0x18);
    lVar5 = *(long *)pFVar4;
  }
  else {
    lVar5 = *(long *)pFVar4;
  }
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)pFVar4;
  }
  *(long *)pFVar4 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = *(uint *)param_1;
  if ((-1 < (int)uVar3) && (*(long *)(*(long *)(this + 0x20) + (long)(int)uVar3 * 8) == 0)) {
    uVar6 = uVar3;
    do {
      if (*(uint *)(this + (ulong)uVar6 * 4 + 0x30) != uVar3) {
        return;
      }
      *(int *)(this + (ulong)uVar6 * 4 + 0x30) = *(int *)(this + (long)(int)(uVar3 + 1) * 4 + 0x30);
      bVar1 = 0 < (int)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}

