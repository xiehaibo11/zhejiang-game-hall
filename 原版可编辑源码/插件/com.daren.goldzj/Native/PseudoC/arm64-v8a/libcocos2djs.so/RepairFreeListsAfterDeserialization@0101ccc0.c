
/* v8::internal::ReadOnlySpace::RepairFreeListsAfterDeserialization() */

void __thiscall
v8::internal::ReadOnlySpace::RepairFreeListsAfterDeserialization(ReadOnlySpace *this)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  ulong local_28;
  
  lVar3 = *(long *)(this + 0x60);
  iVar7 = *(int *)(lVar3 + 8);
  if (0 < iVar7) {
    lVar5 = *(long *)(this + 0x40);
    lVar4 = 0;
    do {
      lVar6 = *(long *)(*(long *)(lVar3 + 0x20) + lVar4 * 8);
      if (lVar6 != 0) {
        do {
          uVar8 = *(ulong *)(lVar6 + 8);
          lVar6 = *(long *)(lVar6 + 0x18);
          if ((int)uVar8 != 0) {
            uVar1 = *(undefined4 *)(lVar5 + -0x87d0);
            iVar7 = *(int *)(uVar8 - 1);
            while( true ) {
              if (iVar7 == 0) {
                *(undefined4 *)(uVar8 - 1) = uVar1;
              }
              puVar9 = (uint *)(uVar8 + 7);
              uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*puVar9;
              if (*puVar9 == 0) break;
              iVar7 = *(int *)(uVar8 - 1);
            }
          }
        } while (lVar6 != 0);
        iVar7 = *(int *)(lVar3 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar7);
  }
  lVar3 = *(long *)(this + 0x20);
  do {
    if (lVar3 == 0) {
      return;
    }
    uVar8 = *(ulong *)(lVar3 + 0xd8);
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
      lVar4 = *(long *)(lVar3 + 0x28);
      puVar9 = (uint *)(*(long *)(lVar3 + 0x98) + lVar3);
      if (puVar9 < (uint *)(lVar4 - iVar7)) {
        local_28 = (long)puVar9 + 1;
        if ((*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*puVar9) | 1) != 0xa1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","filler.IsFreeSpaceOrFiller()");
        }
        iVar2 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_28,local_28 & 0xffffffff00000000 | (ulong)*puVar9);
        puVar9 = (uint *)((long)puVar9 + (long)iVar2);
      }
      if (iVar7 != (int)lVar4 - (int)puVar9) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","size == static_cast<int>(end - start)");
      }
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),puVar9,uVar8 & 0xffffffff,1,1);
    }
    lVar3 = *(long *)(lVar3 + 0xe0);
  } while( true );
}

