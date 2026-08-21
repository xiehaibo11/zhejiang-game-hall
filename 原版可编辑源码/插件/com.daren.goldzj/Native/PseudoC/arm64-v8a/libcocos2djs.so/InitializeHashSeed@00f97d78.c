
/* v8::internal::Heap::InitializeHashSeed() */

void __thiscall v8::internal::Heap::InitializeHashSeed(Heap *this)

{
  RandomNumberGenerator *this_00;
  long lVar1;
  
  lVar1 = FLAG_hash_seed;
  if (FLAG_hash_seed == 0) {
    this_00 = (RandomNumberGenerator *)Isolate::random_number_generator((Isolate *)(this + -0x8850))
    ;
    lVar1 = base::RandomNumberGenerator::NextInt64(this_00);
  }
  *(long *)(*(long *)(this + -0x83c0) + 7) = lVar1;
  return;
}

