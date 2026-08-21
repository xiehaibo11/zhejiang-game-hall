
/* v8::internal::FreeList::RepairLists(v8::internal::Heap*) */

void __thiscall v8::internal::FreeList::RepairLists(FreeList *this,Heap *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  iVar5 = *(int *)(this + 8);
  if (0 < iVar5) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(this + 0x20) + lVar3 * 8);
      if (lVar4 != 0) {
        do {
          uVar6 = *(ulong *)(lVar4 + 8);
          lVar4 = *(long *)(lVar4 + 0x18);
          if ((int)uVar6 != 0) {
            uVar2 = *(undefined4 *)(param_1 + -0x87d0);
            iVar5 = *(int *)(uVar6 - 1);
            while( true ) {
              if (iVar5 == 0) {
                *(undefined4 *)(uVar6 - 1) = uVar2;
              }
              puVar1 = (uint *)(uVar6 + 7);
              uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*puVar1;
              if (*puVar1 == 0) break;
              iVar5 = *(int *)(uVar6 - 1);
            }
          }
        } while (lVar4 != 0);
        iVar5 = *(int *)(this + 8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar5);
  }
  return;
}

