
/* v8::internal::MarkCompactCollector::StartCompaction() */

MarkCompactCollector __thiscall
v8::internal::MarkCompactCollector::StartCompaction(MarkCompactCollector *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  PagedSpace *pPVar5;
  ulong uVar6;
  
  if (this[0x4e] != (MarkCompactCollector)0x0) {
    return (MarkCompactCollector)0x1;
  }
  if ((FLAG_gc_experiment_less_compaction != '\0') &&
     ((*(byte *)(*(long *)(this + 8) + 0xad4) & 1) == 0)) {
    return (MarkCompactCollector)0x0;
  }
  CollectEvacuationCandidates(this,*(PagedSpace **)(*(long *)(this + 8) + 0xf0));
  if (FLAG_compact_code_space == '\0') {
    if (FLAG_trace_fragmentation == '\0') goto LAB_00faaea0;
    pPVar5 = *(PagedSpace **)(*(long *)(this + 8) + 0xf8);
    uVar2 = PagedSpace::CountTotalPages(pPVar5);
    iVar1 = *(int *)(pPVar5 + 0xa0);
    lVar3 = (**(code **)(*(long *)pPVar5 + 0x50))(pPVar5);
    uVar6 = (int)(uVar2 * iVar1) - lVar3;
    uVar4 = Heap::GetSpaceName(*(undefined4 *)(pPVar5 + 0x48));
    PrintF("[%s]: %d pages, %d (%.1f%%) free\n",
           ((double)(long)uVar6 * 100.0) / (double)(int)(uVar2 * iVar1),uVar4,(ulong)uVar2,
           uVar6 & 0xffffffff);
  }
  else {
    CollectEvacuationCandidates(this,*(PagedSpace **)(*(long *)(this + 8) + 0xf8));
  }
  if (FLAG_trace_fragmentation != '\0') {
    pPVar5 = *(PagedSpace **)(*(long *)(this + 8) + 0x100);
    uVar2 = PagedSpace::CountTotalPages(pPVar5);
    iVar1 = *(int *)(pPVar5 + 0xa0);
    lVar3 = (**(code **)(*(long *)pPVar5 + 0x50))(pPVar5);
    uVar6 = (int)(uVar2 * iVar1) - lVar3;
    uVar4 = Heap::GetSpaceName(*(undefined4 *)(pPVar5 + 0x48));
    PrintF("[%s]: %d pages, %d (%.1f%%) free\n",
           ((double)(long)uVar6 * 100.0) / (double)(int)(uVar2 * iVar1),uVar4,(ulong)uVar2,
           uVar6 & 0xffffffff);
  }
LAB_00faaea0:
  this[0x4e] = (MarkCompactCollector)(*(long *)(this + 0x2698) != *(long *)(this + 0x26a0));
  return (MarkCompactCollector)(*(long *)(this + 0x2698) != *(long *)(this + 0x26a0));
}

