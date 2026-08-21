
/* v8::internal::Heap::SelectGarbageCollector(v8::internal::AllocationSpace, char const**) */

long __thiscall
v8::internal::Heap::SelectGarbageCollector(Heap *this,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  long lVar5;
  
  if ((param_2 == 1) || (param_2 == 7)) {
    if ((FLAG_gc_global == '\0') &&
       ((FLAG_stress_compaction == '\0' || (((byte)this[0x1b4] & 1) == 0)))) {
      if (((*(int *)(*(long *)(this + 0x828) + 0x58) < 2) ||
          (1 < *(int *)(*(long *)(this + 0x828) + 100) - 1U)) ||
         (uVar1 = AllocationLimitOvershotByLargeMargin(this), (uVar1 & 1) == 0)) {
        lVar5 = *(long *)(*(long *)(this + 0xe8) + 0x138);
        lVar2 = (**(code **)(**(long **)(this + 0x118) + 0x48))();
        uVar1 = CanExpandOldGeneration(this,lVar2 + lVar5);
        if ((uVar1 & 1) != 0) {
          *param_3 = 0;
          return (ulong)FLAG_minor_mc << 1;
        }
        lVar2 = *(long *)(*(long *)(this + 0x30) + 0x9520);
        if (*(char *)(lVar2 + 0x1af8) == '\0') {
          *(char *)(lVar2 + 0x1af8) = '\x01';
          piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                    ((StatsCounterBase *)(lVar2 + 0x1ae0));
          *(int **)(lVar2 + 0x1af0) = piVar3;
        }
        else {
          piVar3 = *(int **)(lVar2 + 0x1af0);
        }
        if (piVar3 != (int *)0x0) {
          *piVar3 = *piVar3 + 1;
        }
        pcVar4 = "scavenge might not succeed";
      }
      else {
        pcVar4 = "Incremental marking needs finalization";
      }
    }
    else {
      pcVar4 = "GC in old space forced by flags";
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 0x30) + 0x9520);
    if (*(char *)(lVar2 + 0x1ab8) == '\0') {
      *(char *)(lVar2 + 0x1ab8) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar2 + 0x1aa0));
      *(int **)(lVar2 + 0x1ab0) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar2 + 0x1ab0);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    pcVar4 = "GC in old space requested";
  }
  *param_3 = pcVar4;
  return 1;
}

