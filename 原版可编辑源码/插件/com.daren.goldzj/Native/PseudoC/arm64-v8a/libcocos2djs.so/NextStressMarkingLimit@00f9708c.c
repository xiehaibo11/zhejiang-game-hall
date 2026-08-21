
/* v8::internal::Heap::NextStressMarkingLimit() */

void __thiscall v8::internal::Heap::NextStressMarkingLimit(Heap *this)

{
  RandomNumberGenerator *this_00;
  
  this_00 = (RandomNumberGenerator *)Isolate::fuzzer_rng((Isolate *)(this + -0x8850));
  base::RandomNumberGenerator::NextInt(this_00,FLAG_stress_marking + 1);
  return;
}

