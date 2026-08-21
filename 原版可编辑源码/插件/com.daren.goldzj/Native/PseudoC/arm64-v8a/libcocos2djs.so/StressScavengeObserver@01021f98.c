
/* v8::internal::StressScavengeObserver::StressScavengeObserver(v8::internal::Heap*) */

void __thiscall
v8::internal::StressScavengeObserver::StressScavengeObserver
          (StressScavengeObserver *this,Heap *param_1)

{
  uint uVar1;
  RandomNumberGenerator *this_00;
  
  *(Heap **)(this + 0x18) = param_1;
  this[0x24] = (StressScavengeObserver)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0x40;
  *(undefined8 *)(this + 8) = 0x40;
  *(undefined ***)this = &PTR__AllocationObserver_01caa360;
  uVar1 = FLAG_stress_scavenge;
  if (0 < (int)FLAG_stress_scavenge) {
    this_00 = (RandomNumberGenerator *)Isolate::fuzzer_rng((Isolate *)(param_1 + -0x8850));
    uVar1 = base::RandomNumberGenerator::NextInt(this_00,uVar1 + 1);
  }
  *(uint *)(this + 0x20) = uVar1;
  if ((FLAG_trace_stress_scavenge != '\0') && (FLAG_fuzzer_gc_analysis == '\0')) {
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)(this + 0x18) + -0x8850),"[StressScavenge] %d%% is the new limit\n"
               ,(ulong)uVar1);
    return;
  }
  return;
}

