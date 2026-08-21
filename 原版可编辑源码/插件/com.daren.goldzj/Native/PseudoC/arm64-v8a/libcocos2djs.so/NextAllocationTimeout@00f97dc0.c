
/* v8::internal::Heap::NextAllocationTimeout(int) */

ulong __thiscall v8::internal::Heap::NextAllocationTimeout(Heap *this,int param_1)

{
  RandomNumberGenerator *this_00;
  ulong uVar1;
  uint uVar2;
  
  uVar2 = FLAG_gc_interval;
  if ((0 < FLAG_random_gc_interval) && (uVar2 = param_1, param_1 < 1)) {
    this_00 = (RandomNumberGenerator *)Isolate::fuzzer_rng((Isolate *)(this + -0x8850));
    uVar1 = base::RandomNumberGenerator::NextInt(this_00,FLAG_random_gc_interval + 1);
    return uVar1;
  }
  return (ulong)uVar2;
}

