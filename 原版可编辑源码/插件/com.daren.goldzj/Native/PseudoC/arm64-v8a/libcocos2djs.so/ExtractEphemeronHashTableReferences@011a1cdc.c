
/* v8::internal::V8HeapExplorer::ExtractEphemeronHashTableReferences(v8::internal::HeapEntry*,
   v8::internal::EphemeronHashTable) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractEphemeronHashTableReferences
          (V8HeapExplorer *this,undefined8 param_1,void *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  HeapEntry *pHVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  HeapEntry *pHVar10;
  
  if ((int)*(uint *)((long)param_3 + 0xf) >> 1 != 0) {
    lVar9 = (long)((ulong)*(uint *)((long)param_3 + 0xf) << 0x20) >> 0x21;
    uVar6 = (ulong)param_3 & 0xffffffff00000000;
    iVar7 = 0x18;
    iVar8 = 4;
    do {
      uVar1 = *(uint *)((long)param_3 + (long)(iVar7 + -0xc) + 7);
      uVar2 = *(uint *)((long)param_3 + (long)(iVar7 + -1));
      SetWeakReference(this,param_1,iVar8 + -1,(void *)(uVar6 | uVar1),iVar7 + -4);
      SetWeakReference(this,param_1,iVar8,(void *)(uVar6 | uVar2),iVar7);
      if ((uVar1 & 1) == 0) {
        pHVar10 = (HeapEntry *)0x0;
        if ((uVar2 & 1) != 0) goto LAB_011a1dfc;
LAB_011a1e60:
        lVar4 = 0;
        if (((ulong)param_3 & 1) == 0) goto LAB_011a1e68;
LAB_011a1e14:
        pHVar5 = (HeapEntry *)
                 HeapSnapshotGenerator::FindOrAddEntry
                           (*(HeapSnapshotGenerator **)(this + 0x30),param_3,
                            (HeapEntriesAllocator *)this);
      }
      else {
        pHVar10 = (HeapEntry *)
                  HeapSnapshotGenerator::FindOrAddEntry
                            (*(HeapSnapshotGenerator **)(this + 0x30),(void *)(uVar6 | uVar1),
                             (HeapEntriesAllocator *)this);
        if ((uVar2 & 1) == 0) goto LAB_011a1e60;
LAB_011a1dfc:
        lVar4 = HeapSnapshotGenerator::FindOrAddEntry
                          (*(HeapSnapshotGenerator **)(this + 0x30),(void *)(uVar6 | uVar2),
                           (HeapEntriesAllocator *)this);
        if (((ulong)param_3 & 1) != 0) goto LAB_011a1e14;
LAB_011a1e68:
        pHVar5 = (HeapEntry *)0x0;
      }
      if (((pHVar10 != (HeapEntry *)0x0) && (lVar4 != 0)) &&
         (((uVar1 & 1) == 0 || (uVar1 != *(uint *)(uVar6 + 0xa0))))) {
        uVar3 = StringsStorage::GetFormatted
                          (*(char **)(this + 0x18),
                           "part of key (%s @%u) -> value (%s @%u) pair in WeakMap (table @%u)",
                           *(undefined8 *)(pHVar10 + 0x18),(ulong)*(uint *)(pHVar10 + 0x20),
                           *(undefined8 *)(lVar4 + 0x18),(ulong)*(uint *)(lVar4 + 0x20),
                           (ulong)*(uint *)(pHVar5 + 0x20));
        HeapEntry::SetNamedAutoIndexReference(pHVar10,3,uVar3,lVar4,*(undefined8 *)(this + 0x18));
        HeapEntry::SetNamedAutoIndexReference(pHVar5,3,uVar3,lVar4,*(undefined8 *)(this + 0x18));
      }
      iVar7 = iVar7 + 8;
      lVar9 = lVar9 + -1;
      iVar8 = iVar8 + 2;
    } while (lVar9 != 0);
  }
  return;
}

