
/* v8::internal::Isolate::fuzzer_rng() */

RandomNumberGenerator * __thiscall v8::internal::Isolate::fuzzer_rng(Isolate *this)

{
  int iVar1;
  long lVar2;
  RandomNumberGenerator *pRVar3;
  
  iVar1 = FLAG_random_seed;
  pRVar3 = *(RandomNumberGenerator **)(this + 0xb648);
  if (pRVar3 == (RandomNumberGenerator *)0x0) {
    lVar2 = (long)FLAG_fuzzer_random_seed;
    if (FLAG_fuzzer_random_seed == 0) {
      pRVar3 = *(RandomNumberGenerator **)(this + 0xb640);
      if (pRVar3 == (RandomNumberGenerator *)0x0) {
        lVar2 = (long)FLAG_random_seed;
        pRVar3 = operator_new(0x18);
        if (iVar1 == 0) {
          base::RandomNumberGenerator::RandomNumberGenerator(pRVar3);
        }
        else {
          base::RandomNumberGenerator::SetSeed(pRVar3,lVar2);
        }
        *(RandomNumberGenerator **)(this + 0xb640) = pRVar3;
      }
      lVar2 = *(long *)pRVar3;
    }
    pRVar3 = operator_new(0x18);
    base::RandomNumberGenerator::SetSeed(pRVar3,lVar2);
    *(RandomNumberGenerator **)(this + 0xb648) = pRVar3;
  }
  return pRVar3;
}

