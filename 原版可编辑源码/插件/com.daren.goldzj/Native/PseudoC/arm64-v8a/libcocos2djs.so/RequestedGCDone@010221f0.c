
/* v8::internal::StressScavengeObserver::RequestedGCDone() */

void __thiscall v8::internal::StressScavengeObserver::RequestedGCDone(StressScavengeObserver *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  RandomNumberGenerator *this_00;
  ulong uVar5;
  int iVar6;
  double dVar7;
  
  uVar3 = (**(code **)(**(long **)(*(long *)(this + 0x18) + 0xe8) + 0x48))();
  uVar5 = *(ulong *)(*(long *)(*(long *)(this + 0x18) + 0xe8) + 0x138);
  lVar4 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  dVar7 = ((double)uVar3 * 100.0) / (double)((uVar5 >> 0x12) * lVar4);
  iVar6 = (int)dVar7;
  iVar1 = FLAG_stress_scavenge - iVar6;
  iVar2 = FLAG_stress_scavenge;
  if (iVar1 != 0 && iVar6 <= FLAG_stress_scavenge) {
    this_00 = (RandomNumberGenerator *)
              Isolate::fuzzer_rng((Isolate *)(*(long *)(this + 0x18) + -0x8850));
    iVar2 = base::RandomNumberGenerator::NextInt(this_00,iVar1 + 1);
    iVar2 = iVar2 + iVar6;
  }
  *(int *)(this + 0x20) = iVar2;
  if (FLAG_trace_stress_scavenge != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)(this + 0x18) + -0x8850),dVar7,
               "[Scavenge] %.2lf%% of the new space capacity reached\n");
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)(this + 0x18) + -0x8850),"[Scavenge] %d%% is the new limit\n",
               (ulong)*(uint *)(this + 0x20));
  }
  this[0x24] = (StressScavengeObserver)0x0;
  return;
}

