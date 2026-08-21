
/* v8::internal::StressScavengeObserver::NextLimit(int) */

int __thiscall
v8::internal::StressScavengeObserver::NextLimit(StressScavengeObserver *this,int param_1)

{
  int iVar1;
  int iVar2;
  RandomNumberGenerator *this_00;
  
  iVar1 = FLAG_stress_scavenge - param_1;
  iVar2 = FLAG_stress_scavenge;
  if (iVar1 != 0 && param_1 <= FLAG_stress_scavenge) {
    this_00 = (RandomNumberGenerator *)
              Isolate::fuzzer_rng((Isolate *)(*(long *)(this + 0x18) + -0x8850));
    iVar2 = base::RandomNumberGenerator::NextInt(this_00,iVar1 + 1);
    iVar2 = iVar2 + param_1;
  }
  return iVar2;
}

