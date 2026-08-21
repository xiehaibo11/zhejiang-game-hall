
/* v8::internal::UnoptimizedCompilationJob::RecordCompilationStats(v8::internal::Isolate*) const */

void __thiscall
v8::internal::UnoptimizedCompilationJob::RecordCompilationStats
          (UnoptimizedCompilationJob *this,Isolate *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_38;
  
  puVar5 = *(ulong **)(*(long *)(this + 0x28) + 0x28);
  if (puVar5 == (ulong *)0x0) {
    local_38 = **(ulong **)(*(long *)(this + 0x28) + 0x30);
    iVar3 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_38,
                       local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 - 1));
  }
  else {
    uVar7 = *puVar5;
    uVar8 = uVar7 & 0xffffffff00000000;
    iVar3 = *(int *)(uVar7 + 3);
    local_38 = uVar8 | *(uint *)(uVar7 + 7);
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar8 | *(uint *)(local_38 - 1));
    uVar1 = *(uint *)(uVar7 + 0xf);
    iVar3 = iVar2 + ((iVar3 >> 1) + 0x25U & 0xfffffffc) +
            ((*(int *)((uVar8 | *(uint *)(uVar7 + 0xb)) + 3) >> 1) + 0xbU & 0xfffffffc);
    if (((uVar1 & 1) == 0) ||
       ((uVar1 != *(uint *)(uVar8 + 0xa0) && (uVar1 != *(uint *)(uVar8 + 0x180))))) {
      uVar7 = uVar8 | uVar1;
      if (((uVar1 & 1) == 0) || (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x85)) {
        if (uVar1 == *(uint *)(uVar8 + 0x180)) {
          uVar7 = *(ulong *)(uVar8 + 0x3c0);
        }
        else {
          uVar7 = uVar8 | *(uint *)(uVar7 + 3);
        }
      }
      iVar3 = ((*(int *)(uVar7 + 3) >> 1) + 0xbU & 0xfffffffc) + iVar3;
    }
  }
  lVar6 = *(long *)(param_1 + 0x9520);
  if (*(char *)(lVar6 + 0x1e98) == '\0') {
    *(char *)(lVar6 + 0x1e98) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1e80))
    ;
    *(int **)(lVar6 + 0x1e90) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x1e90);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + iVar3;
  }
  if (*(char *)(lVar6 + 0x1eb8) == '\0') {
    *(undefined1 *)(lVar6 + 0x1eb8) = 1;
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1ea0))
    ;
    *(int **)(lVar6 + 0x1eb0) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x1eb0);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  return;
}

