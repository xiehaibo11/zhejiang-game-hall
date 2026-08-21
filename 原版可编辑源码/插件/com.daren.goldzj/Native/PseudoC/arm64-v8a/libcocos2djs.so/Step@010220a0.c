
/* v8::internal::StressScavengeObserver::Step(int, unsigned long, unsigned long) */

void v8::internal::StressScavengeObserver::Step(int param_1,ulong param_2,ulong param_3)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double *pdVar6;
  double dVar7;
  double local_38;
  
  uVar2 = (ulong)(uint)param_1;
  if ((*(char *)(uVar2 + 0x24) == '\0') &&
     (uVar4 = *(ulong *)(*(long *)(*(long *)(uVar2 + 0x18) + 0xe8) + 0x138),
     lVar3 = MemoryChunkLayout::AllocatableMemoryInDataPage(), (uVar4 >> 0x12) * lVar3 != 0)) {
    uVar4 = (**(code **)(**(long **)(*(long *)(uVar2 + 0x18) + 0xe8) + 0x48))();
    uVar5 = *(ulong *)(*(long *)(*(long *)(uVar2 + 0x18) + 0xe8) + 0x138);
    lVar3 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    dVar7 = ((double)uVar4 * 100.0) / (double)((uVar5 >> 0x12) * lVar3);
    local_38 = dVar7;
    if (FLAG_trace_stress_scavenge != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)(uVar2 + 0x18) + -0x8850),dVar7,
                 "[Scavenge] %.2lf%% of the new space capacity reached\n");
    }
    if (FLAG_fuzzer_gc_analysis == '\0') {
      if (*(int *)(uVar2 + 0x20) <= (int)dVar7) {
        if (FLAG_trace_stress_scavenge != '\0') {
          Isolate::PrintWithTimestamp
                    ((char *)(*(long *)(uVar2 + 0x18) + -0x8850),"[Scavenge] GC requested\n");
        }
        *(undefined1 *)(uVar2 + 0x24) = 1;
        StackGuard::RequestInterrupt((StackGuard *)(*(long *)(uVar2 + 0x18) + -0x8808),2);
      }
    }
    else {
      pdVar6 = (double *)(uVar2 + 0x28);
      pdVar1 = &local_38;
      if (dVar7 <= *pdVar6) {
        pdVar1 = pdVar6;
      }
      *pdVar6 = *pdVar1;
    }
  }
  return;
}

