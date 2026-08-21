
/* v8::internal::FreeListCategory::RepairFreeList(v8::internal::Heap*) */

void __thiscall v8::internal::FreeListCategory::RepairFreeList(FreeListCategory *this,Heap *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 8);
  if ((int)uVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + -0x87d0);
    iVar2 = *(int *)(uVar4 - 1);
    while( true ) {
      if (iVar2 == 0) {
        *(undefined4 *)(uVar4 - 1) = uVar3;
      }
      puVar1 = (uint *)(uVar4 + 7);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
      if (*puVar1 == 0) break;
      iVar2 = *(int *)(uVar4 - 1);
    }
  }
  return;
}

